#include <stdio.h>

int main() {
    int sayi;
    int basamaklar[5];

    printf("Maksimum 5 basamaklý bir sayý girin: ");
    scanf("%d", &sayi);

    if (sayi >= 10000 && sayi <= 99999) {
        for (int i = 0; i < 5; ++i) {
            basamaklar[i] = sayi % 10;
            sayi /= 10;
        }

        printf("Sayýnýn basamaklarý: ");
        for (int i = 4; i >= 0; --i) {
            printf("%d ", basamaklar[i]);
        }
        printf("\n");
    } else {
        printf("Girilen sayý 5 basamaklý deðil!\n");
    }

    return 0;
}
