#include <stdio.h>

int main() {
    int sayi1, sayi2;

    printf("Birinci tam sayýyý girin: ");
    scanf("%d", &sayi1);

    printf("Ýkinci tam sayýyý girin: ");
    scanf("%d", &sayi2);

    int toplam = sayi1 + sayi2;

    printf("Toplam: %d\n", toplam);

    return 0;
}
