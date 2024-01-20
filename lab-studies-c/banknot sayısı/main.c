#include <stdio.h>

int main() {
    int miktar;

    printf("Lütfen bir para miktarý girin: ");
    scanf("%d", &miktar);

    printf("En az banknotlarla:\n");
    printf("100 TL: %d adet\n", miktar / 100);
    printf("50 TL: %d adet\n", (miktar % 100) / 50);
    printf("20 TL: %d adet\n", ((miktar % 100) % 50) / 20);
    printf("10 TL: %d adet\n", (((miktar % 100) % 50) % 20) / 10);

    return 0;
}
