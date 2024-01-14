#include <stdio.h>

int main() {
    int sayi, faktoriyel = 1;

    printf("Faktöriyelini hesaplamak istediðiniz sayýyý girin: ");
    scanf("%d", &sayi);

    for (int i = 1; i <= sayi; ++i) {
        faktoriyel *= i;
    }

    printf("Faktöriyel: %d\n", faktoriyel);

    return 0;
}
