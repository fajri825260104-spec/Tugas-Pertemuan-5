#include <stdio.h>

int main() {
    int jumlahBintang[] = {5, 3, 1, 3, 5};

    printf("Soal 3 - Pola Bintang\n");

    for (int baris = 0; baris < 5; baris++) {
        int spasi = (5 - jumlahBintang[baris]) / 2;

        for (int i = 0; i < spasi; i++) {
            printf(" ");
        }

        for (int i = 0; i < jumlahBintang[baris]; i++) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
