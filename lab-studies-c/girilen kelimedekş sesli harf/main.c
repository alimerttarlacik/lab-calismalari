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

        if (karakter == 'a' || karakter == 'e' || karakter == '�' || karakter == 'i' || karakter == 'o' ||
            karakter == '�' || karakter == 'u' || karakter == '�' ||
            karakter == 'A' || karakter == 'E' || karakter == 'I' || karakter == '�' || karakter == 'O' ||
            karakter == '�' || karakter == 'U' || karakter == '�') {
            sesliharfsayisi++;
        }
    }

    printf("Girilen kelimenin i�indeki sesli harf say�s�: %d\n", sesliharfsayisi);

    return 0;
}
