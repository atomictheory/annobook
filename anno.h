
#ifndef ANNO_H
#define ANNO_H
#endif

#ifndef POSITION_H
#include "position.h"
#endif

#define ANNO_HASH_SHIFT (15)

#define ANNO_HASH_SIZE (1 << ANNO_HASH_SHIFT)
#define ANNO_HASH_MASK (ANNO_HASH_SIZE - 1)

#define ANNO_TABLE_SIZE ANNO_HASH_SIZE
#define ANNO_TABLE_LAST_INDEX (ANNO_TABLE_SIZE - 1)

#define DO_CREATE true
#define DONT_CREATE false

typedef unsigned int AnnoHashKey;

typedef int AnnoPtr;

struct AnnoTrunk
{
	PositionTrunk pos_trunk;
	char algeb[6];
};

struct AnnoEntry
{
	AnnoTrunk id;

	char annot[20];

	AnnoPtr next;

	void init(Position*,char*);

};

extern AnnoPtr anno_hash[ANNO_HASH_SIZE];
extern AnnoEntry anno_table[ANNO_TABLE_SIZE];

extern bool save_annotated_move;
extern bool annotate_move(Position*,char*,char*);

extern void init_anno();

extern void list_annotated_moves(Position*);

extern void load_anno_book();
extern void save_anno_book();

extern void set_anno_default();