#include <stdio.h>

int main() {
    int sayi, faktoriyel = 1;

    printf("Fakt�riyelini hesaplamak istedi�iniz say�y� girin: ");
    scanf("%d", &sayi);

    for (int i = 1; i <= sayi; ++i) {
        faktoriyel *= i;
    }

    printf("Fakt�riyel: %d\n", faktoriyel);

    return 0;
}
