#include <stdio.h>

void diziyesayieklyenfonk(int dizi[], int *boyut, int yenisayi) {
    int i, j;

    for (i = 0; i < *boyut; i++) {
        if (yenisayi < dizi[i]) {
            break;
        }
    }

    for (j = *boyut; j > i; j--) {
        dizi[j] = dizi[j - 1];
    }

    dizi[i] = yenisayi;
    (*boyut)++;
}

int main() {
    int dizi[100];
    int boyut = 0;
    int yenisayi;

    while (1) {
        printf("Bir sayi girin (Cikmak icin -1): ");
        scanf("%d", &yenisayi);

        if (yenisayi == -1) {
            break;
        }

        diziyesayieklyenfonk(dizi, &boyut, yenisayi);

        printf("Dizi: ");
        for (int i = 0; i < boyut; i++) {
            printf("%d ", dizi[i]);
        }
        printf("\n");
    }

    return 0;
}
