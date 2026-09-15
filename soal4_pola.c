#include <stdio.h>

int main() {
    int jumlahBintang[] = {5, 4, 3, 2, 1};
    int angkaKiri[] = {7, 15, 27, 42, 59};
    int angkaKanan[] = {10, 18, 24, 28, 30};

    printf("Soal 4 - Pola Bintang dan Angka\n");

    for (int baris = 0; baris < 5; baris++) {
        for (int i = 0; i < jumlahBintang[baris]; i++) {
            printf("*");
        }

        printf("%d %d\n", angkaKiri[baris], angkaKanan[baris]);
    }

    return 0;
}
