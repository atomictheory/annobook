#include "anno.h"

#include "xxhash.h"

#include <iostream>
#include <fstream>

using namespace std;

int anno_alloc_ptr=1;

AnnoPtr anno_hash[ANNO_HASH_SIZE];

AnnoEntry anno_table[ANNO_TABLE_SIZE];

AnnoHashKey calc_anno_hash_key(AnnoTrunk* anno_trunk)
{
	AnnoHashKey anno_hash_key=(AnnoHashKey)XXH32((void*)anno_trunk,sizeof(AnnoTrunk),0);

	anno_hash_key&=ANNO_HASH_MASK;

	return anno_hash_key;
}

void AnnoEntry::init(Position* p,char* algeb)
{
	next=NULL;

	memcpy(id.pos_trunk,(char*)p,sizeof(PositionTrunk));
	memset(id.algeb,0,6);
	strcpy_s(id.algeb,algeb);
}

AnnoEntry* look_up_anno_entry(Position* p,char* algeb,bool create)
{

	AnnoEntry dummy;

	dummy.init(p,algeb);

	AnnoHashKey key=calc_anno_hash_key(&dummy.id);

	AnnoPtr entry_ptr=anno_hash[key];

	if(entry_ptr==NULL)
	{

		if(!create)
		{
			return NULL;
		}
		else
		{
			if(anno_alloc_ptr>ANNO_TABLE_LAST_INDEX)
			{
				return NULL;
			}
			else
			{
				anno_hash[key]=anno_alloc_ptr;

				AnnoEntry* entry=&anno_table[anno_alloc_ptr++];

				entry->init(p,algeb);

				return entry;
			}
		}

	}
	else
	{

		AnnoEntry* entry=&anno_table[anno_hash[key]];

		while((entry->next!=NULL)&&(0!=memcmp(&dummy.id,&entry->id,sizeof(AnnoTrunk))))
		{
			entry=&anno_table[entry->next];
		}

		if(0==memcmp(&dummy.id,&entry->id,sizeof(AnnoTrunk)))
		{
			return entry;
		}
		else
		{

			if(!create)
			{
				return NULL;
			}
			else
			{
				AnnoEntry* new_entry=&anno_table[anno_alloc_ptr];

				new_entry->init(p,algeb);

				entry->next=anno_alloc_ptr++;

				return new_entry;
			}
		}

	}
}

void save_anno_book()
{
	ofstream o("anno.anb",ios::binary);
	if(o.is_open())
	{
		o.write((char*)&anno_alloc_ptr,sizeof(anno_alloc_ptr));
		o.write((char*)&anno_hash,sizeof(anno_hash));
		o.write((char*)&anno_table,sizeof(anno_table));
		o.close();
	}
}

bool save_annotated_move=true;
bool annotate_move(Position* p,char* algeb,char* annot)
{

	if(p->is_algeb_move_legal(algeb))
	{

		AnnoEntry* entry=look_up_anno_entry(p,algeb,DO_CREATE);

		if(entry==NULL)
		{
			return false;
		}

		strcpy_s(entry->annot,annot);

		if(save_annotated_move)
		{
			save_anno_book();
		}

		return true;

	}
	else
	{

		return false;

	}

}

char annot_nice_puff[50];
char* annot_nice(char* annot)
{
	if(0==strcmp(annot,"!!"))
	{
		strcpy_s(annot_nice_puff,"very strongly recommended move, status: proven");
	}

	if(0==strcmp(annot,"!"))
	{
		strcpy_s(annot_nice_puff,"strongly recommended move, status: proven");
	}

	if(0==strcmp(annot,"?!"))
	{
		strcpy_s(annot_nice_puff,"playable move, status: not proven");
	}

	if(0==strcmp(annot,"-"))
	{
		strcpy_s(annot_nice_puff,"recommended move, status: proven to be stable");
	}

	if(0==strcmp(annot,"!?"))
	{
		strcpy_s(annot_nice_puff,"recommended move, status: very promising");
	}

	if(0==strcmp(annot,"?"))
	{
		strcpy_s(annot_nice_puff,"losing move, status: proven");
	}

	if(0==strcmp(annot,"??"))
	{
		strcpy_s(annot_nice_puff,"gets mated by force, status: proven");
	}

	return annot_nice_puff;
}

void list_annotated_moves(Position* p)
{


	/*cout << "anno alloc " << anno_alloc_ptr << endl;
	for(int i=1;i<anno_alloc_ptr;i++)
	{
		cout << i << ". anno= " << anno_table[i].id.algeb << " " << anno_table[i].annot << " next " << anno_table[i].next << endl;
	}*/


	Position dummy=*p;

	dummy.init_move_generator();

	while(dummy.next_legal_move())
	{

		AnnoEntry* entry=look_up_anno_entry(&dummy,dummy.try_move.algeb(),DONT_CREATE);

		if(entry!=NULL)
		{
			cout << " * " << entry->id.algeb << " " << entry->annot << " ( " << annot_nice(entry->annot) << " ) " << endl;
		}

	}

	cout << endl;

}

void init_anno()
{

	memset(anno_hash,0,sizeof(anno_hash));
	anno_alloc_ptr=1;
}

void load_anno_book()
{
	ifstream i("anno.anb",ios::binary);
	if(i.is_open())
	{
		i.read((char*)&anno_alloc_ptr,sizeof(anno_alloc_ptr));
		i.read((char*)&anno_hash,sizeof(anno_hash));
		i.read((char*)&anno_table,sizeof(anno_table));
		i.close();

		cout << "annotation book loaded " << anno_alloc_ptr << " annotated moves " << endl;
	}
}