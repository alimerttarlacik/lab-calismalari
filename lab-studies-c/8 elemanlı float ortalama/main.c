#include <stdio.h>

int main() {
    float dizi[8], toplam = 0, ortalama;

    printf("L�tfen 8 adet float de�er girin:\n");

    for (int i = 0; i < 8; ++i) {
        printf("Eleman %d: ", i + 1);
        scanf("%f", &dizi[i]);

        toplam += dizi[i];
    }

    ortalama = toplam / 8;

    printf("Girilen de�erlerin ortalamas�: %.2f\n", ortalama);

    return 0;
}
