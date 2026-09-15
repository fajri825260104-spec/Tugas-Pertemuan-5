#include <stdio.h>

int main() {
    int angka = 1;

    printf("Bonus - Pola Angka Zig-Zag\n\n");

    for (int baris = 1; baris <= 4; baris++) {
        if (baris % 2 == 1) {
            // Baris ganjil: angka dari kiri ke kanan
            for (int kolom = 1; kolom <= 5; kolom++) {
                printf("%-3d", angka);
                angka++;
            }
        } else {
            // Baris genap: angka dari kanan ke kiri
            int awal = angka + 4;
            for (int kolom = 1; kolom <= 5; kolom++) {
                printf("%-3d", awal);
                awal--;
            }
            angka += 5;
        }

        printf("\n");
    }

    return 0;
}
