#include <stdio.h>
#include <string.h>

int main() {
    char ad[20], soyad[20], tamAd[40];

    printf("Ýlk ismi girin: ");
    scanf("%s", ad);

    printf("Soyadý girin: ");
    scanf("%s", soyad);

    strcpy(tamAd, ad);
    strcat(tamAd, " ");
    strcat(tamAd, soyad);

    printf("Birleþtirilmiþ tam ad: %s\n", tamAd);

    return 0;
}




