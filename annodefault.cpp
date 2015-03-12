#include "anno.h"

void set_anno_default()
{

	Position dummy;

	save_annotated_move=false;

dummy.set_from_fen("rn1qkb1r/1pp3pp/p4p2/3pp3/3PP1bN/N4P2/PPP3PP/R2QKB1R b KQkq -");
annotate_move(&dummy,"g4h3","?!");

dummy.set_from_fen("r1b1kb1r/pppp2pp/2n1pn2/5p2/1P6/4P1P1/P1PP1P1P/RNBQK2R w KQkq -");
annotate_move(&dummy,"d2d3","?!");

dummy.set_from_fen("r1b1kb1r/pppp2pp/2n1pn2/5p2/1P6/4P1P1/P1PP1P1P/RNBQK2R w KQkq -");
annotate_move(&dummy,"f2f3","?!");

dummy.set_from_fen("r1b1kb1r/pppp2pp/2n1pn2/5p2/1P6/4P1P1/P1PP1P1P/RNBQK2R w KQkq -");
annotate_move(&dummy,"h2h3","??");

dummy.set_from_fen("r1b1kb1r/pppp2pp/2n1pn2/5p2/1P6/4P1P1/P1PP1P1P/RNBQK2R w KQkq -");
annotate_move(&dummy,"g3g4","?!");

dummy.set_from_fen("b1k5/p1pp4/1p2p1p1/PP3p2/3PP3/N5P1/2PK1P1r/7R b - -");
annotate_move(&dummy,"f5e4","-");

dummy.set_from_fen("rn2k1nr/pp1q3p/B1p2pp1/3pp3/5Qb1/4P3/PPPP1PPP/RNB1K2R w KQkq -");
annotate_move(&dummy,"f4a4","?!");

dummy.set_from_fen("r1bqkbnr/ppp3pp/2n1pp2/1B6/3pP1P1/2P2N2/PP1P1P1P/RNBQK2R b KQkq -");
annotate_move(&dummy,"e6e5","?!");

dummy.set_from_fen("r1bqk2r/pppp2pp/2n1pp2/1B6/1b1PP3/2P5/PP3PP1/RNBQK2R b KQkq -");
annotate_move(&dummy,"h7h5","?!");

dummy.set_from_fen("rnbqkbnr/pppp2pp/4pp2/8/8/2N1P2N/PPPP1PPP/R1BQKB1R b KQkq -");
annotate_move(&dummy,"f8b4","?!");

dummy.set_from_fen("r2q1k1r/p1Np2p1/bppbpp2/4P2p/2PP4/8/PP4PP/R1BQK2R b KQ -");
annotate_move(&dummy,"d6b4","?!");

dummy.set_from_fen("r2k1b1r/pp2p2p/4bnp1/1B1p4/8/4P3/PPPP1PPP/RNB1K2R w KQ -");
annotate_move(&dummy,"f2f3","!?");

dummy.set_from_fen("rnbqkbnr/pppp2pp/4pp2/8/8/2N1PN2/PPPP1PPP/R1BQKB1R b KQkq -");
annotate_move(&dummy,"f8b4","?!");

dummy.set_from_fen("r2k1b1r/pp1B4/4pnpp/6B1/3P4/2N2P2/PPP3PP/R3K2R w KQ -");
annotate_move(&dummy,"e1c1","-");

dummy.set_from_fen("2k5/pbpp4/1p2p1p1/PP3p2/3PP3/N5P1/2PK1P1r/R7 b - -");
annotate_move(&dummy,"b7a8","-");

dummy.set_from_fen("rnb1k2r/pp5p/q1p1ppp1/3p4/2PP4/4P2B/P3NP1P/R1BQK1R1 b Qkq -");
annotate_move(&dummy,"a6a5","!!");

dummy.set_from_fen("rnbqkbnr/1ppp2pp/p4p2/8/8/4P3/PPPP1PPP/RNBQKB1R w KQkq -");
annotate_move(&dummy,"d1h5","!!");

dummy.set_from_fen("rnbqk1nr/pp1p2pp/2p1pp2/1B6/1b1P4/2N1P2N/PPP2PPP/R1BQK2R b KQkq d3");
annotate_move(&dummy,"g8h6","?!");

dummy.set_from_fen("rnbqkbnr/pppppppp/8/8/8/5N2/PPPPPPPP/RNBQKB1R b KQkq -");
annotate_move(&dummy,"d7d5","??");

dummy.set_from_fen("rnbqkbnr/pppppppp/8/8/8/5N2/PPPPPPPP/RNBQKB1R b KQkq -");
annotate_move(&dummy,"f7f5","??");

dummy.set_from_fen("rnbqkbnr/pppppppp/8/8/8/5N2/PPPPPPPP/RNBQKB1R b KQkq -");
annotate_move(&dummy,"d7d6","?");

dummy.set_from_fen("rnbqkbnr/pppppppp/8/8/8/5N2/PPPPPPPP/RNBQKB1R b KQkq -");
annotate_move(&dummy,"f7f6","!!");

dummy.set_from_fen("r2k1b1r/pp1B3p/4pnp1/8/8/5P2/PPPP2PP/RNB1K2R w KQ -");
annotate_move(&dummy,"d2d4","?!");

dummy.set_from_fen("r1bq1bnr/1p2pk1p/3p1pp1/1B6/8/4P3/PPPP1PPP/RNB1K2R w KQ -");
annotate_move(&dummy,"b5e8","?!");

dummy.set_from_fen("rnbqkb1r/ppp1p1pp/3p1p2/1N6/5P2/4P3/PPPP1nPP/RNBQKB1R w KQkq -");
annotate_move(&dummy,"d1h5","!?");

dummy.set_from_fen("rnbq1k1r/ppNp2p1/2p1pp2/2b4p/3P4/2P1P3/PP4PP/R1BQKB1R b KQ d3");
annotate_move(&dummy,"c5d6","?!");

dummy.set_from_fen("rnbqkb1r/ppp1pppp/8/3p4/3P4/7P/PPP1PPP1/RN1QKBNR b KQkq -");
annotate_move(&dummy,"e7e5","?!");

dummy.set_from_fen("r2k1b1r/pp2p2p/4bnp1/1B6/8/1P3P2/P1PP2PP/RNB1K2R w KQ -");
annotate_move(&dummy,"d2d4","?!");

dummy.set_from_fen("rnbqkbnr/pppp2pp/4pp2/8/6P1/4PN2/PPPP1P1P/RNBQKB1R b KQkq g3");
annotate_move(&dummy,"b8c6","?!");

dummy.set_from_fen("rn2kbnr/pp2p1pp/2pq1p2/1B1pN3/6b1/4PQ2/PPPP1PPP/RNB1K2R w KQkq -");
annotate_move(&dummy,"b5c6","?!");

dummy.set_from_fen("rnbqkbnr/pppp1ppp/4p3/8/3P4/8/PPP1PPPP/RNBQKBNR w KQkq -");
annotate_move(&dummy,"c2c4","??");

dummy.set_from_fen("r2k1b1r/pp1B3p/4pnp1/6B1/3P4/5P2/PPP3PP/RN2K2R w KQ -");
annotate_move(&dummy,"b1c3","-");

dummy.set_from_fen("r1bqkbnr/pppp2pp/n3pp2/8/3N4/4P3/PPPP1PPP/RNBQKB1R w KQkq -");
annotate_move(&dummy,"d1h5","?!");

dummy.set_from_fen("rn1k1bnr/pp1Np1pp/5p2/3p4/8/4P3/PPPP1PPP/RNB1K2R w KQ -");
annotate_move(&dummy,"d7b8","?!");

dummy.set_from_fen("rnbqk1nr/pppp2pp/4pp2/1B6/1b6/2N1P2N/PPPP1PPP/R1BQK2R b KQkq -");
annotate_move(&dummy,"c7c6","?!");

dummy.set_from_fen("rnbqkbnr/pppp1p1p/4p1p1/8/4P2Q/8/PPPP1PPP/RNB1KBNR b KQkq -");
annotate_move(&dummy,"d8f6","?!");

dummy.set_from_fen("rn1qk2r/ppp4p/6pb/3pp3/5P2/8/PPPP3P/RNBQK2R w KQkq e6");
annotate_move(&dummy,"d1e2","??");

dummy.set_from_fen("rnbqkbnr/pppp3p/4p1p1/8/5Q2/4P3/PPPP1PPP/RNB1KB1R b KQkq -");
annotate_move(&dummy,"f8b4","?!");

dummy.set_from_fen("r4rk1/p3p2p/6pb/1p1p4/3P4/N3PB2/PP4PP/R3K2R w KQ -");
annotate_move(&dummy,"e1g1","?!");

dummy.set_from_fen("rnbqkbnr/pppp2pp/4p3/5p2/8/4PQ1N/PPPP1PPP/RNB1KB1R b KQkq -");
annotate_move(&dummy,"d8h4","!?");

dummy.set_from_fen("rnb1k1nr/pppp2pp/4p3/8/1b5q/2P2QP1/PP1P1P1P/RNB1KBNR b KQkq -");
annotate_move(&dummy,"h4d4","!!");

dummy.set_from_fen("rnq1kbnr/pp3N1p/2p2pp1/1B1pp3/5Qb1/4P3/PPPP1PPP/RNB1K2R w KQkq e6");
annotate_move(&dummy,"f7d6","?!");

dummy.set_from_fen("rnbqkbnr/ppppp2p/5pp1/8/4P2N/8/PPPP1PPP/RNBQKB1R b KQkq e3");
annotate_move(&dummy,"e7e6","?!");

dummy.set_from_fen("rnbqkb1r/ppppp1pp/5p1n/8/3N4/7P/PPPPPPP1/RNBQKB1R b KQkq -");
annotate_move(&dummy,"b7b5","-");

dummy.set_from_fen("rnbqkb1r/ppppp1pp/5p1n/8/3N4/7P/PPPPPPP1/RNBQKB1R b KQkq -");
annotate_move(&dummy,"b8c6","?!");

dummy.set_from_fen("rnbqkb1r/ppppp1pp/5p1n/8/3N4/7P/PPPPPPP1/RNBQKB1R b KQkq -");
annotate_move(&dummy,"a7a6","?!");

dummy.set_from_fen("rnbqkb1r/ppppp1pp/5p1n/8/3N4/7P/PPPPPPP1/RNBQKB1R b KQkq -");
annotate_move(&dummy,"c7c6","?!");

dummy.set_from_fen("rnbqkb1r/ppppp1pp/5p1n/8/3N4/7P/PPPPPPP1/RNBQKB1R b KQkq -");
annotate_move(&dummy,"b8a6","?!");

dummy.set_from_fen("rnbqkbnr/pppp1ppp/4p3/8/2PP4/8/PP2PPPP/RNBQKBNR b KQkq c3");
annotate_move(&dummy,"d8h4","!!");

dummy.set_from_fen("rnbqkbnr/pp1pp1pp/2p2p2/8/8/4PN2/PPPP1PPP/RNBQKB1R w KQkq -");
annotate_move(&dummy,"f3d4","!");

dummy.set_from_fen("rnbqkbnr/pppp2pp/8/4ppN1/3P4/8/PPP1PPPP/RNBQKB1R b KQkq d3");
annotate_move(&dummy,"d7d5","?");

dummy.set_from_fen("rnbqkb2/pp1p2p1/2p5/4p3/5p1P/8/PPPPPPP1/RNBQKB1R w KQkq -");
annotate_move(&dummy,"e2e3","?!");

dummy.set_from_fen("rnq1k1nr/p5pp/5p2/2ppp3/1Q4b1/4P3/PPPP1PPP/RNB1K2R w KQkq -");
annotate_move(&dummy,"b4b7","?!");

dummy.set_from_fen("rnbqkb1r/1ppp3p/p3ppp1/8/3PP3/P1N5/1PP2PPP/R1BQKB1R b KQkq d3");
annotate_move(&dummy,"d7d5","?!");

dummy.set_from_fen("rnbqkb1r/ppppp1pp/5p1n/8/8/2N2N1P/PPPPPPP1/R1BQKB1R b KQkq -");
annotate_move(&dummy,"h6g4","?!");

dummy.set_from_fen("rnbqk2r/pppp2pp/4pn2/8/1bB5/2P2Q2/PP1P1PPP/RNB1K1NR b KQkq -");
annotate_move(&dummy,"f6e4","!!");

dummy.set_from_fen("2k4r/p1pp4/bp2p1p1/1P3p2/P2PP3/N5P1/2P1KP2/R7 b - -");
annotate_move(&dummy,"h8h2","-");

dummy.set_from_fen("rnbqk1nr/pppp2pp/4pp2/8/1b1N4/4P3/PPPP1PPP/RNBQKB1R w KQkq -");
annotate_move(&dummy,"b1c3","!?");

dummy.set_from_fen("rnbqkb1r/pppp1ppp/4p2n/3N4/3P4/8/PPP1PPPP/R1BQKBNR b KQkq d3");
annotate_move(&dummy,"d8h4","?!");

dummy.set_from_fen("rnbqkb1r/ppp1p1pp/5p2/3p4/3PP3/5N2/PPP2PPP/RN1QKB1R b KQkq -");
annotate_move(&dummy,"e7e5","?!");

dummy.set_from_fen("rnbqkb1r/pppp2pp/4pp2/8/4P3/2N5/PPPP1PPP/R1BQKB1R b KQkq -");
annotate_move(&dummy,"f8b4","?");

dummy.set_from_fen("rnbqkb1r/pppp2pp/4pp2/8/4P3/2N5/PPPP1PPP/R1BQKB1R b KQkq -");
annotate_move(&dummy,"a7a6","?!");

dummy.set_from_fen("2r1Brk1/pp5p/4ppp1/3p4/1b6/2Q1P3/PP1P1P1P/R3K2R w KQ -");
annotate_move(&dummy,"e8g6","!");

dummy.set_from_fen("rnb1k1nr/pppp1ppp/4p3/8/1bPPq3/2N1P1P1/PP3P1P/R1BQKBNR b KQkq -");
annotate_move(&dummy,"e4c2","!!");

dummy.set_from_fen("r2q1k1r/p1Np2p1/bpp1pp2/4P2p/1bPP4/8/PP2K1PP/R1BQ3R b - -");
annotate_move(&dummy,"b4d2","!?");

dummy.set_from_fen("r2q1k1r/p1Np2p1/bpp1pp2/4P2p/1bPP4/8/PP2K1PP/R1BQ3R b - -");
annotate_move(&dummy,"b4e1","?");

dummy.set_from_fen("rnbqkbnr/ppp1p1pp/5p2/8/8/5N2/PPPP1PPP/RNBQKB1R b KQkq -");
annotate_move(&dummy,"d8d2","!!");

dummy.set_from_fen("rnbqkb1r/pp1pp1p1/2p2p2/7p/8/2N1P1P1/PPPP1P2/R1BQKB1R b KQkq -");
annotate_move(&dummy,"d7d5","?!");

dummy.set_from_fen("rnbqkbnr/pp1p3p/4ppp1/1Q6/8/4P3/PPPP1PPP/RNB1KB1R b KQkq -");
annotate_move(&dummy,"b8c6","?!");

dummy.set_from_fen("rnbqk1nr/pppp1ppp/4p3/8/8/4PQ2/PP1P1PPP/RNB1K1NR b KQkq -");
annotate_move(&dummy,"f7f5","-");

dummy.set_from_fen("rn1qkbnr/ppp1p1pp/5p2/3pN3/8/4P3/PPPP1PPP/RNB1KB1R w KQkq -");
annotate_move(&dummy,"e5d7","!!");

dummy.set_from_fen("rnbqkbnr/pppp2pp/4pp2/3P4/8/5N2/PPP1PPPP/RNBQKB1R b KQkq -");
annotate_move(&dummy,"f8c5","?!");

dummy.set_from_fen("rnbqkbnr/1ppp3p/p4pp1/7Q/8/4P3/PPPP1PPP/RNB1KB1R w KQkq -");
annotate_move(&dummy,"h5d5","!!");

dummy.set_from_fen("rnq1kbnr/ppp2Npp/4pp2/3p4/6b1/4PQ2/PPPP1PPP/RNB1KB1R w KQkq -");
annotate_move(&dummy,"f1b5","?!");

dummy.set_from_fen("rnbqkbnr/pppp1ppp/4p3/8/4P3/5N2/PPPP1PPP/RNBQKB1R b KQkq -");
annotate_move(&dummy,"d8f6","?!");

dummy.set_from_fen("rnbqkbnr/pp1pp2p/2p2pp1/8/3P4/2N1P2N/PPP2PPP/R1BQKB1R b KQkq d3");
annotate_move(&dummy,"g8h6","?!");

dummy.set_from_fen("rnbqkb1r/pppp2pp/4pp2/3N4/8/2P2P1N/PP1PPnPP/R1BQKB1R w KQkq -");
annotate_move(&dummy,"d1a4","!");

dummy.set_from_fen("rnb1kbnr/pppp1ppp/4p3/3P4/8/6P1/PP2PP1P/R3KBNR w KQkq -");
annotate_move(&dummy,"a1d1","??");

dummy.set_from_fen("rnbqkb1r/pp5p/2p1ppp1/3p4/3P4/4P2B/PPP1NP1P/R1BQK1R1 b Qkq -");
annotate_move(&dummy,"d8a5","!?");

dummy.set_from_fen("rnbqkb1r/pp1pp2p/2p2ppn/8/3P2P1/2N1P2N/PPP2P1P/R1BQKB1R b KQkq g3");
annotate_move(&dummy,"h6g4","?!");

dummy.set_from_fen("rn1qk2r/ppp1p2p/5ppb/3pP3/8/3P1Q2/PPP2P1P/RNB1K2R b KQkq -");
annotate_move(&dummy,"h6d2","!!");

dummy.set_from_fen("r1bqkb1r/ppppp2p/2n1Ppp1/8/8/8/PPPP1PPP/RNBQKB1R b KQkq -");
annotate_move(&dummy,"d7e6","-");

dummy.set_from_fen("rnb1k2r/pp4pp/2p1pp1n/1B6/1b6/2N1P3/PPPP1PPP/R1BQK2R w KQkq -");
annotate_move(&dummy,"g2g4","?!");

dummy.set_from_fen("rnbqkb1r/ppppp1pp/8/8/4PPn1/2N5/PPPP2PP/R1BQKB1R b KQkq f3");
annotate_move(&dummy,"c7c6","?!");

dummy.set_from_fen("rnbqkbnr/pppppppp/8/8/4P3/8/PPPP1PPP/RNBQKBNR b KQkq e3");
annotate_move(&dummy,"d7d5","?!");

dummy.set_from_fen("rnbqkbnr/pppppppp/8/8/4P3/8/PPPP1PPP/RNBQKBNR b KQkq e3");
annotate_move(&dummy,"e7e6","-");

dummy.set_from_fen("rnbqkbnr/pppppppp/8/8/4P3/8/PPPP1PPP/RNBQKBNR b KQkq e3");
annotate_move(&dummy,"g8f6","?!");

dummy.set_from_fen("rnbqkb1r/pp1p3p/2p1ppp1/8/3P4/2N1P2B/PPP2P1P/R1BQK1R1 b Qkq -");
annotate_move(&dummy,"d7d5","?!");

dummy.set_from_fen("rnbqkbnr/pp1p2pp/2p1pp2/1N6/8/4P3/PPPP1PPP/RNBQKB1R b KQkq -");
annotate_move(&dummy,"c6b5","?!");

dummy.set_from_fen("r4bnr/1p3k1p/4ppp1/8/8/4P3/PPPP1PPP/RNB1K2R b KQ -");
annotate_move(&dummy,"a8a2","?!");

dummy.set_from_fen("rnbqkbnr/ppp1p2p/6p1/3pQ3/8/4P3/PPPP1PPP/RNB1KB1R b KQkq -");
annotate_move(&dummy,"c8e6","-");

dummy.set_from_fen("rnbqkbnr/ppp1p2p/6p1/3pQ3/8/4P3/PPPP1PPP/RNB1KB1R b KQkq -");
annotate_move(&dummy,"e7e6","?");

dummy.set_from_fen("rnb1k1nr/pppp2pp/4p3/8/1b5q/2P2Q2/PP1P1PPP/RNB1KBNR w KQkq -");
annotate_move(&dummy,"g2g3","??");

dummy.set_from_fen("rnb1kbnr/pppp1p1p/4p1p1/8/4P3/8/PPPP1PPP/RNB1KBNR b KQkq -");
annotate_move(&dummy,"g8f6","?!");

dummy.set_from_fen("rnbqkb1r/ppppp1pp/5p2/8/4P3/8/PPPP1PPP/RNBQKB1R b KQkq e3");
annotate_move(&dummy,"d7d5","?!");

dummy.set_from_fen("rnbqkb1r/ppppp1pp/5p2/8/4P3/8/PPPP1PPP/RNBQKB1R b KQkq e3");
annotate_move(&dummy,"e7e6","?!");

dummy.set_from_fen("rnbqkb1r/ppppp1pp/5p2/8/4P3/8/PPPP1PPP/RNBQKB1R b KQkq e3");
annotate_move(&dummy,"g7g6","-");

dummy.set_from_fen("rnbqkb1r/pp1pp1pp/2p2p1n/8/3N4/2N4P/PPPPPPP1/R1BQKB1R b KQkq -");
annotate_move(&dummy,"b7b5","?!");

dummy.set_from_fen("rnbqkb1r/pp1pp1pp/2p2p1n/8/3N4/2N4P/PPPPPPP1/R1BQKB1R b KQkq -");
annotate_move(&dummy,"e7e5","?!");

dummy.set_from_fen("rnbqkbnr/pp1pp2p/2p2pp1/8/8/2N1PN2/PPPP1PPP/R1BQKB1R w KQkq -");
annotate_move(&dummy,"c3d5","!");

dummy.set_from_fen("rnbqkb1r/pp1p3p/2p1pppn/1B6/3Q4/4P3/PPPP1PPP/RNB1K1NR b KQkq -");
annotate_move(&dummy,"d7d5","?!");

dummy.set_from_fen("rnbqkbnr/pp1p3p/2p1ppp1/8/4P2N/8/PPPPBPPP/RNBQK2R b KQkq -");
annotate_move(&dummy,"d7d5","?!");

dummy.set_from_fen("rn1qkb1r/1pp3pp/p4p2/3pp3/3PP3/N4P2/PPP4P/R2QKB1R b KQkq -");
annotate_move(&dummy,"g7g6","?!");

dummy.set_from_fen("rnbqk1nr/pppp2pp/4pp2/2bP4/8/4PN2/PPP2PPP/RNBQKB1R b KQkq -");
annotate_move(&dummy,"g8h6","?!");

dummy.set_from_fen("rnbqkbnr/pppppppp/8/8/3P4/8/PPP1PPPP/RNBQKBNR b KQkq d3");
annotate_move(&dummy,"g8h6","?!");

dummy.set_from_fen("rnbqkbnr/pppppppp/8/8/3P4/8/PPP1PPPP/RNBQKBNR b KQkq d3");
annotate_move(&dummy,"e7e6","?!");

dummy.set_from_fen("r1bqk2r/pppp2p1/2n1pp2/1B1P3p/1b2P3/2P5/PP3PP1/RNBQK2R b KQkq -");
annotate_move(&dummy,"d7d6","?!");

dummy.set_from_fen("rnbqkbnr/pppp2pp/4p3/5p2/3N3P/4P3/PPPP1PP1/RNBQKB1R b KQkq h3");
annotate_move(&dummy,"f8b4","!?");

dummy.set_from_fen("rnb2rk1/pp4pp/2p1pp1n/1B6/1b4P1/2N1P3/PPPP1P1P/R1BQK2R w KQ -");
annotate_move(&dummy,"h2h4","?!");

dummy.set_from_fen("rnbqkb1r/pp1pp1pp/2p2p1n/8/4P1P1/2N2N2/PPPP1P1P/R1BQKB1R b KQkq e3");
annotate_move(&dummy,"e7e5","?!");

dummy.set_from_fen("rnb1kbnr/pppp2pp/4p3/5p2/8/4P3/PPPP1PPP/RNB1KBNR b KQkq -");
annotate_move(&dummy,"g8f6","?!");

dummy.set_from_fen("rnbqkbnr/ppppp1pp/5p2/8/3N4/8/PPPPPPPP/RNBQKB1R b KQkq -");
annotate_move(&dummy,"g8h6","!");

dummy.set_from_fen("rnb1kbnr/pppp2pp/4p3/1N3p2/7q/4P3/PPPP1PPP/RNBQKB1R w KQkq -");
annotate_move(&dummy,"g2g3","?!");

dummy.set_from_fen("r4b1r/pp1p1kpp/4pp2/1B6/5Pn1/2P1P3/PPnP2PP/RNBQK2R w KQ -");
annotate_move(&dummy,"e1f1","?!");

dummy.set_from_fen("rnbqkb1r/pppp2pp/5p2/4p3/4P3/2P5/PP1P1PP1/RNBQKB1R b KQkq -");
annotate_move(&dummy,"d7d5","?!");

dummy.set_from_fen("rnbqkbnr/pppp2pp/4p3/5p2/3N4/4P3/PPPP1PPP/RNBQKB1R w KQkq -");
annotate_move(&dummy,"d4b5","?!");

dummy.set_from_fen("rnbqkbnr/pppp2pp/4p3/5p2/3N4/4P3/PPPP1PPP/RNBQKB1R w KQkq -");
annotate_move(&dummy,"d1h5","-");

dummy.set_from_fen("rnbqkbnr/pppp2pp/4p3/5p2/3N4/4P3/PPPP1PPP/RNBQKB1R w KQkq -");
annotate_move(&dummy,"b2b4","?");

dummy.set_from_fen("rnbqkbnr/pppp2pp/4p3/5p2/3N4/4P3/PPPP1PPP/RNBQKB1R w KQkq -");
annotate_move(&dummy,"h2h4","?");

dummy.set_from_fen("rnbqkbnr/pppp2pp/4p3/5p2/3N4/4P3/PPPP1PPP/RNBQKB1R w KQkq -");
annotate_move(&dummy,"a2a3","?!");

dummy.set_from_fen("rnbqkbnr/pppp2pp/4p3/5p2/3N4/4P3/PPPP1PPP/RNBQKB1R w KQkq -");
annotate_move(&dummy,"g2g3","?");

dummy.set_from_fen("rnbqkbnr/pppp2pp/4p3/5p2/3N4/4P3/PPPP1PPP/RNBQKB1R w KQkq -");
annotate_move(&dummy,"f1b5","?");

dummy.set_from_fen("rnbqkb1r/pppp1ppp/4p2n/3N4/8/5P2/PPPPP1PP/R1BQKBNR b KQkq -");
annotate_move(&dummy,"d8h4","!!");

dummy.set_from_fen("rnbqkbnr/pppp3p/4p1p1/5p1Q/3N4/4P3/PPPP1PPP/RNB1KB1R w KQkq -");
annotate_move(&dummy,"h5g5","?!");

dummy.set_from_fen("rnb1kb1r/pp5p/q1p1ppp1/3p4/2PP4/4P2B/PP2NP1P/R1BQK1R1 b Qkq -");
annotate_move(&dummy,"f8a3","!");

dummy.set_from_fen("2r1k2r/1p4pp/p3pp1n/3pP3/2B3P1/8/PP3PKP/3R4 b k -");
annotate_move(&dummy,"d5d4","?!");

dummy.set_from_fen("rnbqkb1r/ppppp1pp/5p1n/8/8/4PN2/PPPP1PPP/RNBQKB1R w KQkq -");
annotate_move(&dummy,"f3e5","!!");

dummy.set_from_fen("rnbqkb1r/pp2p1p1/2p2p2/3p3p/8/1PN1P1P1/P1PP1P2/R1BQKB1R b KQkq -");
annotate_move(&dummy,"e7e5","?!");

dummy.set_from_fen("r1bqkb1r/pppp2pp/2n1pp1n/4P1N1/8/2P5/PP1P1PPP/RNBQKB1R b KQkq -");
annotate_move(&dummy,"h6g4","?!");

dummy.set_from_fen("rnbqkbnr/pppp3p/4ppp1/1B6/4P2N/8/PPPP1PPP/RNBQK2R b KQkq -");
annotate_move(&dummy,"c7c6","?!");

dummy.set_from_fen("rnbqkbnr/pppp1ppp/4p3/8/8/3BP3/PPPP1PPP/RNBQK1NR b KQkq -");
annotate_move(&dummy,"f8b4","-");

dummy.set_from_fen("rnbqkb1r/pp1pp1pp/2p2p1n/8/1P1N2P1/8/P1PPPP1P/RNBQKB1R b KQkq b3");
annotate_move(&dummy,"e7e5","?!");

dummy.set_from_fen("rnb1k2r/pppp1ppp/4pq1n/8/3PP3/2N2N2/PP3PPP/R1BQK2R b KQkq d3");
annotate_move(&dummy,"h6g4","!!");

dummy.set_from_fen("r3kb1r/1p1p2pp/p3pp1n/8/2B1P1P1/8/PP1P1P1P/2R1K2R b Kkq -");
annotate_move(&dummy,"f8b4","?!");

dummy.set_from_fen("rnb1k1nr/pppp1ppp/4pq2/8/4P3/2N2N2/PP1P1PPP/R1BQK2R b KQkq -");
annotate_move(&dummy,"g8h6","!?");

dummy.set_from_fen("r2q1k1r/p1Np2p1/bppbpp2/4P2p/3P4/2P5/PP4PP/R1BQK2R w KQ -");
annotate_move(&dummy,"c3c4","?!");

dummy.set_from_fen("rnbqkb1r/pppppppp/5n2/8/8/6P1/PPPPPPBP/RNBQK1NR b KQkq -");
annotate_move(&dummy,"f6g4","!!");

dummy.set_from_fen("rnb1kb1r/pp1pp1pp/2p2p1n/q7/2PN2P1/2N5/PP1PPP1P/R1BQKB1R b KQkq -");
annotate_move(&dummy,"a5g5","!!");

dummy.set_from_fen("rnb1kbnr/pp1p3p/2p1ppp1/1N5Q/qP6/4P3/P1PP1PPP/RNB1KB1R w KQkq -");
annotate_move(&dummy,"h5h7","!?");

dummy.set_from_fen("rnbqkbnr/p1ppp1pp/5p2/1p6/8/4PN2/PPPP1PPP/RNBQKB1R w KQkq b6");
annotate_move(&dummy,"f3e5","!!");

dummy.set_from_fen("rnbqkb1r/ppppp1pp/5p1n/4N3/8/2N5/PPPPPPPP/R1BQKB1R b KQkq -");
annotate_move(&dummy,"f6e5","?!");

dummy.set_from_fen("rnbqkbnr/pppp2pp/4p3/5p2/3N4/P3P3/1PPP1PPP/RNBQKB1R b KQkq -");
annotate_move(&dummy,"b8c6","?!");

dummy.set_from_fen("r1bqkb1r/pppp2pp/2n1pp2/4P1N1/5Pn1/2P5/PP1P2PP/RNBQKB1R b KQkq f3");
annotate_move(&dummy,"g4f2","?!");

dummy.set_from_fen("rnbqk2r/pp1p2p1/2p1pp2/2bN3p/8/2P1P3/PP1P2PP/R1BQKB1R w KQkq h6");
annotate_move(&dummy,"d5c7","!");

dummy.set_from_fen("rnbqkb1r/ppp1p1pp/5p1n/3pP3/6P1/5N2/PPPP1P1P/RNBQKB1R b KQkq g3");
annotate_move(&dummy,"c8g4","?!");

dummy.set_from_fen("rnb1k1nr/pppp2pp/4p3/5p2/1P6/4P3/P2P1P1P/RNB1K2R b KQkq b3");
annotate_move(&dummy,"g8f6","?!");

dummy.set_from_fen("rnbqkbnr/ppppppp1/7p/8/5N2/8/PPPPPPPP/RNBQKB1R b KQkq -");
annotate_move(&dummy,"d7d5","?!");

dummy.set_from_fen("rnbqkbnr/ppppppp1/7p/8/5N2/8/PPPPPPPP/RNBQKB1R b KQkq -");
annotate_move(&dummy,"e7e5","-");

dummy.set_from_fen("rnbqkbnr/pppp1ppp/4p3/8/8/4PQ2/PPPP1PPP/RNB1KBNR b KQkq -");
annotate_move(&dummy,"f7f5","!");

dummy.set_from_fen("r2qk2r/ppp3p1/2np1p2/1B1Pp1Bp/1b2P1b1/2P3Q1/PP3PP1/RN2K2R b KQkq -");
annotate_move(&dummy,"g4f3","!");

dummy.set_from_fen("rnb1kbnr/pp1p1ppp/2p1pq2/8/2B1P3/5N2/PPPP1PPP/RNBQK2R b KQkq -");
annotate_move(&dummy,"g8h6","-");

dummy.set_from_fen("rn1qkb1r/ppp1p1pp/5p2/3pP3/8/8/PPPP1P1P/RNBQK2R b KQkq -");
annotate_move(&dummy,"g7g6","?!");

dummy.set_from_fen("rnbqk2r/pp1p2pp/2p1pp2/2bN4/8/2P1P3/PP1P2PP/R1BQKB1R b KQkq -");
annotate_move(&dummy,"h7h5","?!");

dummy.set_from_fen("r1bqkbnr/1p2p2p/3p1pp1/8/8/4P3/PPPP1PPP/RNB1KB1R w KQkq -");
annotate_move(&dummy,"f1b5","?!");

dummy.set_from_fen("rnbqkbnr/p1ppp2p/6p1/1p5Q/8/4P3/PPPP1PPP/RNB1KB1R w KQkq -");
annotate_move(&dummy,"h5d5","!!");

dummy.set_from_fen("r2k1b1r/pp2p2p/4bnp1/1B6/3p4/4PP2/PPPP2PP/RNB1K2R w KQ -");
annotate_move(&dummy,"b2b3","-");

dummy.set_from_fen("r2k1b1r/pp2p2p/4bnp1/1B6/3p4/4PP2/PPPP2PP/RNB1K2R w KQ -");
annotate_move(&dummy,"a2a4","?!");

dummy.set_from_fen("rnbqkb1r/pppppppp/5n2/8/3P4/2P5/PP2PPPP/RNBQKBNR b KQkq d3");
annotate_move(&dummy,"f6e4","!!");

dummy.set_from_fen("r1bqkbnr/ppppp2p/2n3p1/7Q/8/4P3/PPPP1PPP/RNB1KB1R w KQkq -");
annotate_move(&dummy,"h5d5","!!");

dummy.set_from_fen("rnb1kb2/pp1p4/2p1ppp1/1N6/1P6/4P3/2PP1PPP/2B1KB1R w KQkq -");
annotate_move(&dummy,"b5a7","!?");

dummy.set_from_fen("rnbqkb1r/ppppp1pp/5p2/8/8/2N5/PPPPPPP1/R1BQKB1R b KQkq -");
annotate_move(&dummy,"c7c6","?!");

dummy.set_from_fen("rnbqkbnr/pp1p2pp/2p5/4ppN1/8/6P1/PPPPPP1P/RNBQKB1R w KQkq -");
annotate_move(&dummy,"b2b4","?!");

dummy.set_from_fen("rnbqk2r/pppp2pp/4pp1n/2bP4/8/4PN1P/PPP2PP1/RNBQKB1R b KQkq -");
annotate_move(&dummy,"c5b4","?!");

dummy.set_from_fen("rnbqkbnr/pp1ppppp/2p5/8/8/5N2/PPPPPPPP/RNBQKB1R w KQkq -");
annotate_move(&dummy,"f3e5","!!");

dummy.set_from_fen("r1bqkb2/ppp3p1/n7/3p4/4Pp2/P7/1PP2PPP/RNBQKB1R w KQkq -");
annotate_move(&dummy,"f1b5","!!");

dummy.set_from_fen("r1bqkbnr/pppp3p/n3ppp1/7Q/3N4/4P3/PPPP1PPP/RNB1KB1R w KQkq -");
annotate_move(&dummy,"d4b5","?!");

dummy.set_from_fen("r1bqkb1r/ppp3pp/2n2p2/1B2p3/3pP1P1/2PP1N2/PP3P1P/RN1QK2R b KQkq -");
annotate_move(&dummy,"c8g4","?!");

dummy.set_from_fen("r1bqkbnr/1p1p3p/4ppp1/1B6/8/4P3/PPPP1PPP/RNB1K2R b KQkq -");
annotate_move(&dummy,"e8f7","?!");

dummy.set_from_fen("rnbqkb1r/pppp2pp/4pp1n/8/3N4/4P3/PPPP1PPP/RNBQKB1R w KQkq -");
annotate_move(&dummy,"d4b5","?!");

dummy.set_from_fen("rnbqkb1r/ppppp1pp/5p1n/8/4P3/2N2N2/PPPP1PPP/R1BQKB1R b KQkq e3");
annotate_move(&dummy,"h6g4","!!");

dummy.set_from_fen("rnbqkbnr/ppp1p1pp/5p2/3p4/8/4PN2/PPPP1PPP/RNBQKB1R w KQkq d6");
annotate_move(&dummy,"f3g5","?!");

dummy.set_from_fen("rnbqkbnr/ppp1p1pp/5p2/3p4/8/4PN2/PPPP1PPP/RNBQKB1R w KQkq d6");
annotate_move(&dummy,"f3e5","!?");

dummy.set_from_fen("rnbqkb1r/ppppp2p/6pn/7Q/8/4P3/PPPP1PPP/RNB1KB1R w KQkq -");
annotate_move(&dummy,"h5g5","!!");

dummy.set_from_fen("rnbqkb1r/pp1pp2p/2p3p1/8/4PP2/2N5/PPPP2P1/R1BQKB1R b KQkq -");
annotate_move(&dummy,"d7d5","?!");

dummy.set_from_fen("r1b1Bbnr/1p2p2p/3pkpp1/q7/3P4/4P3/PPP2PPP/RNB1K2R w KQ -");
annotate_move(&dummy,"b1c3","!!");

dummy.set_from_fen("rnbqkbnr/pp1p2pp/2p5/5pN1/3Pp3/4P3/PPP2PPP/RNBQKB1R w KQkq -");
annotate_move(&dummy,"g5h7","?!");

dummy.set_from_fen("r1bqkbnr/pppp2pp/2n1pp2/8/6P1/2P1PN2/PP1P1P1P/RNBQKB1R b KQkq -");
annotate_move(&dummy,"d7d5","?!");

dummy.set_from_fen("rnbqk2r/pp1p2p1/5p2/2p4p/8/4P3/PP3PP1/RNBQKB1R b KQkq -");
annotate_move(&dummy,"d7d5","?!");

dummy.set_from_fen("rnbqkbnr/pppp1ppp/4p3/8/8/4P3/PPPP1PPP/RNBQKBNR w KQkq -");
annotate_move(&dummy,"d1f3","?!");

dummy.set_from_fen("r1bqkbnr/ppp3pp/2n2p2/1B2p3/3pP1P1/2PP1N2/PP3P1P/RNBQK2R b KQkq -");
annotate_move(&dummy,"g8h6","?!");

dummy.set_from_fen("2kr2nr/1p2p1bp/p3b1p1/3p4/8/BP2P3/P1PP1PPP/RN2KB1R w KQ -");
annotate_move(&dummy,"a3e7","!");

dummy.set_from_fen("rnbqkbnr/pp1p3p/2p1p1p1/1B3pQ1/4P3/8/PPPP1PPP/RNB1K1NR b KQkq -");
annotate_move(&dummy,"g8f6","?!");

dummy.set_from_fen("rnbqkbnr/pppp1ppp/4p3/4P3/8/8/PPPP1PPP/RNBQKBNR b KQkq -");
annotate_move(&dummy,"d8h4","!!");

dummy.set_from_fen("rnb1k1nr/pppp2pp/4p3/5p2/7q/4PQPN/PP1P1P1P/RNB1K2R b KQkq -");
annotate_move(&dummy,"h4g3","!");

dummy.set_from_fen("r1bqBbnr/1p2p2p/3pkpp1/8/8/4P3/PPPP1PPP/RNB1K2R w KQ -");
annotate_move(&dummy,"d2d4","?!");

dummy.set_from_fen("rnbqkbnr/pp2p2p/3p1pp1/7Q/8/4P3/PPPP1PPP/RNB1KB1R w KQkq -");
annotate_move(&dummy,"h5b5","?!");

dummy.set_from_fen("rnbqkbnr/pppp2pp/4p3/1N3p2/8/4P3/PPPP1PPP/RNBQKB1R b KQkq -");
annotate_move(&dummy,"d8h4","!?");

dummy.set_from_fen("r1bqkbnr/pppp3p/4ppp1/1N5Q/1n6/4P3/PPPP1PPP/RNB1KB1R w KQkq -");
annotate_move(&dummy,"h5h4","?!");

dummy.set_from_fen("r1bqk2r/pppp3p/n3ppp1/8/3P4/P3P3/1P3PP1/RNBQKB1R b KQkq -");
annotate_move(&dummy,"h7h5","?!");

dummy.set_from_fen("rnbqkbnr/p1p1p2p/3p2p1/1p1Q4/8/4P3/PPPP1PPP/RNB1KB1R w KQkq -");
annotate_move(&dummy,"d5f7","!!");

dummy.set_from_fen("rnbq1k1r/ppNp2p1/2pbpp2/7p/3P4/2P1P3/PP4PP/R1BQKB1R w KQ -");
annotate_move(&dummy,"e3e4","!?");

dummy.set_from_fen("rnb1kb1r/pp1pp2p/q1p2ppn/1N5Q/1P6/4P3/P1PP1PPP/RNB1KB1R w KQkq -");
annotate_move(&dummy,"b5a7","!");

dummy.set_from_fen("rnb1kbnr/pppp2pp/4p3/5p2/7q/4P1QN/PPPP1PPP/RNB1KB1R b KQkq -");
annotate_move(&dummy,"b7b5","!?");

dummy.set_from_fen("rnb1kbnr/pppp1ppp/4pq2/8/4P3/5N2/PPPP1PPP/RNBQKB1R w KQkq -");
annotate_move(&dummy,"b1c3","??");

dummy.set_from_fen("rn2k1nr/pp5p/B1p2pp1/3ppq2/Q5b1/4P3/PPPP1PPP/RNB1K2R w KQkq -");
annotate_move(&dummy,"a4g4","!?");

dummy.set_from_fen("3k1b1r/pp2p1pp/5p1n/3p4/8/4P3/PPPP1PPP/RNB1K2R w KQ -");
annotate_move(&dummy,"g2g4","?!");

dummy.set_from_fen("rnb1kb1r/pppp1ppp/4p2n/3N4/3Pq3/4P1P1/PPP2P1P/R1BQKBNR b KQkq -");
annotate_move(&dummy,"f8b4","?!");

dummy.set_from_fen("rnbqkbnr/pp1p1ppp/2p1p3/1B6/4P3/5N2/PPPP1PPP/RNBQK2R b KQkq -");
annotate_move(&dummy,"d8f6","-");

dummy.set_from_fen("r1bqkbnr/pp1pp2p/2n3p1/1B6/8/4P3/PPPP1PPP/R1BQK2R w KQkq -");
annotate_move(&dummy,"d1f3","!!");

dummy.set_from_fen("r2qkb1r/ppp1p2p/2n2pp1/8/3P2b1/5P2/PPP3PP/RNBQKB1R b KQkq -");
annotate_move(&dummy,"c6b4","-");

dummy.set_from_fen("r3k2r/pp5p/4pppn/3p4/1b6/2Q1P3/PP1P1PPP/R3KB1R w KQkq -");
annotate_move(&dummy,"g2g4","?!");

dummy.set_from_fen("r3kb1r/p3p2p/4bnp1/1p1p4/3P4/4PP2/PPP3PP/RNB1KB1R b KQkq -");
annotate_move(&dummy,"f6g4","?!");

dummy.set_from_fen("rnbqkb1r/pppppppp/8/8/3Pn3/2P2P2/PP2P1PP/RNBQKBNR b KQkq -");
annotate_move(&dummy,"e4d2","!!");

dummy.set_from_fen("rnb1k1nr/pppp1ppp/4p3/8/1bPPq3/2N1B1P1/PP2PP1P/R2QKBNR b KQkq -");
annotate_move(&dummy,"e4c2","!!");

dummy.set_from_fen("r1b1kb1r/pppp2pp/2n1pn2/5p2/8/4PPP1/PPPP3P/RNBQK2R w KQkq -");
annotate_move(&dummy,"c2c3","?!");

dummy.set_from_fen("rnbqkb1r/ppppp2p/5pp1/4P3/8/8/PPPP1PPP/RNBQKB1R b KQkq -");
annotate_move(&dummy,"f8h6","-");

dummy.set_from_fen("rnbqkb1r/ppppp2p/5pp1/4P3/8/8/PPPP1PPP/RNBQKB1R b KQkq -");
annotate_move(&dummy,"b8c6","?!");

dummy.set_from_fen("2r1k2r/1p4pp/p3pp1n/4P3/P1Bp2P1/8/1P3PKP/3R4 b k a3");
annotate_move(&dummy,"e8g8","?!");

dummy.set_from_fen("rnbqkbnr/ppppp1pp/8/5p2/8/5N2/PPPPPPPP/RNBQKB1R w KQkq f6");
annotate_move(&dummy,"f3e5","!!");

dummy.set_from_fen("r1bqkb1r/pppp2pp/4pp1n/8/8/4PP2/PPPP2PP/RNBQKB1R b KQkq -");
annotate_move(&dummy,"c7c6","!?");

dummy.set_from_fen("rnbqkb1r/pp1pp1pp/2p2p1n/8/3N2P1/2P5/PP1PPP1P/RNBQKB1R b KQkq -");
annotate_move(&dummy,"e7e5","?!");

dummy.set_from_fen("4kbnr/pp2p2p/2r1b1p1/1B1p4/8/4P3/PPPP1PPP/RNB1K2R w KQk -");
annotate_move(&dummy,"b1c3","!?");

dummy.set_from_fen("rnbqkb1r/ppp2p1p/6p1/4p3/3P4/7P/PPP2PP1/RN1QKBNR b KQkq -");
annotate_move(&dummy,"d8g5","!?");

dummy.set_from_fen("rn1qkb1r/ppp1p2p/5pp1/3pP3/8/5Q2/PPPP1P1P/RNB1K2R b KQkq -");
annotate_move(&dummy,"f8h6","!");

dummy.set_from_fen("rnbqk1nr/pppp2pp/4pp2/8/8/4P3/PPPP1PPP/R1BQKB1R w KQkq -");
annotate_move(&dummy,"d1h5","!");

dummy.set_from_fen("r1bq1k1r/ppNp2p1/n1pbpp2/7p/3PP3/2P5/PP4PP/R1BQKB1R w KQ -");
annotate_move(&dummy,"f1a6","?!");

dummy.set_from_fen("r2qkb1r/ppp3pp/2n5/1B2pp1Q/3pP3/2PP4/PP3P1P/RN2K1R1 b Qkq -");
annotate_move(&dummy,"g7g6","?!");

dummy.set_from_fen("r1bqkbnr/pppp2pp/n7/4ppN1/3P4/8/PPP1PPPP/RNBQKB1R w KQkq -");
annotate_move(&dummy,"a2a3","?!");

dummy.set_from_fen("rnbqkb1r/pppp1ppp/4p3/8/3PP3/8/PPP2PPP/RN1QKBNR b KQkq -");
annotate_move(&dummy,"b8c6","?!");

dummy.set_from_fen("rnbqkbnr/ppppp1pp/5p2/8/8/4P2N/PPPP1PPP/RNBQKB1R b KQkq -");
annotate_move(&dummy,"e7e6","-");

dummy.set_from_fen("rnbqkbnr/ppppp1pp/5p2/8/8/4P2N/PPPP1PPP/RNBQKB1R b KQkq -");
annotate_move(&dummy,"g7g6","?!");

dummy.set_from_fen("r3k2r/1p1p2pp/p3pp1n/8/1bB1P1P1/8/PP1P1P1P/2R2K1R b kq -");
annotate_move(&dummy,"b4d2","?!");

dummy.set_from_fen("rnq1kbnr/pp3Npp/2p1pp2/1B1p4/6b1/4PQ2/PPPP1PPP/RNB1K2R w KQkq -");
annotate_move(&dummy,"f7d6","?!");

dummy.set_from_fen("rnbqkbnr/pp1p1ppp/2p1p3/1B5Q/8/4P3/PPPP1PPP/RNB1K1NR b KQkq -");
annotate_move(&dummy,"g7g6","-");

dummy.set_from_fen("r3k2r/1p1p2pp/p3pp1n/8/2B1P1P1/8/PP3PKP/7R b kq -");
annotate_move(&dummy,"d7d5","?!");

dummy.set_from_fen("rn1qkb1r/1pp4p/p5p1/3pp3/3P4/N4P1B/PPP4P/R2QK2R b KQkq -");
annotate_move(&dummy,"d8h4","!!");

dummy.set_from_fen("rnbq1k1r/ppNp2p1/2p1pp2/2b4p/8/2P1P3/PP1P2PP/R1BQKB1R w KQ -");
annotate_move(&dummy,"d2d4","!?");

dummy.set_from_fen("r1bqk2r/pppp2pp/2n1pp1n/1B6/1b1PP3/2P2N1P/PP3PP1/RNBQK2R b KQkq -");
annotate_move(&dummy,"h6g4","?!");

dummy.set_from_fen("rnbqkb1r/p1pp2p1/1p2pp2/7p/3PP3/8/PPPNBPP1/R1BQK2R b KQkq -");
annotate_move(&dummy,"f8b4","?!");

dummy.set_from_fen("rn1qkbnr/ppp1p1pp/5p2/3p4/3P2bN/5P2/PPP1P1PP/RNBQKB1R b KQkq -");
annotate_move(&dummy,"e7e5","?!");

dummy.set_from_fen("rnbqkbnr/ppppp1pp/5p2/8/8/2N2N2/PPPPPPPP/R1BQKB1R b KQkq -");
annotate_move(&dummy,"g8h6","!");

dummy.set_from_fen("rnbqkbnr/ppppp1pp/5p2/8/8/2N2N2/PPPPPPPP/R1BQKB1R b KQkq -");
annotate_move(&dummy,"e7e6","?");

dummy.set_from_fen("rnbqkbnr/ppppp1pp/5p2/8/8/2N2N2/PPPPPPPP/R1BQKB1R b KQkq -");
annotate_move(&dummy,"c7c6","?!");

dummy.set_from_fen("r1bqkbnr/pppppppp/2n5/8/8/5N2/PPPPPPPP/RNBQKB1R w KQkq -");
annotate_move(&dummy,"f3g5","!!");

dummy.set_from_fen("r1bqkbnr/pppp2pp/2n1pp2/4P3/8/2P2N2/PP1P1PPP/RNBQKB1R b KQkq -");
annotate_move(&dummy,"g8h6","?!");

dummy.set_from_fen("rnb1k2r/ppp3pp/4pp1n/8/1b6/2N1P3/PPPP1PPP/R1BQKB1R w KQkq -");
annotate_move(&dummy,"f1b5","?!");

dummy.set_from_fen("rnbqkbnr/ppp4p/4p1p1/3pQ3/8/4P3/PPPP1PPP/RNB1KB1R w KQkq -");
annotate_move(&dummy,"e5c7","!");

dummy.set_from_fen("rnbqkbnr/pp2p1pp/3p1p2/8/8/4P3/PPPP1PPP/RNBQKB1R w KQkq -");
annotate_move(&dummy,"d1h5","?!");

dummy.set_from_fen("rnbqkbnr/pp1p1p1p/2p1p1p1/1B4Q1/8/4P3/PPPP1PPP/RNB1K1NR b KQkq -");
annotate_move(&dummy,"f7f6","?!");

dummy.set_from_fen("r4rk1/p3p2p/6p1/1p1p4/3P1b2/N3PB2/PP4PP/R4RK1 w - -");
annotate_move(&dummy,"h2h4","?!");

dummy.set_from_fen("2k5/p1pp4/bp2p1p1/1P3p2/P2PP3/N5P1/2PK1P1r/R7 b - -");
annotate_move(&dummy,"a6b7","-");

dummy.set_from_fen("r3kbnr/p3p2p/4b1p1/1p1p4/8/4P3/PPPP1PPP/RNB1KB1R w KQkq b6");
annotate_move(&dummy,"d2d4","?!");

dummy.set_from_fen("r1bq1bnr/1p1p1k1p/4ppp1/1B6/8/4P3/PPPP1PPP/RNB1K2R w KQ -");
annotate_move(&dummy,"b5d7","?!");

dummy.set_from_fen("rnbqkb1r/ppppp1pp/5p1n/1N6/8/8/PPPPPPPP/RNBQKB1R b KQkq -");
annotate_move(&dummy,"h6g4","!!");

dummy.set_from_fen("2k4r/1p5p/p4np1/3p4/8/1P2P3/P1PPBPPP/4K2R w KQ -");
annotate_move(&dummy,"e2g4","?!");

dummy.set_from_fen("rnbqkbnr/pppp2pp/5p2/4p1N1/8/8/PPPPPPPP/RNBQKB1R w KQkq -");
annotate_move(&dummy,"e2e4","!?");

dummy.set_from_fen("1q2kb1r/p2p2pp/2p1pp1n/8/1P4P1/2P5/P2PPPBP/RNB1K2R b KQkq b3");
annotate_move(&dummy,"b8f4","!!");

dummy.set_from_fen("rnbqkbnr/pppp1pp1/7p/4p3/5N2/8/PPPPPPPP/RNBQKB1R w KQkq e6");
annotate_move(&dummy,"f4d5","??");

dummy.set_from_fen("r1bqkbnr/ppppp2p/5pp1/7Q/8/4P3/PPPP1PPP/RNB1KB1R w KQkq -");
annotate_move(&dummy,"h5d5","!!");

dummy.set_from_fen("rnbqkb1r/ppp1p2p/3p1pp1/1N5Q/5P2/4P3/PPPP1nPP/RNB1KB1R w KQkq -");
annotate_move(&dummy,"b5c7","!?");

dummy.set_from_fen("r2k1b1r/pp1B4/4p1p1/8/3P4/2N2P2/PPP3PP/2KR3R w - -");
annotate_move(&dummy,"h1e1","!");

dummy.set_from_fen("rnbqkb1r/pp1p2pp/2p2p1n/1B2p1N1/4P3/8/PPPP1PPP/RNBQK2R w KQkq -");
annotate_move(&dummy,"g5h7","?!");

dummy.set_from_fen("rnbqkb1r/pppp2pp/4pp2/8/4P3/8/PPPPBPP1/RNBQK2R b KQkq -");
annotate_move(&dummy,"h7h5","?!");

dummy.set_from_fen("rnbqk2r/pppp2pp/4pp2/2bN4/6n1/2P2P1N/PP1PP1PP/R1BQKB1R w KQkq -");
annotate_move(&dummy,"e2e3","!");

dummy.set_from_fen("rnb1kb1r/pp1p1ppp/2p1pq1n/8/2B1P3/5N1P/PPPP1PP1/RNBQK2R b KQkq -");
annotate_move(&dummy,"h6g4","!!");

dummy.set_from_fen("r3kb1r/1p1pp1pp/p4p1n/8/2B1P1P1/8/PP1P1P1P/R3K2R b KQkq -");
annotate_move(&dummy,"e7e6","?!");

dummy.set_from_fen("rnbqkbnr/pppp1ppp/4p3/3P4/8/8/PPP1PPPP/RNBQKBNR b KQkq -");
annotate_move(&dummy,"d8h4","!");

dummy.set_from_fen("rnbqk1nr/pppp2pp/8/4p3/1b6/2P1P3/PP1P1PPP/RNBQKB1R w KQkq -");
annotate_move(&dummy,"d1g4","!!");

dummy.set_from_fen("r3kb1r/p3p2p/4bnp1/1p1p4/3P4/4P3/PPP2PPP/RNB1KB1R w KQkq -");
annotate_move(&dummy,"f2f3","?!");

dummy.set_from_fen("rnb1kb1r/pp1pp1pp/2p2p1n/6q1/2PN2P1/2N1P3/PP1P1P1P/R1BQKB1R b KQkq -");
annotate_move(&dummy,"g5h4","!!");

dummy.set_from_fen("rnbqkbnr/ppppp2p/5pp1/8/8/4PN2/PPPP1PPP/RNBQKB1R w KQkq -");
annotate_move(&dummy,"b1c3","!");

dummy.set_from_fen("rnbqk1nr/pppp2pp/4p3/8/1b6/2P2Q2/PP1P1PPP/RNB1KBNR b KQkq -");
annotate_move(&dummy,"d8h4","!!");

dummy.set_from_fen("rnbqk1nr/pppp2pp/4p3/8/1b6/2P2Q2/PP1P1PPP/RNB1KBNR b KQkq -");
annotate_move(&dummy,"g8f6","?!");

dummy.set_from_fen("r1b2rk1/p1pp1p1p/1pn1pnpb/1B6/4PPP1/2P4P/PP1P4/RNB1K1NR b KQ g3");
annotate_move(&dummy,"c6b4","?!");

dummy.set_from_fen("rnb1kbnr/pppp1ppp/4p3/8/2PPq3/4B1P1/PP2PP1P/RN1QKBNR b KQkq -");
annotate_move(&dummy,"f8b4","!!");

dummy.set_from_fen("rnbqkb1r/pppppppp/8/8/3P4/8/PPP1PPPP/RN1QKBNR b KQkq -");
annotate_move(&dummy,"d7d5","?!");

dummy.set_from_fen("rnbq1bnr/p1pkpQ1p/3p2p1/1p6/8/4P3/PPPP1PPP/RNB1KB1R w KQ -");
annotate_move(&dummy,"f7e7","!!");

dummy.set_from_fen("r1b1k3/p1pp4/1p2p1p1/5p2/PP1PP3/6P1/2P2P2/RN3K2 b kq a3");
annotate_move(&dummy,"c8a6","?!");

dummy.set_from_fen("rnbqkbnr/pp1p3p/2p1ppp1/1B6/7Q/4P3/PPPP1PPP/RNB1K1NR b KQkq -");
annotate_move(&dummy,"g8h6","?!");

dummy.set_from_fen("rnbqkbnr/ppp1pppp/8/3p4/8/5N2/PPPPPPPP/RNBQKB1R w KQkq d6");
annotate_move(&dummy,"f3e5","!!");

dummy.set_from_fen("rnbqk2r/pp1p2pp/2p1pp1n/1B6/1b1P4/2N1P1PN/PPP2P1P/R1BQK2R b KQkq -");
annotate_move(&dummy,"h6g4","!");

dummy.set_from_fen("rnbqkb1r/pppp2pp/5p1n/4p1N1/4P3/8/PPPP1PPP/RNBQKB1R w KQkq -");
annotate_move(&dummy,"f1b5","?!");

dummy.set_from_fen("rnbqkb1r/pppp2pp/4pp2/3N4/6n1/2P2P1N/PP1PP1PP/R1BQKB1R b KQkq -");
annotate_move(&dummy,"f8c5","?!");

dummy.set_from_fen("rnbqkb1r/pppp2pp/4pp2/3N4/6n1/2P2P1N/PP1PP1PP/R1BQKB1R b KQkq -");
annotate_move(&dummy,"g4f2","?");

dummy.set_from_fen("rnbqkb1r/pppp2pp/4pp2/3N4/6n1/2P2P1N/PP1PP1PP/R1BQKB1R b KQkq -");
annotate_move(&dummy,"e6d5","??");

dummy.set_from_fen("rnbqkbnr/pppp2pp/4pp2/8/3PP3/5N2/PPP2PPP/RNBQKB1R b KQkq d3");
annotate_move(&dummy,"b8c6","!?");

dummy.set_from_fen("rn1qk2r/ppp4p/6pb/3pp3/5P2/8/PPPPQ2P/RNB1K2R b KQkq -");
annotate_move(&dummy,"d8h4","!!");

dummy.set_from_fen("r3kbnr/p3p2p/4b1p1/1p1p4/3P4/4P3/PPP2PPP/RNB1KB1R b KQkq d3");
annotate_move(&dummy,"g8f6","?!");

dummy.set_from_fen("rnbqkb1r/pp1pp1pp/2p2p2/8/8/2N1P3/PPPP1PP1/R1BQKB1R b KQkq -");
annotate_move(&dummy,"h7h5","?!");

dummy.set_from_fen("rnbqkbnr/ppppp1pp/5p2/8/8/5N1P/PPPPPPP1/RNBQKB1R b KQkq -");
annotate_move(&dummy,"e7e5","?!");

dummy.set_from_fen("rnbqkb1r/pp1p3p/2p1pppn/1B1N4/8/4PN2/PPPP1PPP/R1BQK2R w KQkq -");
annotate_move(&dummy,"d5c7","!");

dummy.set_from_fen("r3k1nr/1p2p1bp/p3b1p1/3p4/8/1P2P3/P1PP1PPP/RNB1KB1R w KQkq -");
annotate_move(&dummy,"c1a3","!");

dummy.set_from_fen("rnbqk1nr/ppp4p/3pppp1/2Q5/8/4P3/PPPP1PPP/R1B1KB1R w KQkq -");
annotate_move(&dummy,"c5c7","!");

dummy.set_from_fen("rnbqkbnr/pp1p1ppp/2p1p3/1B6/4P3/5Q2/PPPP1PPP/RNB1K1NR b KQkq -");
annotate_move(&dummy,"f7f5","?!");

dummy.set_from_fen("rnbqkbnr/pppp2pp/4pp2/8/8/4PN2/PPPP1PPP/RNBQKB1R w KQkq -");
annotate_move(&dummy,"f3d4","!?");

dummy.set_from_fen("rnb1kbnr/pppp2pp/4p3/1N3p2/7q/4P1P1/PPPP1P1P/RNBQKB1R b KQkq -");
annotate_move(&dummy,"h4c4","!?");

dummy.set_from_fen("r2qkb1r/ppp1p2p/5ppB/8/1n1P2b1/5P2/PPP3PP/RN1QKB1R b KQkq -");
annotate_move(&dummy,"f8h6","-");

dummy.set_from_fen("rnbqkbnr/pppp2pp/5p2/4p3/8/4PN2/PPPP1PPP/RNBQKB1R w KQkq e6");
annotate_move(&dummy,"f3g5","!");

dummy.set_from_fen("rnbqkbnr/pppp2pp/5p2/4p1N1/8/4P3/PPPP1PPP/RNBQKB1R b KQkq -");
annotate_move(&dummy,"f6g5","??");

dummy.set_from_fen("rnbqkbnr/pppp2pp/5p2/4p1N1/8/4P3/PPPP1PPP/RNBQKB1R b KQkq -");
annotate_move(&dummy,"g7g6","-");

dummy.set_from_fen("rnbqkbnr/ppppp2p/6p1/8/6Q1/4P3/PPPP1PPP/RNB1KB1R b KQkq -");
annotate_move(&dummy,"e7e6","?!");

dummy.set_from_fen("rnb1kb1r/pppp2pp/4pn2/5p2/8/4P1P1/PPPP1P1P/RNBQK2R w KQkq -");
annotate_move(&dummy,"f2f3","?!");

dummy.set_from_fen("rnbqkbnr/ppp1p1pp/5p2/3p4/4P3/5N2/PPPP1PPP/RNBQKB1R w KQkq d6");
annotate_move(&dummy,"e4d5","??");

dummy.set_from_fen("rnbqk2r/pp1p2pp/2p1pp2/2bN4/6n1/2P1PP1N/PP1P2PP/R1BQKB1R w KQkq -");
annotate_move(&dummy,"f3g4","!?");

dummy.set_from_fen("rnbqkbnr/pp1p2pp/4pp2/8/8/4P3/PPPP1PPP/RNBQKB1R w KQkq -");
annotate_move(&dummy,"d1h5","?!");

dummy.set_from_fen("rnbqkbnr/pp1p2pp/2p5/4ppN1/7P/8/PPPPPPP1/RNBQKB1R w KQkq -");
annotate_move(&dummy,"g5h7","?!");

dummy.set_from_fen("r1bqk1nr/pppp2pp/2n1pp2/1B6/1b1PP3/2P2N2/PP3PPP/RNBQK2R b KQkq -");
annotate_move(&dummy,"g8h6","?!");

dummy.set_from_fen("rnbqk2r/pppp2pp/4pp1n/3P4/1b6/2P1PN1P/PP3PP1/RNBQKB1R b KQkq -");
annotate_move(&dummy,"h6g4","?!");

dummy.set_from_fen("rnbqkbnr/ppp3pp/3p4/4p1N1/3PPp2/8/PPP2PPP/RNBQKB1R w KQkq -");
annotate_move(&dummy,"g5h7","?!");

dummy.set_from_fen("rnb1kb1r/pp5p/2p1ppp1/q2p4/3P4/2P1P2B/PP2NP1P/R1BQK1R1 b Qkq -");
annotate_move(&dummy,"a5a6","!?");

dummy.set_from_fen("r2k3r/pp1B3p/4pnpb/8/3P4/5P2/PPP3PP/RNB1K2R w KQ -");
annotate_move(&dummy,"c1g5","-");

dummy.set_from_fen("2r2rk1/1p4pp/p3pp1n/4P1P1/P1Bp4/8/1P3PKP/3R4 b - -");
annotate_move(&dummy,"h6g4","!!");

dummy.set_from_fen("rnbqkbnr/pppp1ppp/4p3/8/8/4PN2/PPPP1PPP/RNBQKB1R b KQkq -");
annotate_move(&dummy,"d8f6","?!");

dummy.set_from_fen("r1bqkb1r/ppp1p2p/2n2pp1/8/3P4/8/PPP2PPP/RNBQKB1R b KQkq d3");
annotate_move(&dummy,"c8g4","-");

dummy.set_from_fen("r2q1k1r/p1Np2p1/bpp1pp2/4P2p/1bPP4/8/PP4PP/R1BQK2R w KQ -");
annotate_move(&dummy,"e1e2","?!");

dummy.set_from_fen("rnbqkb1r/pp1pp1pp/2p2p1n/8/2PN2P1/8/PP1PPP1P/RNBQKB1R b KQkq c3");
annotate_move(&dummy,"d8a5","!!");

dummy.set_from_fen("r3kb1r/pp1p2pp/4pp1n/8/8/5N2/PPPPPPPP/R1BQKB1R b KQkq -");
annotate_move(&dummy,"h6g4","!!");

dummy.set_from_fen("rnbqkbnr/pppppppp/8/8/8/4P3/PPPP1PPP/RNBQKBNR b KQkq -");
annotate_move(&dummy,"e7e6","!?");

dummy.set_from_fen("rn1qkbnr/ppp3pp/5p2/8/3p2bN/3Q1P2/PPP1P1PP/RNB1KB1R b KQkq -");
annotate_move(&dummy,"f8b4","!!");

dummy.set_from_fen("rnb1kbnr/pppp1ppp/4pq2/8/2B1P3/5N2/PPPP1PPP/RNBQK2R b KQkq -");
annotate_move(&dummy,"f8b4","?!");

dummy.set_from_fen("r1b1k2r/p1pp1p1p/1pn1pnpb/1B6/4PP2/2P4P/PP1P2P1/RNB1K1NR b KQkq f3");
annotate_move(&dummy,"e8g8","?!");

dummy.set_from_fen("rnbqkbnr/ppppp2p/5p2/4N1p1/8/4P3/PPPP1PPP/RNBQKB1R b KQkq -");
annotate_move(&dummy,"f6e5","??");

dummy.set_from_fen("rnbqkbnr/ppp1p1pp/8/3p3Q/8/4P3/PPPP1PPP/RNB1KB1R b KQkq -");
annotate_move(&dummy,"g7g6","-");

dummy.set_from_fen("r1b1kb2/pppp4/4p1p1/5p2/1P6/4PnP1/P1PP1P1P/RNB2K1R b kq -");
annotate_move(&dummy,"f3h2","-");

dummy.set_from_fen("r1bqkb1r/ppppp1pp/5p1n/8/6P1/1QP5/PP1PPP1P/RNB1KB1R b KQkq -");
annotate_move(&dummy,"e7e6","?!");

dummy.set_from_fen("rn1qk2r/ppp1p2p/6pb/3p4/5P2/8/PPPP3P/RNBQK2R b KQkq f3");
annotate_move(&dummy,"e7e5","?!");

dummy.set_from_fen("rnbqkbnr/pppp1ppp/4p3/8/3PP3/8/PPP2PPP/RNBQKBNR b KQkq d3");
annotate_move(&dummy,"g8h6","?!");

dummy.set_from_fen("r1b1kb1r/pppp2pp/4pn2/8/1P1PPp2/3n1PP1/P1P1Q2P/RNB2K1R w kq -");
annotate_move(&dummy,"c2c4","?!");

dummy.set_from_fen("r1b1kb1r/pppp2pp/4pn2/8/1P1PPp2/3n1PP1/P1P1Q2P/RNB2K1R w kq -");
annotate_move(&dummy,"g3f4","?");

dummy.set_from_fen("r1b1kb1r/pppp2pp/4pn2/8/1P1PPp2/3n1PP1/P1P1Q2P/RNB2K1R w kq -");
annotate_move(&dummy,"c2c3","?!");

dummy.set_from_fen("r1b1kb1r/pppp2pp/4pn2/8/1P1PPp2/3n1PP1/P1P1Q2P/RNB2K1R w kq -");
annotate_move(&dummy,"g3g4","?");

dummy.set_from_fen("rnbqk1nr/pppp3p/4ppp1/7Q/8/4P3/PPPP1PPP/R1B1KB1R w KQkq -");
annotate_move(&dummy,"h5c5","!");

dummy.set_from_fen("rnb1kbnr/pppp2pp/4p3/1N3p2/2q5/4P1P1/PPPP1P1P/RNBQKB1R w KQkq -");
annotate_move(&dummy,"d2d3","?!");

dummy.set_from_fen("rnb1kbnr/pppp2pp/4p3/1N3p2/2q5/4P1P1/PPPP1P1P/RNBQKB1R w KQkq -");
annotate_move(&dummy,"f1d3","?");

dummy.set_from_fen("rnb1kbnr/pppp2pp/4p3/1N3p2/2q5/4P1P1/PPPP1P1P/RNBQKB1R w KQkq -");
annotate_move(&dummy,"f1c4","?!");

dummy.set_from_fen("rnbqkbnr/ppppp1pp/5p2/8/7N/8/PPPPPPPP/RNBQKB1R b KQkq -");
annotate_move(&dummy,"d7d5","-");

dummy.set_from_fen("rnbqkbnr/ppppp1pp/5p2/8/7N/8/PPPPPPPP/RNBQKB1R b KQkq -");
annotate_move(&dummy,"g7g6","?!");

dummy.set_from_fen("rnbqkbnr/pppppppp/8/8/8/2N5/PPPPPPPP/R1BQKBNR b KQkq -");
annotate_move(&dummy,"g8h6","?!");

dummy.set_from_fen("rnbqkb1r/pp1pp2p/2p2pp1/8/3P4/2N1P2B/PPP2P1P/R1BQK2R b KQkq -");
annotate_move(&dummy,"e7e6","?!");

dummy.set_from_fen("rn1qkbnr/ppp3pp/4pp2/3pN3/6b1/4PQ2/PPPP1PPP/RNB1KB1R w KQkq -");
annotate_move(&dummy,"e5f7","?!");

dummy.set_from_fen("rnbqkbnr/ppp1p1pp/5p2/3p4/3PP3/5N2/PPP2PPP/RNBQKB1R b KQkq d3");
annotate_move(&dummy,"g8h6","?!");

dummy.set_from_fen("rnbqkb1r/pppp1ppp/4pn2/8/3P1B2/8/PPP1PPPP/RN1QKBNR w KQkq -");
annotate_move(&dummy,"f4c7","??");

dummy.set_from_fen("rnbqk2r/p1p3p1/1p1ppp2/3P3p/4PB2/8/PP2BPP1/R2QK2R b KQkq -");
annotate_move(&dummy,"e6e5","?!");

dummy.set_from_fen("rnbqkbnr/ppp1p1pp/8/3pNp2/8/8/PPPPPPPP/RNBQKB1R w KQkq d6");
annotate_move(&dummy,"e5d7","!!");

dummy.set_from_fen("rnbqkbnr/pppppppp/8/8/6P1/8/PPPPPP1P/RNBQKBNR b KQkq g3");
annotate_move(&dummy,"b8c6","?!");

dummy.set_from_fen("rnbqkbnr/ppppp1pp/5p2/8/8/5N2/PPPPPPPP/RNBQKB1R w KQkq -");
annotate_move(&dummy,"e2e3","!");

dummy.set_from_fen("r1b1kbnr/pppp2pp/2n1p3/5p2/8/4P1P1/PPPP1P1P/RNBQK2R w KQkq -");
annotate_move(&dummy,"b2b4","?!");

dummy.set_from_fen("rnbqkb1r/1ppp2pp/p3pp2/8/4P3/P1N5/1PPP1PPP/R1BQKB1R b KQkq -");
annotate_move(&dummy,"g7g6","?!");

dummy.set_from_fen("r3kb1r/pp1pp1pp/5p1n/8/4P1P1/8/PP1P1P1P/R3KB1R b KQkq -");
annotate_move(&dummy,"a7a6","?!");

dummy.set_from_fen("r1b1k3/p1pp4/1p2p1pb/5pB1/1P1PP3/6P1/P1P2P2/RN3K2 b kq -");
annotate_move(&dummy,"h6g5","?!");

dummy.set_from_fen("r1bqkbnr/pppp2pp/4p3/5p2/8/P3P3/1PPP1PPP/RNBQKB1R b KQkq -");
annotate_move(&dummy,"g8f6","?!");

dummy.set_from_fen("rnb1kb1r/pppp2pp/4pn2/5p2/8/4PP2/PPPP2PP/RNB1KBNR b KQkq -");
annotate_move(&dummy,"b8c6","?!");

dummy.set_from_fen("rnbqkb1r/1pp4p/p3pppB/3p4/3PP3/P1N5/1PP2PPP/R2QKB1R b KQkq -");
annotate_move(&dummy,"f8h6","?!");

dummy.set_from_fen("rnbqkb1r/ppppp1pp/5p1n/5N2/8/8/PPPPPPPP/RNBQKB1R b KQkq -");
annotate_move(&dummy,"h6f5","!");

dummy.set_from_fen("rnbqkbnr/pppp1ppp/4p3/1B6/4P3/8/PPPP1PPP/RNBQK1NR b KQkq -");
annotate_move(&dummy,"c7c6","?!");

dummy.set_from_fen("r1bqkb1r/pppp2pp/n3pp1n/1N6/8/4P3/PPPP1PPP/RNBQKB1R w KQkq -");
annotate_move(&dummy,"b5c7","?!");

dummy.set_from_fen("rnbqkb1r/ppppp1pp/5p1n/3N4/8/5N2/PPPPPPPP/R1BQKB1R b KQkq -");
annotate_move(&dummy,"e7e6","!?");

dummy.set_from_fen("rnbqk1nr/pppp2pp/4p3/5p2/8/4PQ1N/PP1P1PPP/RNB1K2R b KQkq -");
annotate_move(&dummy,"d8h4","!");

dummy.set_from_fen("rnb1kb1r/pp1pp2p/2p2ppn/qN5Q/8/4P3/PPPP1PPP/RNB1KB1R w KQkq -");
annotate_move(&dummy,"b2b4","?!");

dummy.set_from_fen("r1bqkbnr/pp2p2p/2np1pp1/1Q6/8/4P3/PPPP1PPP/RNB1KB1R w KQkq -");
annotate_move(&dummy,"b5b6","?!");

dummy.set_from_fen("rnbqkb1r/pppp2pp/4pp1n/3N4/8/2P4N/PP1PPPPP/R1BQKB1R b KQkq -");
annotate_move(&dummy,"b7b5","?");

dummy.set_from_fen("rnbqkb1r/pppp2pp/4pp1n/3N4/8/2P4N/PP1PPPPP/R1BQKB1R b KQkq -");
annotate_move(&dummy,"c7c6","?");

dummy.set_from_fen("rnbqkb1r/pppp2pp/4pp1n/3N4/8/2P4N/PP1PPPPP/R1BQKB1R b KQkq -");
annotate_move(&dummy,"h6g4","?!");

dummy.set_from_fen("rnbqkb1r/pppp2pp/4pp1n/3N4/8/2P4N/PP1PPPPP/R1BQKB1R b KQkq -");
annotate_move(&dummy,"e6d5","??");

dummy.set_from_fen("r1bqkb1r/pppp2pp/2n1pp2/4P1N1/5P2/2P2Q2/PP1P1nPP/RNB1KB1R b KQkq -");
annotate_move(&dummy,"f6g5","?!");

dummy.set_from_fen("rnbqkbnr/ppppp2p/5pp1/8/8/2N1P2N/PPPP1PPP/R1BQKB1R b KQkq -");
annotate_move(&dummy,"c7c6","?!");

dummy.set_from_fen("rn2kbnr/pp2p1pp/5p2/3pN3/8/4P3/PPPP1PPP/RNB1K2R w KQkq -");
annotate_move(&dummy,"e5d7","?!");

dummy.set_from_fen("rnb1kbnr/pp1p2pp/1qp5/4ppN1/1P6/6P1/P1PPPP1P/RNBQKB1R w KQkq -");
annotate_move(&dummy,"e2e3","?!");

dummy.set_from_fen("rnbqkbnr/ppp1p1pp/5p2/3pN3/8/4P3/PPPP1PPP/RNBQKB1R b KQkq -");
annotate_move(&dummy,"f6e5","?!");

dummy.set_from_fen("rnbqkbnr/ppp1p1pp/5p2/3pN3/8/4P3/PPPP1PPP/RNBQKB1R b KQkq -");
annotate_move(&dummy,"c8g4","?!");

dummy.set_from_fen("r4b1r/pp1p1kpp/4pp2/1B6/1n3Pn1/4P3/PPPP2PP/RNBQK2R w KQ -");
annotate_move(&dummy,"c2c3","?!");

dummy.set_from_fen("r2qk2r/ppp1p2p/5pp1/8/1n1P2b1/N4P2/PPP3PP/R2QKB1R b KQkq -");
annotate_move(&dummy,"d8d5","!!");

dummy.set_from_fen("rn1qkb1r/ppp1p1pp/5p1n/3pP3/8/7B/PPPP1P1P/RNBQK2R b KQkq -");
annotate_move(&dummy,"h6g4","?!");

dummy.set_from_fen("r3kb1r/pp1p2pp/n3pp2/8/6n1/4P3/PPPP1PPP/RNBQKB1R w KQkq -");
annotate_move(&dummy,"f2f4","?!");

dummy.set_from_fen("rnbqkbnr/ppp1p1pp/5p2/3p4/3P3N/8/PPP1PPPP/RNBQKB1R b KQkq d3");
annotate_move(&dummy,"c8g4","?!");

dummy.set_from_fen("rnbqkbnr/pppp2pp/8/5pN1/3Pp3/8/PPP1PPPP/RNBQKB1R w KQkq -");
annotate_move(&dummy,"e2e3","?!");

dummy.set_from_fen("rnbqkbnr/pppp2pp/4pp2/4P3/8/5N2/PPPP1PPP/RNBQKB1R b KQkq -");
annotate_move(&dummy,"b8c6","?!");

dummy.set_from_fen("rnbqkbnr/pppp1ppp/8/4p3/8/5N2/PPPPPPPP/RNBQKB1R w KQkq e6");
annotate_move(&dummy,"f3g5","!?");

dummy.set_from_fen("rnb1kbnr/ppppqN1p/5pp1/4p3/8/4P3/PPPP1PPP/RNBQKB1R w KQkq -");
annotate_move(&dummy,"f7d6","!");

dummy.set_from_fen("rnb1kbnr/pppp1ppp/4p3/3P4/8/6P1/PP2PP1P/3RKBNR b Kkq -");
annotate_move(&dummy,"f8b4","!!");

dummy.set_from_fen("rnbqk1nr/pppp2pp/4pp2/8/1b1P4/2P1PN2/PP3PPP/RNBQKB1R b KQkq -");
annotate_move(&dummy,"g8h6","?!");

dummy.set_from_fen("r1bqkb1r/pppp2pp/4pp1n/8/6P1/1QP5/PP1PPPBP/RNB1K2R b KQkq -");
annotate_move(&dummy,"c7c6","?!");

dummy.set_from_fen("rnb1k1nr/ppp1q1pp/3ppp2/1N6/1b6/2N1P3/PPPP1PPP/R1BQKB1R w KQkq -");
annotate_move(&dummy,"b5d6","?!");

dummy.set_from_fen("rnbqkb1r/pppp2pp/4pp1n/3N4/8/7N/PPPPPPPP/R1BQKB1R w KQkq -");
annotate_move(&dummy,"c2c3","!");

dummy.set_from_fen("rnbqkbnr/ppp1p1pp/3p1p2/8/8/4PN2/PPPP1PPP/RNBQKB1R w KQkq -");
annotate_move(&dummy,"f1d3","?!");

dummy.set_from_fen("rnbqkbnr/ppp1p1pp/3p1p2/8/8/4PN2/PPPP1PPP/RNBQKB1R w KQkq -");
annotate_move(&dummy,"f3d4","!?");

dummy.set_from_fen("rnbqkbnr/pp1p3p/4ppp1/7Q/8/4P3/PPPP1PPP/RNB1KB1R w KQkq -");
annotate_move(&dummy,"h5b5","?!");

dummy.set_from_fen("rnbqkbnr/pppp2pp/4pp2/8/4P3/5N2/PPPPBPPP/RNBQK2R b KQkq -");
annotate_move(&dummy,"g8h6","?!");

dummy.set_from_fen("rn1qk2r/pp4pp/2p2p1n/3pp3/3PP1P1/b1P5/PP3P1P/RNBQKB1R b KQkq -");
annotate_move(&dummy,"a3b2","?!");

dummy.set_from_fen("rn1qk2r/pp4pp/2p2p1n/2bpp3/3PP1P1/1QP5/PP3P1P/RNB1KB1R b KQkq d3");
annotate_move(&dummy,"c5a3","?!");

dummy.set_from_fen("r1b1kb1r/pppp2pp/4pn2/5p2/1P1PP3/3n1PP1/P1P1Q2P/RNB1K2R w KQkq -");
annotate_move(&dummy,"e1d1","??");

dummy.set_from_fen("r1b1kb1r/pppp2pp/4pn2/5p2/1P1PP3/3n1PP1/P1P1Q2P/RNB1K2R w KQkq -");
annotate_move(&dummy,"e1f1","?!");

dummy.set_from_fen("rnbqkbnr/pppppppp/8/8/8/2P5/PP1PPPPP/RNBQKBNR b KQkq -");
annotate_move(&dummy,"g8f6","?!");

dummy.set_from_fen("r1bqk2r/ppp3p1/2nppp2/1B1P3p/1b2P3/2P2Q2/PP3PP1/RNB1K2R b KQkq -");
annotate_move(&dummy,"e6e5","?!");

dummy.set_from_fen("rnbqk2r/p1pp2p1/1p2pp2/7p/3PPB2/8/PP2BPP1/R2QK2R b KQkq -");
annotate_move(&dummy,"d7d6","?!");

dummy.set_from_fen("rnb1kbnr/pppp2pp/4p3/5p2/8/4P1P1/PPPP1P1P/RNBQK2R b KQkq -");
annotate_move(&dummy,"b8c6","-");

dummy.set_from_fen("rnbqkb2/pp6/2p3p1/3p1p1Q/3Pp3/4P3/PPP2PPP/RNB1KB1R w KQkq -");
annotate_move(&dummy,"h5h8","!");

dummy.set_from_fen("rnb1kbnr/pp1p2pp/2p1pp2/1N6/qP6/4P3/P1PP1PPP/RNBQKB1R w KQkq -");
annotate_move(&dummy,"d1h5","!?");

dummy.set_from_fen("rnbqk1nr/pppp2pp/4pp2/8/1b6/P1N1PN2/1PPP1PPP/R1BQKB1R b KQkq -");
annotate_move(&dummy,"g8h6","?!");

dummy.set_from_fen("rnbqkbnr/pp1p2pp/2p1p3/1B3p1Q/4P3/8/PPPP1PPP/RNB1K1NR b KQkq -");
annotate_move(&dummy,"g7g6","?!");

dummy.set_from_fen("rnbqkb1r/ppp1p1pp/3p1p2/1N6/6n1/4P3/PPPP1PPP/RNBQKB1R w KQkq -");
annotate_move(&dummy,"f2f4","!?");

dummy.set_from_fen("rnbqk2r/p1pp2p1/1p2pp2/7p/1b1PP3/2P5/PP1NBPP1/R1BQK2R b KQkq -");
annotate_move(&dummy,"b4c3","?!");

dummy.set_from_fen("rnb1kbnr/pppp1ppp/8/4p3/8/8/PPPPPPPP/RNBQKB1R w KQkq -");
annotate_move(&dummy,"e2e3","!?");

dummy.set_from_fen("rnbqkbnr/p1ppp1pp/8/1p6/8/4P3/PPPP1PPP/RNBQKB1R w KQkq -");
annotate_move(&dummy,"d1h5","!!");

dummy.set_from_fen("rnb1kbnr/pppp3p/4p1p1/5p2/3N4/4P3/PPPP1PPP/RNB1KB1R w KQkq -");
annotate_move(&dummy,"d4b5","?!");

dummy.set_from_fen("r1b1kbnr/pppp2pp/2n1p3/5p2/1P6/4P1P1/P1PP1P1P/RNBQK2R b KQkq b3");
annotate_move(&dummy,"c6e5","-");

dummy.set_from_fen("r2k1b1r/pp2p2p/4b1p1/1B1n4/3P4/1P3P2/P1P3PP/RNB1K2R w KQ -");
annotate_move(&dummy,"c1g5","?!");

dummy.set_from_fen("rnb1kb1r/pppp1ppp/4p2n/3N4/3P3q/6P1/PPP1PP1P/R1BQKBNR b KQkq -");
annotate_move(&dummy,"h4e4","?!");

dummy.set_from_fen("r3kb1r/pp2p2p/4bnp1/3p4/8/4P3/PPPP1PPP/RNB1KB1R w KQkq -");
annotate_move(&dummy,"f1b5","!?");

dummy.set_from_fen("r4rk1/p3p2p/6pb/1p1p1b2/3P4/4PB2/PPP3PP/RNB1K2R w KQ -");
annotate_move(&dummy,"b1a3","?!");

dummy.set_from_fen("r1bqkbnr/ppp3pp/2n1pp2/1B1p4/6P1/2P1PN2/PP1P1P1P/RNBQK2R b KQkq -");
annotate_move(&dummy,"d5d4","?!");

dummy.set_from_fen("r1b1kb1r/pppp1p1p/2n1pnp1/8/4P3/2P4P/PP1P1PP1/RNB1KBNR b KQkq -");
annotate_move(&dummy,"b7b6","?!");

dummy.set_from_fen("rnb1k2r/pppp1ppp/4pq1n/8/4P3/2N2N2/PP1P1PPP/R1BQK2R w KQkq -");
annotate_move(&dummy,"d2d4","??");

dummy.set_from_fen("rnb1kb1r/pppp1ppp/4pq1n/8/5PPP/2N5/PPPPP3/R1BQKBNR b KQkq f3");
annotate_move(&dummy,"f6d4","!!");

dummy.set_from_fen("rnbqkbnr/ppppp2p/8/6p1/8/4P3/PPPP1PPP/RNBQKB1R w KQkq -");
annotate_move(&dummy,"d1h5","!!");

dummy.set_from_fen("r1bqkb1r/ppppp1pp/5p1n/8/8/5P2/PPPPP1PP/RNBQKB1R b KQkq -");
annotate_move(&dummy,"e7e6","!?");

dummy.set_from_fen("r1b1kb2/pppp4/4p1p1/4np2/1P6/4P1P1/P1PP1P1P/RNB1K2R b KQkq -");
annotate_move(&dummy,"e5f3","-");

dummy.set_from_fen("rnb1kb1r/pp1p1ppp/2p1pq1n/8/2B1P3/5N2/PPPP1PPP/RNBQK2R w KQkq -");
annotate_move(&dummy,"h2h3","??");

dummy.set_from_fen("rnbqkb1r/pppp2p1/4pp2/7p/3PP3/8/PPP1BPP1/RNBQK2R b KQkq d3");
annotate_move(&dummy,"b7b6","?!");

dummy.set_from_fen("rnbqkb1r/1pp3pp/p4p2/3pp3/3PP2N/N7/PPP2PPP/R2QKB1R b KQkq -");
annotate_move(&dummy,"c8g4","-");

dummy.set_from_fen("r4b1r/p1k1p2p/1pB1b1p1/6B1/3P1n2/1PN2P2/P1P3PP/R3K2R w KQ -");
annotate_move(&dummy,"c3b5","!!");

dummy.set_from_fen("rnq1k1nr/p5pp/2p2p2/3pp3/5Qb1/4P3/PPPP1PPP/RNB1K2R w KQkq -");
annotate_move(&dummy,"f4b4","?!");

dummy.set_from_fen("rnbqk1nr/ppp3pp/3ppp2/8/1b1N4/2N1P3/PPPP1PPP/R1BQKB1R w KQkq -");
annotate_move(&dummy,"d4b5","?!");

dummy.set_from_fen("rnbqkb1r/ppppp2p/5ppn/8/8/2N1PN2/PPPP1PPP/R1BQKB1R w KQkq -");
annotate_move(&dummy,"f1b5","!");

dummy.set_from_fen("r3kb1r/p3p2p/4b1p1/1p1p4/3P2n1/4PP2/PPP3PP/RNB1KB1R w KQkq -");
annotate_move(&dummy,"f3g4","?!");

dummy.set_from_fen("r3kb1r/p3p2p/4b1p1/1p1p4/3P2n1/4PP2/PPP3PP/RNB1KB1R w KQkq -");
annotate_move(&dummy,"h2h3","?");

dummy.set_from_fen("r1bqk2r/pp4pp/n1p2p1n/3pp3/6PP/B1P5/P2PPP2/RN1QKB1R b KQkq -");
annotate_move(&dummy,"a6b4","!?");

dummy.set_from_fen("r1bqkb1r/pp1pp2p/n1p2ppn/1N5Q/8/4P3/PPPP1PPP/RNB1KB1R w KQkq -");
annotate_move(&dummy,"b5c7","?!");

dummy.set_from_fen("r4rk1/pp5p/4pppn/3p4/1b4P1/2Q1P3/PP1P1P1P/R3KB1R w KQ -");
annotate_move(&dummy,"f1b5","?!");

dummy.set_from_fen("rnq1kbnr/ppp1pN1p/5pp1/3p4/6b1/4PQ2/PPPP1PPP/RNB1KB1R w KQkq -");
annotate_move(&dummy,"f1b5","?!");

dummy.set_from_fen("rnbqkbnr/pppp1ppp/4p3/8/4P3/8/PPPP1PPP/RNBQKBNR w KQkq -");
annotate_move(&dummy,"e4e5","??");

dummy.set_from_fen("rnbqkbnr/pppp1ppp/4p3/8/4P3/8/PPPP1PPP/RNBQKBNR w KQkq -");
annotate_move(&dummy,"d1f3","?!");

dummy.set_from_fen("rn1qkbnr/ppp1p2p/4b1p1/3pQ3/8/4P3/PPPP1PPP/RNB1KB1R w KQkq -");
annotate_move(&dummy,"e5c7","!?");

dummy.set_from_fen("rnbqkb2/pp4p1/2p5/3p1p2/3Pp3/4P3/PPP2PPP/RNBQKB1R w KQkq d6");
annotate_move(&dummy,"d1h5","!");

dummy.set_from_fen("rnbqk2r/pppp2pp/4pp1n/8/1b1P4/2P1PN1P/PP3PP1/RNBQKB1R b KQkq -");
annotate_move(&dummy,"h6g4","?!");

dummy.set_from_fen("rnbqkb1r/pppp2pp/4pp2/3N4/6n1/2P4N/PP1PPPPP/R1BQKB1R w KQkq -");
annotate_move(&dummy,"f2f3","!");

dummy.set_from_fen("r3k1nr/pp5p/4ppp1/3p4/1b1Q4/4P3/PP1P1PPP/R3KB1R w KQkq -");
annotate_move(&dummy,"d4c3","?!");

dummy.set_from_fen("rnbqkbnr/pppppppp/8/8/8/8/PPPPPPPP/RNBQKBNR w KQkq -");
annotate_move(&dummy,"g1f3","!");

dummy.set_from_fen("rn2k1nr/p6p/2p2pp1/3pp3/8/4P3/PPPP1PPP/RNB1K2R w KQkq -");
annotate_move(&dummy,"b2b4","?!");

dummy.set_from_fen("rnbqkb1r/ppppp1pp/5p1n/8/3N4/5P2/PPPPP1PP/RNBQKB1R b KQkq -");
annotate_move(&dummy,"b8c6","!?");

dummy.set_from_fen("r2k1b1r/pp5p/4pnp1/1B1p4/8/4P3/PPPP1PPP/RNB1K2R w KQ -");
annotate_move(&dummy,"f2f3","?!");

dummy.set_from_fen("r3k2r/p3p2p/4b1pb/1p1p4/3P4/4P3/PPP3PP/RNB1KB1R w KQkq -");
annotate_move(&dummy,"f1e2","?!");

dummy.set_from_fen("rnbqkbnr/pppppppp/8/8/8/7N/PPPPPPPP/RNBQKB1R b KQkq -");
annotate_move(&dummy,"e7e6","?!");

dummy.set_from_fen("rnbqkbnr/pppppppp/8/8/8/7N/PPPPPPPP/RNBQKB1R b KQkq -");
annotate_move(&dummy,"h7h6","!?");

dummy.set_from_fen("rnbqkbnr/pppppppp/8/8/8/7N/PPPPPPPP/RNBQKB1R b KQkq -");
annotate_move(&dummy,"f7f6","-");

dummy.set_from_fen("rnq1k1nr/pp4pp/2p1pp2/1B1p4/6b1/4PQ2/PPPP1PPP/RNB1K2R w KQkq -");
annotate_move(&dummy,"f3f4","?!");

dummy.set_from_fen("rnbqk2r/pppp2pp/4pp1n/8/1b4P1/P1N1PN2/1PPP1P1P/R1BQKB1R b KQkq g3");
annotate_move(&dummy,"g7g6","?!");

dummy.set_from_fen("rnbqkbnr/pppp1ppp/4p3/1B6/8/4P3/PPPP1PPP/RNBQK1NR b KQkq -");
annotate_move(&dummy,"c7c6","?!");

dummy.set_from_fen("b1k5/p1pp4/1p2p1p1/PP6/2NP4/6P1/2PK1P1r/7R b - -");
annotate_move(&dummy,"d7d6","-");

dummy.set_from_fen("r1bqkb1r/pppp2pp/4pp1n/8/8/3P1P2/PPP1P1PP/RNBQKB1R b KQkq -");
annotate_move(&dummy,"h6f5","?!");

dummy.set_from_fen("rnbqkb1r/pp1pp2p/2p2ppn/1B6/8/2N1PN2/PPPP1PPP/R1BQK2R w KQkq -");
annotate_move(&dummy,"c3d5","!");

dummy.set_from_fen("rnbqk2r/pppp3p/4pppn/8/1b4P1/P1NBPN2/1PPP1P1P/R1BQK2R b KQkq -");
annotate_move(&dummy,"b4c3","?!");

dummy.set_from_fen("r1b1kb1r/pppp2pp/4pn2/4np2/1P6/4PPP1/P1PP3P/RNBQK2R w KQkq -");
annotate_move(&dummy,"d2d3","?!");

dummy.set_from_fen("r1b1kb1r/pppp2pp/4pn2/4np2/1P6/4PPP1/P1PP3P/RNBQK2R w KQkq -");
annotate_move(&dummy,"e1g1","?");

dummy.set_from_fen("r1b1kb1r/pppp2pp/4pn2/4np2/1P6/4PPP1/P1PP3P/RNBQK2R w KQkq -");
annotate_move(&dummy,"d2d4","?!");

dummy.set_from_fen("rnbqkb1r/ppppp1pp/5p1n/8/3N2P1/8/PPPPPP1P/RNBQKB1R b KQkq g3");
annotate_move(&dummy,"b8c6","?!");

dummy.set_from_fen("rnbqkb1r/ppppp1pp/5p1n/8/3N2P1/8/PPPPPP1P/RNBQKB1R b KQkq g3");
annotate_move(&dummy,"c7c6","-");

dummy.set_from_fen("rnbqkbnr/pppp3p/5pp1/4p1N1/8/4P3/PPPP1PPP/RNBQKB1R w KQkq -");
annotate_move(&dummy,"g5f7","!");

dummy.set_from_fen("r1bq1bnr/pppkpQ1p/2np2p1/8/8/4P3/PPPP1PPP/RNB1KB1R w KQ -");
annotate_move(&dummy,"f7e7","!!");

dummy.set_from_fen("rnbqkb1r/pp1pp2p/2p2ppn/7Q/3N4/4P3/PPPP1PPP/RNB1KB1R w KQkq -");
annotate_move(&dummy,"d4b5","?!");

dummy.set_from_fen("r1bqk2r/pp1p2pp/n1p2p1n/4p3/6PP/2P5/P2PPP2/RNBQKB1R b KQkq -");
annotate_move(&dummy,"d7d5","?!");

dummy.set_from_fen("r1bqkb1r/ppppp1pp/2n2p1n/8/3N2P1/2P5/PP1PPP1P/RNBQKB1R b KQkq -");
annotate_move(&dummy,"c6a5","?!");

dummy.set_from_fen("r1bqkb1r/ppppp1pp/2n2p1n/8/3N2P1/2P5/PP1PPP1P/RNBQKB1R b KQkq -");
annotate_move(&dummy,"c6d4","?");

dummy.set_from_fen("rnbqkbnr/ppppp2p/5pp1/6N1/8/4P3/PPPP1PPP/RNBQKB1R b KQkq -");
annotate_move(&dummy,"f6g5","?!");

dummy.set_from_fen("r4b1r/p1k1p2p/1pB1b1p1/3n2B1/3P4/1P3P2/P1P3PP/RN2K2R w KQ -");
annotate_move(&dummy,"b1c3","!?");

dummy.set_from_fen("rnbqkb1r/pp1p2pp/2p2p1n/4p3/1P4P1/1N6/P1PPPP1P/RNBQKB1R b KQkq -");
annotate_move(&dummy,"f8b4","?!");

dummy.set_from_fen("rnb1k2r/pp5p/2p1ppp1/q2p4/2PP4/2N1P2B/P4P1P/R1BQK1R1 b Qkq -");
annotate_move(&dummy,"d5c4","!!");

dummy.set_from_fen("r3kb1r/pp1p2pp/4pp2/8/1n3Pn1/4P3/PPPP2PP/RNBQKB1R w KQkq -");
annotate_move(&dummy,"f1b5","?!");

dummy.set_from_fen("2r2rk1/pp5p/4pppn/1B1p4/1b4P1/2Q1P3/PP1P1P1P/R3K2R w KQ -");
annotate_move(&dummy,"b5e8","?!");

dummy.set_from_fen("rnbqkb1r/ppp1p1pp/3p1p1n/8/3N4/4P3/PPPP1PPP/RNBQKB1R w KQkq -");
annotate_move(&dummy,"d4b5","!?");

dummy.set_from_fen("r1bqkb1r/pppp2pp/4pn2/5p2/8/P3PP2/1PPP2PP/RNBQKB1R b KQkq -");
annotate_move(&dummy,"f6e4","?!");

dummy.set_from_fen("rnbq1k1r/ppNp2p1/2pbpp2/7p/3PP3/2P5/PP4PP/R1BQKB1R b KQ -");
annotate_move(&dummy,"d8e7","??");

dummy.set_from_fen("rnbqkb1r/pppp2pp/4pp1n/8/4P3/5N1P/PPPPBPP1/RNBQK2R b KQkq -");
annotate_move(&dummy,"h6g4","?!");

dummy.set_from_fen("rnb1k2r/pp5p/q1p1ppp1/3p4/2PP4/b3P2B/PP2NP1P/R1BQK1R1 w Qkq -");
annotate_move(&dummy,"b2a3","??");

dummy.set_from_fen("r1bqkbnr/ppp3pp/n7/3pppN1/3P4/P7/1PP1PPPP/RNBQKB1R w KQkq d6");
annotate_move(&dummy,"e2e4","?!");

dummy.set_from_fen("rn1qkb1r/pp4pp/2p2p1n/3pp3/4P1P1/1QP5/PP1P1P1P/RNB1KB1R b KQkq e3");
annotate_move(&dummy,"f8c5","?!");

dummy.set_from_fen("r1bqkb1r/ppppp1pp/2n2p1n/1N6/6P1/8/PPPPPP1P/RNBQKB1R b KQkq -");
annotate_move(&dummy,"c6d4","?!");

dummy.set_from_fen("rnbqkbnr/pppp2pp/4p3/5p2/5Q2/4P3/PPPP1PPP/RNB1KBNR b KQkq -");
annotate_move(&dummy,"d8h4","?!");

dummy.set_from_fen("r1bqkb1r/pppp2pp/2n1pp1n/8/3PP3/P4N1P/1PP2PP1/RNBQKB1R b KQkq -");
annotate_move(&dummy,"h6g4","!?");

dummy.set_from_fen("rnb1kbnr/pppp1ppp/4pq2/8/4P3/2N2N2/PPPP1PPP/R1BQKB1R b KQkq -");
annotate_move(&dummy,"f6f4","!!");

dummy.set_from_fen("r1bqk2r/ppp3p1/2np1p2/1B1Pp2p/1b2P3/2P3Q1/PP3PP1/RNB1K2R b KQkq -");
annotate_move(&dummy,"c8g4","?!");

dummy.set_from_fen("rnbqkb1r/ppp2ppp/8/3pp3/3PP3/7P/PPP2PP1/RN1QKBNR b KQkq e3");
annotate_move(&dummy,"g7g6","?!");

dummy.set_from_fen("rnq1k1nr/pp5p/2p2pp1/1B1pp3/5Qb1/4P3/PPPP1PPP/RNB1K2R w KQkq -");
annotate_move(&dummy,"b5a6","?!");

dummy.set_from_fen("rnbqk1nr/pppp1ppp/4p3/8/1b6/2PBP3/PP1P1PPP/RNBQK1NR b KQkq -");
annotate_move(&dummy,"b4c3","-");

dummy.set_from_fen("r1bqBbnr/1p2p2p/3pkpp1/8/3P4/4P3/PPP2PPP/RNB1K2R b KQ d3");
annotate_move(&dummy,"d8a5","??");

dummy.set_from_fen("rnbqkb1r/pppppppp/5n2/8/8/2P5/PP1PPPPP/RNBQKBNR w KQkq -");
annotate_move(&dummy,"d2d4","??");

dummy.set_from_fen("rnbqk2r/pppp3p/4ppp1/8/3P4/4P3/PP3PP1/RNBQKB1R b KQkq -");
annotate_move(&dummy,"b8a6","?!");

dummy.set_from_fen("rnbqkbnr/pppp2pp/4p3/8/8/5Q2/PPPP1PPP/RNB1KBNR b KQkq -");
annotate_move(&dummy,"f8b4","!");

dummy.set_from_fen("3k1b1r/pp2p1pp/7n/3p1p2/6P1/4P3/PPPP1P1P/RNB1K2R w KQ -");
annotate_move(&dummy,"h1g1","?!");

dummy.set_from_fen("r1bq1k1r/p1Np2p1/1ppbpp2/4P2p/3P4/2P5/PP4PP/R1BQK2R b KQ -");
annotate_move(&dummy,"c8a6","?!");

dummy.set_from_fen("rnbqk2r/pppp2pp/4pp2/3P4/1b6/2P1P3/PP3PP1/RNBQKB1R b KQkq -");
annotate_move(&dummy,"h7h5","?!");

dummy.set_from_fen("rnbqkb1r/pppppppp/7n/8/6P1/2N5/PPPPPP1P/R1BQKBNR b KQkq g3");
annotate_move(&dummy,"e7e6","?!");

dummy.set_from_fen("rn1qkbnr/ppp1p1pp/5p2/3pN3/6b1/4PQ2/PPPP1PPP/RNB1KB1R b KQkq -");
annotate_move(&dummy,"g4f3","??");

dummy.set_from_fen("rnbqk1nr/pppp3p/4p1p1/8/1b3Q2/2P1P3/PP1P1PPP/RNB1KB1R b KQkq -");
annotate_move(&dummy,"d8h4","?!");

dummy.set_from_fen("r1bqkb1r/pppp2pp/4pp2/5n2/8/2PP1P2/PP2P1PP/RNBQKB1R b KQkq -");
annotate_move(&dummy,"f5h4","?!");

dummy.set_from_fen("rn1qkb1r/1pp4p/p4pp1/3pp3/3PP3/N4P1B/PPP4P/R2QK2R b KQkq -");
annotate_move(&dummy,"f6f5","?!");

dummy.set_from_fen("rnbqkbnr/pppp1pp1/7p/3Np3/8/8/PPPPPPPP/RNBQKB1R b KQkq -");
annotate_move(&dummy,"d8h4","!!");

dummy.set_from_fen("rnbqkbnr/pppp1ppp/4p3/8/4P3/5Q2/PPPP1PPP/RNB1KBNR b KQkq -");
annotate_move(&dummy,"f7f5","!");

dummy.set_from_fen("rnb1kbnr/pppp1ppp/4p3/3P4/2q5/3Q2P1/PPP1PP1P/RNB1KBNR b KQkq -");
annotate_move(&dummy,"c4c2","!");

dummy.set_from_fen("rnbqkb1r/pppp2pp/5p1n/4p3/4P3/2P2N1P/PP1P1PP1/RNBQKB1R b KQkq -");
annotate_move(&dummy,"h6g4","!?");

dummy.set_from_fen("r1bqkbnr/pp1p3p/2n1ppp1/1Q6/8/4P3/PPPP1PPP/RNB1KB1R w KQkq -");
annotate_move(&dummy,"b5b7","?!");

dummy.set_from_fen("r1bqkbnr/pp1p3p/2n1ppp1/1Q6/8/4P3/PPPP1PPP/RNB1KB1R w KQkq -");
annotate_move(&dummy,"b5b6","-");

dummy.set_from_fen("rnbqkb1r/pp1pp1pp/2p2p1n/8/3N4/4P3/PPPP1PPP/RNBQKB1R w KQkq -");
annotate_move(&dummy,"d1h5","?!");

dummy.set_from_fen("rnb1kbnr/pppp1ppp/4p3/8/2PP3q/6P1/PP2PP1P/RNBQKBNR b KQkq -");
annotate_move(&dummy,"h4e4","!!");

dummy.set_from_fen("r1b1kb1r/pppp2pp/2n1pn2/5p2/8/2P1PP2/PP1P2PP/RNB1KBNR b KQkq -");
annotate_move(&dummy,"f8d6","?!");

dummy.set_from_fen("rnbqkb1r/ppppp1pp/5p1n/8/6P1/2N2N2/PPPPPP1P/R1BQKB1R b KQkq g3");
annotate_move(&dummy,"c7c6","?!");

dummy.set_from_fen("r1bqkbnr/ppppp1pp/5p2/8/8/4P3/PPPP1PPP/RNBQKB1R w KQkq -");
annotate_move(&dummy,"d1h5","!!");

dummy.set_from_fen("rn1qkbnr/ppp3pp/5p2/3p4/6bN/5P2/PPP1P1PP/RNBQKB1R b KQkq -");
annotate_move(&dummy,"d5d4","!");

dummy.set_from_fen("rnbqkbnr/ppppp1pp/5p2/8/8/4PN2/PPPP1PPP/RNBQKB1R b KQkq -");
annotate_move(&dummy,"d7d5","?!");

dummy.set_from_fen("rnbqkbnr/ppppp1pp/5p2/8/8/4PN2/PPPP1PPP/RNBQKB1R b KQkq -");
annotate_move(&dummy,"d7d6","?!");

dummy.set_from_fen("rnbqkbnr/ppppp1pp/5p2/8/8/4PN2/PPPP1PPP/RNBQKB1R b KQkq -");
annotate_move(&dummy,"e7e6","-");

dummy.set_from_fen("rnbqkbnr/ppppp1pp/5p2/8/8/4PN2/PPPP1PPP/RNBQKB1R b KQkq -");
annotate_move(&dummy,"b8c6","??");

dummy.set_from_fen("rnbqkbnr/ppppp1pp/5p2/8/8/4PN2/PPPP1PPP/RNBQKB1R b KQkq -");
annotate_move(&dummy,"g8h6","??");

dummy.set_from_fen("rnbqkbnr/ppppp1pp/5p2/8/8/4PN2/PPPP1PPP/RNBQKB1R b KQkq -");
annotate_move(&dummy,"b7b5","??");

dummy.set_from_fen("rnq1kbnr/pp2pN1p/2p2pp1/1B1p4/6b1/4PQ2/PPPP1PPP/RNB1K2R w KQkq -");
annotate_move(&dummy,"f3f4","?!");

dummy.set_from_fen("rnb1kb1r/pp1p1ppp/2p1pq1n/8/2B1P1P1/5N2/PPPP1P1P/RNBQK2R b KQkq g3");
annotate_move(&dummy,"f6f4","-");

dummy.set_from_fen("r3kb1r/pp1p1ppp/4pn2/8/3P4/8/PPP1PPPP/RN1QKBNR b KQkq -");
annotate_move(&dummy,"f6g4","!!");

dummy.set_from_fen("rnbqkbnr/ppp1p2p/6p1/3p3Q/8/4P3/PPPP1PPP/RNB1KB1R w KQkq -");
annotate_move(&dummy,"h5e5","!?");

dummy.set_from_fen("rnbqkbnr/pppp2pp/5p2/4p3/4P3/5N1P/PPPP1PP1/RNBQKB1R b KQkq e3");
annotate_move(&dummy,"g8h6","?!");

dummy.set_from_fen("rn1qk1nr/ppp3pp/5p2/8/1b1p2bN/3Q1P2/PPP1P1PP/RNBK1B1R b kq -");
annotate_move(&dummy,"b4d2","!!");

dummy.set_from_fen("rn1qkbnr/ppp1p1pp/5p2/3pN3/6b1/4P3/PPPP1PPP/RNBQKB1R w KQkq -");
annotate_move(&dummy,"d1f3","?!");

dummy.set_from_fen("r2qkb1r/ppp3pp/2n2p2/1B2p3/3pP3/2PP4/PP3P1P/RN1QK1R1 b Qkq -");
annotate_move(&dummy,"f6f5","?!");

dummy.set_from_fen("rnb1kbnr/pppp1ppp/4p3/8/2PPq3/4P1P1/PP3P1P/RNBQKBNR b KQkq -");
annotate_move(&dummy,"f8b4","!!");

dummy.set_from_fen("r4b1r/ppk1p2p/4b1p1/1B1n2B1/3P4/1P3P2/P1P3PP/RN2K2R w KQ -");
annotate_move(&dummy,"b5c6","!");

dummy.set_from_fen("2k3nr/1p5p/p5p1/3p4/8/1P2P3/P1PP1PPP/4KB1R w KQ -");
annotate_move(&dummy,"f1e2","?!");

dummy.set_from_fen("rnbqkbnr/pppp2pp/8/4ppN1/8/8/PPPPPPPP/RNBQKB1R w KQkq f6");
annotate_move(&dummy,"h2h4","?!");

dummy.set_from_fen("rnbqkbnr/pppp2pp/8/4ppN1/8/8/PPPPPPPP/RNBQKB1R w KQkq f6");
annotate_move(&dummy,"g2g3","-");

dummy.set_from_fen("rnbqkbnr/pppp2pp/8/4ppN1/8/8/PPPPPPPP/RNBQKB1R w KQkq f6");
annotate_move(&dummy,"d2d4","!?");

dummy.set_from_fen("r1bqkb2/pp4p1/n1p5/1B1p4/4Pp2/P7/1PP2PPP/RNBQK2R w KQkq -");
annotate_move(&dummy,"d1h5","!!");

dummy.set_from_fen("r1bqkbnr/pppp2pp/2n1pp2/8/3PP3/P4N2/1PP2PPP/RNBQKB1R b KQkq -");
annotate_move(&dummy,"g8h6","!?");

dummy.set_from_fen("r1b1kb2/pppp4/4p1p1/5p2/1P1P4/4P1P1/P1P2P2/RNB2K2 b kq d3");
annotate_move(&dummy,"b7b6","?!");

dummy.set_from_fen("rnbqkbnr/pp1p2pp/2p1pp2/8/3N4/4P3/PPPP1PPP/RNBQKB1R w KQkq -");
annotate_move(&dummy,"d4b5","?!");

dummy.set_from_fen("rnbqkb1r/pppppppp/7n/3N4/8/8/PPPPPPPP/R1BQKBNR b KQkq -");
annotate_move(&dummy,"e7e6","?!");

dummy.set_from_fen("rnb1kbnr/pppp1ppp/4p3/3P4/7q/6P1/PPP1PP1P/RNBQKBNR b KQkq -");
annotate_move(&dummy,"h4c4","!");

dummy.set_from_fen("rnbqkbnr/ppppp1pp/8/4Np2/8/8/PPPPPPPP/RNBQKB1R b KQkq -");
annotate_move(&dummy,"d7d5","??");

dummy.set_from_fen("rnbqkbnr/pppp2pp/8/4p3/8/4P3/PPPP1PPP/RNBQKB1R w KQkq -");
annotate_move(&dummy,"d1g4","!!");

dummy.set_from_fen("rnbqkbnr/ppppp2p/5p2/6p1/8/4PN2/PPPP1PPP/RNBQKB1R w KQkq g6");
annotate_move(&dummy,"f3e5","!!");

dummy.set_from_fen("rnbqk2r/1pp4p/p3ppp1/3p4/3PP1Q1/P1N5/1PP2PPP/R3KB1R b KQkq -");
annotate_move(&dummy,"e8g8","?!");

dummy.set_from_fen("rnbqkb1r/pp1pp1pp/2p5/8/4PPn1/2N4P/PPPP2P1/R1BQKB1R b KQkq -");
annotate_move(&dummy,"g7g6","?!");

dummy.set_from_fen("rnbqkb1r/pp4p1/2p2p2/3pp2p/8/BPN1P1P1/P1PP1P2/R2QKB1R b KQkq -");
annotate_move(&dummy,"f8b4","?!");

dummy.set_from_fen("rnbqkb1r/ppp3pp/5p2/3pp3/3PP3/N4N2/PPP2PPP/R2QKB1R b KQkq -");
annotate_move(&dummy,"a7a6","?!");

dummy.set_from_fen("3qkb1r/p2p2pp/2p1pp1n/8/6P1/2P5/PP1PPPBP/RNB1K2R b KQkq -");
annotate_move(&dummy,"d8b8","?!");

dummy.set_from_fen("r1bqkb1r/pppp2pp/2n1pp2/8/3PP3/P7/1PP2PP1/RNBQKB1R b KQkq -");
annotate_move(&dummy,"h7h5","!?");

dummy.set_from_fen("r1bqkb1r/pppp2pp/2n1p3/4P2Q/5P2/2P5/PP1P1nPP/RNB1KB1R b KQkq -");
annotate_move(&dummy,"g7g6","?!");

dummy.set_from_fen("rnbqk1nr/pppp2pp/8/4ppN1/1b1P3P/8/PPP1PPP1/RNBQKB1R w KQkq -");
annotate_move(&dummy,"c2c3","-");

dummy.set_from_fen("r1bqkb1r/pp1pp2p/2n2np1/1B6/8/4PQ2/PPPP1PPP/R1B1K2R w KQkq -");
annotate_move(&dummy,"f3d5","!!");

dummy.set_from_fen("2kr4/p1pp4/bp2p1p1/1P3p2/P2PP3/6P1/2P1KP2/RN6 b - -");
annotate_move(&dummy,"d8h8","-");

dummy.set_from_fen("rnbqkb1r/ppppp1pp/7n/8/8/4P3/PPPP1PPP/RNBQKB1R w KQkq -");
annotate_move(&dummy,"d1h5","!!");

dummy.set_from_fen("r4rk1/p3p2p/4b1pb/1p1p4/3P4/4P3/PPP1B1PP/RNB1K2R w KQ -");
annotate_move(&dummy,"e2f3","?!");

dummy.set_from_fen("rnbqkb1r/pp1pp1pp/2p2p1n/8/3N2P1/8/PPPPPP1P/RNBQKB1R w KQkq -");
annotate_move(&dummy,"c2c4","??");

dummy.set_from_fen("r1bq1k1r/p1Np2p1/1ppbpp2/7p/3PP3/2P5/PP4PP/R1BQK2R w KQ -");
annotate_move(&dummy,"e4e5","?!");

dummy.set_from_fen("rnbqkbnr/pp1pp2p/5pp1/8/8/4PN2/PPPP1PPP/R1BQKB1R w KQkq -");
annotate_move(&dummy,"f3e5","!");

dummy.set_from_fen("rn1qkb1r/ppp1p2p/6p1/3p4/8/8/PPPP1P1P/RNBQK2R b KQkq -");
annotate_move(&dummy,"f8h6","?!");

dummy.set_from_fen("r1bqkb1r/ppppp1pp/5p1n/8/3P2P1/2P5/PP2PP1P/RNBQKB1R b KQkq d3");
annotate_move(&dummy,"b7b6","?");

dummy.set_from_fen("r1b1kbnr/pppp2pp/4p3/4np1Q/1P6/4P1P1/P1PP1P1P/RNB1K2R b KQkq -");
annotate_move(&dummy,"g7g6","-");

dummy.set_from_fen("r3k3/p1pp4/bp2p1p1/1P3p2/P2PP3/6P1/2P2P2/RN3K2 b kq -");
annotate_move(&dummy,"e8c8","-");

dummy.set_from_fen("rnbqkb1r/ppppp1pp/5p1n/8/3N4/8/PPPPPPPP/RNBQKB1R w KQkq -");
annotate_move(&dummy,"d4b5","??");

dummy.set_from_fen("r1bqkbnr/1p1p3p/4ppp1/8/8/4P3/PPPP1PPP/RNB1KB1R w KQkq -");
annotate_move(&dummy,"f1b5","?!");

dummy.set_from_fen("r1bq1k1r/ppNp2p1/2pbpp2/7p/3PP3/2P5/PP4PP/R1BQK2R b KQ -");
annotate_move(&dummy,"d6f4","?!");

dummy.set_from_fen("r1bq1k1r/ppNp2p1/2pbpp2/7p/3PP3/2P5/PP4PP/R1BQK2R b KQ -");
annotate_move(&dummy,"b7b6","?!");

dummy.set_from_fen("r1b2rk1/p1pp1p1p/1p2pnpb/8/4PPP1/7P/PP1P4/RNB1K1NR b KQ -");
annotate_move(&dummy,"c8a6","?!");

dummy.set_from_fen("rnbqk2r/pppp2pp/4pp2/8/1b1P4/2P1P3/PP3PP1/RNBQKB1R b KQkq -");
annotate_move(&dummy,"g7g6","?!");

dummy.set_from_fen("r3kbnr/pp2p2p/4b1p1/3p4/8/4P3/PPPP1PPP/RNB1KB1R b KQkq -");
annotate_move(&dummy,"b7b5","?!");

dummy.set_from_fen("r1bqkbnr/ppp4p/4ppp1/1N1p4/3Q4/4P3/PP1P1PPP/R3KB1R w KQkq d6");
annotate_move(&dummy,"b5c7","?!");

dummy.set_from_fen("rnbqkbnr/ppp1p1pp/5p2/3pP3/8/5N2/PPPP1PPP/RNBQKB1R b KQkq -");
annotate_move(&dummy,"g8h6","?!");

dummy.set_from_fen("rn1qk2r/pp4pp/2p2p1n/4p3/3P2P1/2P5/P4P1P/3QKB1R b KQkq -");
annotate_move(&dummy,"d8b6","?");

dummy.set_from_fen("rnb1kb1r/pppp1ppp/4p2n/3N4/7q/5PP1/PPPPP2P/R1BQKBNR b KQkq -");
annotate_move(&dummy,"h4d4","!!");

dummy.set_from_fen("rnbqk2r/pppp2p1/4pp2/3P3p/8/4P3/PP3PP1/RNBQKB1R b KQkq -");
annotate_move(&dummy,"c7c5","?!");

dummy.set_from_fen("rnbqkbnr/pppp2pp/4pp2/8/3N4/4P3/PPPP1PPP/RNBQKB1R b KQkq -");
annotate_move(&dummy,"f6f5","-");

dummy.set_from_fen("rnbqkbnr/pppp2pp/8/4p1N1/3P1p2/8/PPP1PPPP/RNBQKB1R w KQkq -");
annotate_move(&dummy,"e2e4","?!");

dummy.set_from_fen("rnbqk2r/pppp2pp/4pp2/2bN4/6n1/2P1PP1N/PP1P2PP/R1BQKB1R b KQkq -");
annotate_move(&dummy,"b7b5","?");

dummy.set_from_fen("rnbqk2r/pppp2pp/4pp2/2bN4/6n1/2P1PP1N/PP1P2PP/R1BQKB1R b KQkq -");
annotate_move(&dummy,"e8g8","?");

dummy.set_from_fen("rnbqk2r/pppp2pp/4pp2/2bN4/6n1/2P1PP1N/PP1P2PP/R1BQKB1R b KQkq -");
annotate_move(&dummy,"c7c6","?!");

dummy.set_from_fen("rnb1kbnr/p1pp2pp/4p3/1p3pN1/7q/4P1Q1/PPPP1PPP/RNB1KB1R b KQkq -");
annotate_move(&dummy,"c8b7","!");

dummy.set_from_fen("rnbqkbnr/ppppp1pp/5p2/8/8/2N4N/PPPPPPPP/R1BQKB1R b KQkq -");
annotate_move(&dummy,"g8h6","?!");

dummy.set_from_fen("rnbqkbnr/ppppp1pp/5p2/8/8/2N4N/PPPPPPPP/R1BQKB1R b KQkq -");
annotate_move(&dummy,"c7c6","-");

dummy.set_from_fen("rnq1k1nr/pp4pp/2p2p2/1B1pp3/5Qb1/4P3/PPPP1PPP/RNB1K2R w KQkq -");
annotate_move(&dummy,"b5a6","?!");

dummy.set_from_fen("rnbqkbnr/pppppppp/8/8/8/6P1/PPPPPP1P/RNBQKBNR b KQkq -");
annotate_move(&dummy,"g8f6","?!");

dummy.set_from_fen("rn1qkbnr/ppp1p2p/5pp1/3pN3/6b1/4PQ2/PPPP1PPP/RNB1KB1R w KQkq -");
annotate_move(&dummy,"e5f7","?!");

dummy.set_from_fen("r1bqkb1r/ppppp1pp/5p1n/1N6/3nP1P1/8/PPPP1P1P/RNBQKB1R b KQkq e3");
annotate_move(&dummy,"d4c2","?!");

dummy.set_from_fen("rnbqkbnr/ppp1pppp/3p4/8/8/5N2/PPPPPPPP/RNBQKB1R w KQkq -");
annotate_move(&dummy,"f3g5","!");

dummy.set_from_fen("r1bqkbnr/ppppp1pp/2n2p2/8/8/4PN2/PPPP1PPP/RNBQKB1R w KQkq -");
annotate_move(&dummy,"f3e5","!!");

dummy.set_from_fen("rnbqkb1r/ppppp1pp/5p1n/8/8/2N2N2/PPPPPPPP/R1BQKB1R w KQkq -");
annotate_move(&dummy,"e2e4","??");

dummy.set_from_fen("rnbqkbnr/pppp2pp/4p3/5p2/3N4/4P1P1/PPPP1P1P/RNBQKB1R b KQkq -");
annotate_move(&dummy,"f8b4","!?");

dummy.set_from_fen("rnb1k1nr/pppp1ppp/4pq2/8/1bB1P3/2P2N2/PP1P1PPP/RNBQK2R b KQkq -");
annotate_move(&dummy,"b4c3","?!");

dummy.set_from_fen("rn2kbnr/ppp1p1pp/3q1p2/3pN3/6b1/4PQ2/PPPP1PPP/RNB1KB1R w KQkq -");
annotate_move(&dummy,"f1b5","?!");

dummy.set_from_fen("rnbqk2r/pp1p2pp/2p2p1n/4p3/6PP/8/P1PPPP2/RNBQKB1R b KQkq h3");
annotate_move(&dummy,"b8a6","?!");

dummy.set_from_fen("r1b1kb1r/p1pp1p1p/1pn1pnp1/1B6/4P3/2P4P/PP1P1PP1/RNB1K1NR b KQkq -");
annotate_move(&dummy,"f8h6","?!");

dummy.set_from_fen("r3kb1r/pp1p1ppp/4p3/8/3P2n1/5P2/PPP1P1PP/RN1QKBNR b KQkq -");
annotate_move(&dummy,"g4e3","!!");

dummy.set_from_fen("rnbqkbnr/1ppp2pp/p3pp2/8/3N4/4P3/PPPP1PPP/RNBQKB1R w KQkq -");
annotate_move(&dummy,"d4f5","!?");

dummy.set_from_fen("rnbqkbnr/ppppp1pp/5p2/8/4P3/5N2/PPPP1PPP/RNBQKB1R b KQkq e3");
annotate_move(&dummy,"d7d5","-");

dummy.set_from_fen("rnbqkbnr/ppppp1pp/5p2/8/4P3/5N2/PPPP1PPP/RNBQKB1R b KQkq e3");
annotate_move(&dummy,"e7e6","?!");

dummy.set_from_fen("rnbqkbnr/pppp2pp/4pp2/8/3P4/4PN2/PPP2PPP/RNBQKB1R b KQkq d3");
annotate_move(&dummy,"f8b4","?!");

dummy.set_from_fen("rnbqk2r/ppNp2p1/2p1pp2/2b4p/8/2P1P3/PP1P2PP/R1BQKB1R b KQkq -");
annotate_move(&dummy,"e8f8","?!");

dummy.set_from_fen("rnbqk2r/ppNp2p1/2p1pp2/2b4p/8/2P1P3/PP1P2PP/R1BQKB1R b KQkq -");
annotate_move(&dummy,"e8f7","??");

dummy.set_from_fen("rnbqkbnr/ppp1p1pp/8/3p4/8/4P3/PPPP1PPP/RNBQKB1R w KQkq -");
annotate_move(&dummy,"d1h5","!?");

dummy.set_from_fen("r2k1b1r/pp5p/4pnp1/1B6/3p4/4PP2/PPPP2PP/RNB1K2R w KQ -");
annotate_move(&dummy,"b5d7","?!");

dummy.set_from_fen("r1bqkbnr/pppp2pp/2n1pp2/1B6/3PP3/5N2/PPP2PPP/RNBQK2R b KQkq -");
annotate_move(&dummy,"f8b4","?!");

dummy.set_from_fen("rnbqkbnr/pp1pp2p/6p1/8/8/4P3/PPPP1PPP/R1BQKB1R w KQkq -");
annotate_move(&dummy,"f1b5","!!");

dummy.set_from_fen("2r1kbnr/pp2p2p/4b1p1/3p4/8/4P3/PPPP1PPP/RNB1KB1R w KQk -");
annotate_move(&dummy,"f1b5","?!");

dummy.set_from_fen("rnbqkbnr/pppp1ppp/4p3/7Q/4P3/8/PPPP1PPP/RNB1KBNR b KQkq -");
annotate_move(&dummy,"g7g6","?!");

dummy.set_from_fen("rnb1kbnr/pp1p2pp/2p1pp2/qN6/8/4P3/PPPP1PPP/RNBQKB1R w KQkq -");
annotate_move(&dummy,"b2b4","!?");

dummy.set_from_fen("r1bqkb2/pp6/n1p3p1/1B1p3Q/4Pp2/P7/1PP2PPP/RNB1K2R w KQkq -");
annotate_move(&dummy,"h5h8","!!");

dummy.set_from_fen("rnbqkb1r/ppppp1pp/7n/8/4P3/2N5/PPPP1PPP/R1BQKB1R b KQkq e3");
annotate_move(&dummy,"h6g4","?!");

dummy.set_from_fen("r3kb1r/pp5p/4pnp1/3p4/8/4P3/PPPP1PPP/RNB1KB1R w KQkq -");
annotate_move(&dummy,"f1b5","-");

dummy.set_from_fen("r1bqkbnr/pppp3p/4ppp1/1N6/7Q/4P3/PP1P1PPP/R3KB1R w KQkq -");
annotate_move(&dummy,"h4d4","?!");

dummy.set_from_fen("r1b1kb2/p1pp4/1p2p1p1/5p2/1P1PP3/6P1/P1P2P2/RNB2K2 b kq -");
annotate_move(&dummy,"f8h6","?!");

dummy.set_from_fen("r1bqkbnr/ppppp1pp/2n5/8/8/4P3/PPPP1PPP/RNBQKB1R w KQkq -");
annotate_move(&dummy,"d1h5","!!");

dummy.set_from_fen("rnbqk1nr/pppp2pp/8/2b1ppN1/7P/8/PPPPPPP1/RNBQKB1R w KQkq -");
annotate_move(&dummy,"d2d4","?!");

dummy.set_from_fen("r3kbnr/1p2p2p/p3b1p1/3p4/8/4P3/PPPP1PPP/RNB1KB1R w KQkq -");
annotate_move(&dummy,"b2b3","?!");

dummy.set_from_fen("rnbqkbnr/pp2p1pp/2pp1p2/8/3N4/4P3/PPPP1PPP/RNBQKB1R w KQkq -");
annotate_move(&dummy,"d4b5","?!");

dummy.set_from_fen("rnbqkb1r/pp1p2pp/2p2p1n/4p3/3N2P1/1QP5/PP1PPP1P/RNB1KB1R b KQkq -");
annotate_move(&dummy,"d7d5","?!");

dummy.set_from_fen("rnb1kb1r/pppp1p1p/4pnp1/8/4P3/7P/PPPP1PP1/RNB1KBNR b KQkq -");
annotate_move(&dummy,"b8c6","?!");

dummy.set_from_fen("r1bqkbnr/ppp3pp/n7/3pp1N1/3PPp2/P7/1PP2PPP/RNBQKB1R w KQkq -");
annotate_move(&dummy,"g5h7","?!");

dummy.set_from_fen("rnbqkb1r/pppp1ppp/4p2n/8/6PP/2N5/PPPPPP2/R1BQKBNR b KQkq h3");
annotate_move(&dummy,"d8f6","!");

dummy.set_from_fen("rnbqkb1r/pp4pp/2p1Np1n/3pp3/6P1/1QP5/PP1PPP1P/RNB1KB1R b KQkq -");
annotate_move(&dummy,"c8e6","-");

dummy.set_from_fen("rnbqkbnr/pp1p2pp/4pp2/7Q/8/4P3/PPPP1PPP/RNB1KB1R b KQkq -");
annotate_move(&dummy,"g7g6","?!");

dummy.set_from_fen("rnbqkb1r/ppppp1pp/5p1n/3N4/8/7N/PPPPPPPP/R1BQKB1R b KQkq -");
annotate_move(&dummy,"e7e6","?!");

dummy.set_from_fen("r1bqkbnr/ppp1p2p/2np2p1/3Q4/8/4P3/PPPP1PPP/RNB1KB1R w KQkq -");
annotate_move(&dummy,"d5f7","!!");


	save_annotated_move=true;

	save_anno_book();

}