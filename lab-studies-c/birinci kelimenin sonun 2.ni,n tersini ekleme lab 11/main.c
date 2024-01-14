#include <stdio.h>
#include <string.h>

int main() {
    char kelime1[50], kelime2[50];

    printf("Ýki kelime girin:\n");
    scanf("%s %s", kelime1, kelime2);

    int uzunluk = strlen(kelime2);
    for (int i = 0; i < uzunluk / 2; ++i) {
        char gecici = kelime2[i];
        kelime2[i] = kelime2[uzunluk - 1 - i];
        kelime2[uzunluk - 1 - i] = gecici;
    }

    strcat(kelime1, kelime2);

    printf("Birleþtirilmiþ kelime: %s\n", kelime1);

    return 0;
}
