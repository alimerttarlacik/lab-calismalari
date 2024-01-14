#include <stdio.h>

char* cift_mi_tek_mi(int sayi);

int main() {
    int sayi;

    printf("Bir sayi girin: ");
    scanf("%d", &sayi);

    printf("Girilen sayi %s.\n", cift_mi_tek_mi(sayi));

    return 0;
}

char* cift_mi_tek_mi(int sayi) {
    if (sayi % 2 == 0) {
        return "Cift";
    } else {
        return "Tek";
    }
}
