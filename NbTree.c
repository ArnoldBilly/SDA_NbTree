#include <stdio.h>
#include <stdlib.h>
#include "NbTree.h"

void Create_tree(Isi_Tree X, int Jml_Node) {
    // Node ke-1
    X[0].info = 'A';
    X[0].FirstSon = 1;
    X[0].NextBrother = nil;
    X[0].Parents = nil;

    // Node ke-2
    X[1].info = 'B';
    X[1].FirstSon = 3;
    X[1].NextBrother = 2;
    X[1].Parents = 0;

    // Node ke-3
    X[2].info = 'C';
    X[2].FirstSon = 5;
    X[2].NextBrother = nil;
    X[2].Parents = 0;

    // Node ke-4
    X[3].info = 'D';
    X[3].FirstSon = nil;
    X[3].NextBrother = 4;
    X[3].Parents = 1;

    // Node ke-5
    X[4].info = 'E';
    X[4].FirstSon = 8;
    X[4].NextBrother = nil;
    X[4].Parents = 1;

    // Node ke-6
    X[5].info = 'F';
    X[5].FirstSon = nil;
    X[5].NextBrother = 6;
    X[5].Parents = 2;

    // Node ke-7
    X[6].info = 'G';
    X[6].FirstSon = nil;
    X[6].NextBrother = 7;
    X[6].Parents = 2;

    // Node ke-8
    X[7].info = 'H';
    X[7].FirstSon = nil;
    X[7].NextBrother = nil;
    X[7].Parents = 2;

    // Node ke-9
    X[8].info = 'I';
    X[8].FirstSon = nil;
    X[8].NextBrother = 9;
    X[8].Parents = 4;

    // Node ke-10
    X[9].info = 'J';
    X[9].FirstSon = nil;
    X[9].NextBrother = nil;
    X[9].Parents = 4;
}


boolean IsEmpty (Isi_Tree P) {
    return P[0].info == '\0';
}

void PreOrder (Isi_Tree P) {
    static int index = 0;
    if (P[index].info == '\0') return;
    printf("%c ", P[index].info);
    int current = index;
    if (P[current].FirstSon != nil) {
        index = P[current].FirstSon;
        PreOrder(P);
    }
    if (P[current].NextBrother != nil) {
        index = P[current].NextBrother;
        PreOrder(P);
    }
    if (current == 0) index = 0;
}

void InOrder (Isi_Tree P) {
    static int index = 0;
    if (P[index].info == '\0') return;

    int current = index;

    if (P[current].FirstSon != nil) {
        index = P[current].FirstSon;
        PostOrder(P);
    }

    if (P[current].NextBrother != nil) {
        index = P[current].NextBrother;
        PostOrder(P);
    }

    printf("%c ", P[current].info);

    if (current == 0) index = 0;
}

void PostOrder (Isi_Tree P) {
    static int index = 0;
    if (P[index].info == '\0') return;

    int current = index;

    // Kunjungi anak pertama (jika ada)
    if (P[current].FirstSon != nil) {
        index = P[current].FirstSon;
        InOrder(P);
    }

    // Visit node sekarang
    printf("%c ", P[current].info);

    // Kunjungi saudara dari anak pertama (jika ada)
    if (P[current].FirstSon != nil) {
        int sibling = P[P[current].FirstSon].NextBrother;
        while (sibling != nil) {
            index = sibling;
            InOrder(P);
            sibling = P[sibling].NextBrother;
        }
    }

    // Kunjungi saudara dari current
    if (P[current].NextBrother != nil) {
        index = P[current].NextBrother;
        InOrder(P);
    }

    if (current == 0) index = 0;
}

void Level_order(Isi_Tree X, int Maks_node) {

}

void PrintTree (Isi_Tree P) {

}

boolean Search (Isi_Tree P, infotype X) {

}

int nbElmt (Isi_Tree P) {

}

int nbDaun (Isi_Tree P) {

}

int Level (Isi_Tree P, infotype X) {

}

int Depth (Isi_Tree P) {

}

int Max (infotype Data1, infotype Data2) {

}