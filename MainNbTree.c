#include "NbTree.c"

int main() {
    Isi_Tree tree;
    Create_tree(tree, 10);
    PreOrder(tree);
    printf("\n");
    InOrder(tree);
    printf("\n");
    PostOrder(tree);
    // if (!IsEmpty(tree)){
    //     int i;
    //     scanf("%d", &i);
    //     i = i-1;
    //     printf("Info = %c\n", tree[i].info);
    //     printf("First Son = %d\n", tree[i].FirstSon);
    //     printf("Next Brother = %d\n", tree[i].NextBrother);
    //     printf("Parents = %d\n", tree[i].Parents);
    // }
}