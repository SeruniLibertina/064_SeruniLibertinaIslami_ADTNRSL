/* File        : mainNRSL.cpp */
/* Deskripsi   : Driver / main program untuk ADT Non Restricted Single Linked List */
/* Dimodifikasi agar sesuai dengan langkah-langkah pada Praktikum 5 */

#include <stdio.h>
#include "spnrsll.h"

int main() {
    List MyList;
    infotype isi;
    address P, Prec;

    // Inisialisasi list kosong
    CreateList(&MyList);

    // Menambahkan elemen ke List
    printf("=== Menambahkan Elemen ke List ===\n");
    InsVFirst(&MyList, 7);    // Insert First (7)
    PrintInfo(MyList);

    InsVLast(&MyList, 11);    // Insert Last (11)
    PrintInfo(MyList);

    P = Alokasi(9);
    if (P != Nil) {
        Prec = Search(MyList, 7);
        InsertAfter(&MyList, P, Prec);  // Insert After (9 setelah 7)
    }
    PrintInfo(MyList);

    InsVFirst(&MyList, 5);    // Insert First (5)
    PrintInfo(MyList);

    InsVLast(&MyList, 13);    // Insert Last (13)
    PrintInfo(MyList);

    // Menghapus elemen dari list
    printf("\n=== Menghapus Elemen ===\n");
    DelVLast(&MyList, &isi);  // Delete Last (hapus 13)
    PrintInfo(MyList);

    DelP(&MyList, 7);         // Delete P (hapus 7)
    PrintInfo(MyList);

    DelVFirst(&MyList, &isi); // Delete First (hapus 5)
    PrintInfo(MyList);

    // Menghapus semua elemen dari List
    DelVFirst(&MyList, &isi);
    DelVFirst(&MyList, &isi);
    PrintInfo(MyList);

    return 0;
}
