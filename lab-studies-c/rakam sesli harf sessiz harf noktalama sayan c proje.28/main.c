#include <stdio.h>

int main() {
    char metin[1000];
    int sesliHarfSayisi = 0, sessizHarfSayisi = 0, rakamSayisi = 0, noktalamaSayisi = 0, digerKarakterSayisi = 0;

    printf("Bir metin girin: ");
    gets(metin);

    for (int i = 0; metin[i] != '\0'; i++) {
        char karakter = metin[i];

        if ((karakter >= 'a' && karakter <= 'z') || (karakter >= 'A' && karakter <= 'Z')) {
            if (karakter == 'a' || karakter == 'e' || karakter == 'i' || karakter == 'o' || karakter == 'u' ||
                karakter == 'A' || karakter == 'E' || karakter == 'I' || karakter == 'O' || karakter == 'U') {
                sesliHarfSayisi++;
            } else {
                sessizHarfSayisi++;
            }
        } else if (karakter >= '0' && karakter <= '9') {
            rakamSayisi++;
        } else if (karakter == ' ' || karakter == '\t') {
            continue;
        } else {
            if (karakter != '\n') {
                noktalamaSayisi++;
            }
        }
    }

    printf("Sesli harf sayısı: %d\n", sesliHarfSayisi);
    printf("Sessiz harf sayısı: %d\n", sessizHarfSayisi);
    printf("Rakam sayısı: %d\n", rakamSayisi);
    printf("Noktalama işareti sayısı: %d\n", noktalamaSayisi);

    return 0;
}
