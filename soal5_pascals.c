#include <stdio.h>

int main() {
    int n = 5;

    printf("Soal 5 - Segitiga Pascal\n");

    for (int i = 0; i < n; i++) {
        for (int spasi = 0; spasi < n - i - 1; spasi++) {
            printf("  ");
        }

        int angka = 1;

        for (int j = 0; j <= i; j++) {
            printf("%d   ", angka);

            angka = angka * (i - j) / (j + 1);
        }

        printf("\n");
    }

    return 0;
}
