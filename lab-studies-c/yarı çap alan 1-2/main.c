#include <stdio.h>

int main() {
    int yaricap, cap, alan, secim;

    printf("Yarýçapý Girin: ");
    scanf("%d", &yaricap);

    printf("1: Çapý Hesapla\n2: Alaný Hesapla\nSeçiminizi Girin (1 veya 2): ");
    scanf("%d", &secim);

    if (secim == 1) {
        cap = 2 * yaricap;
        printf("Çap: %d\n", cap);
    } else if (secim == 2) {
        alan = 3.14 * yaricap * yaricap;
        printf("Alan: %d\n", alan);
    } else {
        printf("Geçersiz seçim. Lütfen 1 veya 2 girin.\n");
    }

    return 0;
}
