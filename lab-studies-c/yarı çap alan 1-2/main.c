#include <stdio.h>

int main() {
    int yaricap, cap, alan, secim;

    printf("Yar��ap� Girin: ");
    scanf("%d", &yaricap);

    printf("1: �ap� Hesapla\n2: Alan� Hesapla\nSe�iminizi Girin (1 veya 2): ");
    scanf("%d", &secim);

    if (secim == 1) {
        cap = 2 * yaricap;
        printf("�ap: %d\n", cap);
    } else if (secim == 2) {
        alan = 3.14 * yaricap * yaricap;
        printf("Alan: %d\n", alan);
    } else {
        printf("Ge�ersiz se�im. L�tfen 1 veya 2 girin.\n");
    }

    return 0;
}
