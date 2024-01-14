#include <stdio.h>

int kelime_sayisi(const char *cumle);

int main() {
    char cumle[1000];

    printf("Bir cumle girin: ");
    gets(cumle);

    printf("Cumledeki kelime sayisi: %d\n", kelime_sayisi(cumle));

    return 0;
}

int kelime_sayisi(const char *cumle) {
    int kelimeSayisi = 0;
    int kelimeModu = 0;

    while (*cumle) {
        if (*cumle == ' ' || *cumle == '\n' || *cumle == '\t') {
            kelimeModu = 0;
        } else if (kelimeModu == 0) {
            kelimeModu = 1;
            kelimeSayisi++;
        }

        cumle++;
    }

    return kelimeSayisi;
}
