#include <stdio.h>
#include <string.h>

int main() {
    char kelime[50];
    int sesliharfsayisi = 0;

    printf("Bir kelime girin: ");
    scanf("%s", kelime);

    int uzunluk = strlen(kelime);

    for (int i = 0; i < uzunluk; i++) {
        char karakter = kelime[i];

        if (karakter == 'a' || karakter == 'e' || karakter == 'ý' || karakter == 'i' || karakter == 'o' ||
            karakter == 'ö' || karakter == 'u' || karakter == 'ü' ||
            karakter == 'A' || karakter == 'E' || karakter == 'I' || karakter == 'Ý' || karakter == 'O' ||
            karakter == 'Ö' || karakter == 'U' || karakter == 'Ü') {
            sesliharfsayisi++;
        }
    }

    printf("Girilen kelimenin içindeki sesli harf sayýsý: %d\n", sesliharfsayisi);

    return 0;
}
