#include <stdio.h>
#include <string.h>

#define MAX_KELIME_SAYISI 100
#define MAX_KELIME_UZUNLUGU 50

int main() {
    char kelimeler[MAX_KELIME_SAYISI][MAX_KELIME_UZUNLUGU];
    char temp[MAX_KELIME_UZUNLUGU];
    int kelimeSayisi;

    printf("Kaç kelime gireceksiniz: ");
    scanf("%d", &kelimeSayisi);

    printf("Kelimeleri girin:\n");
    for (int i = 0; i < kelimeSayisi; i++) {
        scanf("%s", kelimeler[i]);
    }

    for (int i = 0; i < kelimeSayisi - 1; i++) {
        for (int j = i + 1; j < kelimeSayisi; j++) {
            if (strcmp(kelimeler[i], kelimeler[j]) > 0) {
                strcpy(temp, kelimeler[i]);
                strcpy(kelimeler[i], kelimeler[j]);
                strcpy(kelimeler[j], temp);
            }
        }
    }

    printf("Sýralanmýþ kelimeler:\n");
    for (int i = 0; i < kelimeSayisi; i++) {
        printf("%s\n", kelimeler[i]);
    }

    return 0;
}
