#include <stdio.h>

int main() {
    char huruf = 'A';

    printf("Soal 2 - Pola Huruf\n");

    for (int baris = 1; baris <= 4; baris++) {
        for (int spasi = 1; spasi <= 4 - baris; spasi++) {
            printf("  ");
        }

        for (int kolom = 1; kolom <= baris; kolom++) {
            printf("%c ", huruf);
            huruf++;
        }

        printf("\n");
    }

    return 0;
}
