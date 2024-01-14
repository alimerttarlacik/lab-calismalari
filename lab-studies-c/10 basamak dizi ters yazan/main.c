#include <stdio.h>

int main() {
    int dizi[10];

    printf("Lütfen 10 elemanlý bir dizi girin:\n");

    for (int i = 0; i < 10; ++i) {
        printf("Eleman %d: ", i + 1);
        scanf("%d", &dizi[i]);
    }

    printf("Dizinin ters hali: ");
    for (int i = 9; i >= 0; --i) {
        printf("%d ", dizi[i]);
    }
    printf("\n");

    return 0;
}




