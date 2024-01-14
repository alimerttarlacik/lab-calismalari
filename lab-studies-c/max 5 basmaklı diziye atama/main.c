#include <stdio.h>

int main() {
    int sayi;
    int basamaklar[5];

    printf("Maksimum 5 basamakl� bir say� girin: ");
    scanf("%d", &sayi);

    if (sayi >= 10000 && sayi <= 99999) {
        for (int i = 0; i < 5; ++i) {
            basamaklar[i] = sayi % 10;
            sayi /= 10;
        }

        printf("Say�n�n basamaklar�: ");
        for (int i = 4; i >= 0; --i) {
            printf("%d ", basamaklar[i]);
        }
        printf("\n");
    } else {
        printf("Girilen say� 5 basamakl� de�il!\n");
    }

    return 0;
}
