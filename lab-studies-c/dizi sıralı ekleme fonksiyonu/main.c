#include <stdio.h>

void elemanEkle(int dizi[], int *n, int eleman);

int main() {
    int dizi[100], n, eleman;

    printf("Dizi boyutunu girin: ");
    scanf("%d", &n);

    printf("Diziyi sirali olarak girin:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &dizi[i]);
    }

    printf("Eklemek istediginiz elemani girin: ");
    scanf("%d", &eleman);

    elemanEkle(dizi, &n, eleman);

    printf("Dizi son hali:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", dizi[i]);
    }

    return 0;
}

void elemanEkle(int dizi[], int *n, int eleman) {
    int i = *n - 1;

    while (i >= 0 && dizi[i] > eleman) {
        dizi[i + 1] = dizi[i];
        i--;
    }

    dizi[i + 1] = eleman;
    (*n)++;
}
