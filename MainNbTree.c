#include "NbTree.c"

int main() {
    Isi_Tree tree;
    char A = 'F';
    Create_tree(tree, 10);

    // PreOrder //
    printf("PreOrder   : ");
    PreOrder(tree);
    printf("\n");
    // InOrder //
    printf("InOrder    : ");
    InOrder(tree);
    printf("\n");
    // PostOrder //
    printf("PostOrder  : ");
    PostOrder(tree);
    // Level-order //
    printf("Level Order: ");
    Level_order(tree, 10);
    printf("\n");

    printf("\nTree:\n");
    PrintTree(tree);
    printf("\n");
    printf("Search '%c' : ", A);
    if (Search(tree, A)) {
        printf(" (Found)\n");
    } else {
        printf(" (Not Found)\n");
    }
    printf("Jumlah Elemen: %d\n", nbElmt(tree));
    printf("Jumlah Daun  : %d\n", nbDaun(tree));
    printf("Level dari '%c': %d\n", A, Level(tree, A));
    printf("Depth pohon  : %d\n", Depth(tree));

    return 0;
}