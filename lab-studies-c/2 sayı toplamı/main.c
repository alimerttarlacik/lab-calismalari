#include <stdio.h>

int main() {
    int sayi1, sayi2;

    printf("Birinci tam say�y� girin: ");
    scanf("%d", &sayi1);

    printf("�kinci tam say�y� girin: ");
    scanf("%d", &sayi2);

    int toplam = sayi1 + sayi2;

    printf("Toplam: %d\n", toplam);

    return 0;
}
