#include <stdio.h>

int main() {
    int ogrenciNo;
    float vizeNotu, finalNotu, sonNot;

    printf("��renci Numaras�n� Girin: ");
    scanf("%d", &ogrenciNo);

    printf("Vize Notunu Girin: ");
    scanf("%f", &vizeNotu);

    printf("Final Notunu Girin: ");
    scanf("%f", &finalNotu);

    sonNot = 0.4 * vizeNotu + 0.6 * finalNotu;

    printf("��renci No: %d\n", ogrenciNo);
    printf("Son Not: %.2f\n", sonNot);

    return 0;
}
