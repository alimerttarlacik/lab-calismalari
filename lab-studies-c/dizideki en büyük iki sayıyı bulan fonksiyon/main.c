#include <stdio.h>

void enBuyukIkiSayiyiBul(int dizi[], int boyut);

int main() {
    int dizi[10];

    printf("Lütfen 10 elemanlý tam sayý dizisini girin:\n");

    for (int i = 0; i < 10; ++i) {
        printf("Eleman %d: ", i + 1);
        scanf("%d", &dizi[i]);
    }

    enBuyukIkiSayiyiBul(dizi, 10);

    return 0;
}

void enBuyukIkiSayiyiBul(int dizi[], int boyut) {
    int enBuyuk1 = dizi[0];
    int enBuyuk2 = dizi[1];

    if (enBuyuk1 < enBuyuk2) {
        int gecici = enBuyuk1;
        enBuyuk1 = enBuyuk2;
        enBuyuk2 = gecici;
    }

    for (int i = 2; i < boyut; ++i) {
        if (dizi[i] > enBuyuk1) {
            enBuyuk2 = enBuyuk1;
            enBuyuk1 = dizi[i];
        } else if (dizi[i] > enBuyuk2 && dizi[i] != enBuyuk1) {
            enBuyuk2 = dizi[i];
        }
    }

    printf("En büyük iki sayý: %d ve %d\n", enBuyuk1, enBuyuk2);
}
