#include "NbTree.c"

int main() {
    Isi_Tree tree;
    char A;
    Create_tree(tree, 10);
    PreOrder(tree);
    printf("\n");
    InOrder(tree);
    printf("\n");
    PostOrder(tree);
    printf("\n");
    Level_order(tree, 4);
    printf("\n");
    PrintTree(tree);
    printf("\n");
    Search(tree, A);
    printf("\n");
    printf("%d", nbElmt(tree));
    printf("\n");
    printf("%d", nbDaun(tree));
    printf("\n");
    printf("%d", Depth(tree));
}