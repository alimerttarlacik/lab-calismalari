#include <stdio.h>

int main() {
    int sayi1, sayi2, sayi3, enBuyuk;

    printf("Birinci sayýyý girin: ");
    scanf("%d", &sayi1);

    printf("Ýkinci sayýyý girin: ");
    scanf("%d", &sayi2);

    printf("Üçüncü sayýyý girin: ");
    scanf("%d", &sayi3);

    enBuyuk = sayi1;

    if (sayi2 > enBuyuk) {
        enBuyuk = sayi2;
    }

    if (sayi3 > enBuyuk) {
        enBuyuk = sayi3;
    }

    printf("En büyük sayý: %d\n", enBuyuk);

    return 0;
}
