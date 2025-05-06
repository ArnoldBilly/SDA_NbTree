#include <stdio.h>
#include <stdlib.h>
#include "NbTree.h"

// int main() {
//     Isi_Tree tree;
//     char A = 'F';
//     Create_tree(tree, 10);

//     // PreOrder //
//     printf("PreOrder   : ");
//     PreOrder(tree);
//     printf("\n");
//     // InOrder //
//     printf("InOrder    : ");
//     InOrder(tree);
//     printf("\n");
//     // PostOrder //
//     printf("PostOrder  : ");
//     PostOrder(tree);
//     // Level-order //
//     printf("Level Order: ");
//     Level_order(tree, 10);
//     printf("\n");

//     printf("\nTree:\n");
//     PrintTree(tree);
//     printf("\n");
//     printf("Search '%c' : ", A);
//     if (Search(tree, A)) {
//         printf(" (Ditemukan)\n");
//     } else {
//         printf(" (Tidak Ditemukan)\n");
//     }
//     printf("Jumlah Elemen: %d\n", nbElmt(tree));
//     printf("Jumlah Daun  : %d\n", nbDaun(tree));
//     printf("Level dari '%c': %d\n", A, Level(tree, A));
//     printf("Depth pohon  : %d\n", Depth(tree));

//     return 0;
// }


int main() { // Studi Kasus //
    Isi_Tree tree;
    char cari, data1, data2;
    int pilihan;
    Create_tree(tree, 10);

    while (pilihan != 11)
    {
        printf("\n");
        printf("1. Traversal PreOrder\n");
        printf("2. Traversal InOrder\n");
        printf("3. Traversal PostOrder\n");
        printf("4. Traversal Level Order\n");
        printf("5. Print Tree\n");
        printf("6. Search node Tree\n");
        printf("7. Jumlah Daun/Leaf\n");
        printf("8. Mencari Level node Tree\n");
        printf("9. Kedalaman Tree\n");
        printf("10. Membandingkan 2 node Tree\n");
        printf("11. Exit\n");
        printf("Pilih Menu: ");
        scanf("%d", &pilihan);

        switch (pilihan) {
            case 1:
                printf("PreOrder: ");
                PreOrder(tree);
                printf("\n");
                break;
            case 2:
                printf("InOrder: ");
                InOrder(tree);
                printf("\n");
                break;
            case 3:
                printf("PostOrder: ");
                PostOrder(tree);
                printf("\n");
                break;
            case 4:
                printf("Level Order: ");
                Level_order(tree, 10);
                printf("\n");
                break;
            case 5:
                PrintTree(tree);
                break;
            case 6:
                printf("Masukkan node yang dicari: ");
                scanf(" %c", &cari);
                if (Search(tree, cari)) {
                    printf("Node ditemukan.\n");
                } else {
                    printf("Node tidak ditemukan.\n");
                }
                break;
            case 7:
                printf("Jumlah daun: %d\n", nbDaun(tree));
                break;
            case 8:
                printf("Masukkan node untuk dicari level-nya: ");
                scanf(" %c", &cari);
                printf("Level node %c: %d\n", cari, Level(tree, cari));
                break;
            case 9:
                printf("Kedalaman (Depth) Tree: %d\n", Depth(tree));
                break;
            case 10:
                printf("Masukkan 2 node untuk dibandingkan: ");
                scanf(" %c %c", &data1, &data2);
                if (Level(tree, data1) > Level(tree, data2)) {
                    printf("%c lebih dalam dari %c\n", data1, data2);
                } else if (Level(tree, data1) < Level(tree, data2)) {
                    printf("%c lebih dalam dari %c\n", data2, data1);
                } else {
                    printf("%c dan %c berada di level yang sama\n", data1, data2);
                }
                break;
            case 11:
                break;
            default:
                printf("Pilihan tidak valid. Silakan coba lagi.\n");
        }
    }
    
    return 0;
}