#include <stdio.h>
#include <string.h>

int main() {
    char ad[20], soyad[20], tamAd[40];

    printf("�lk ismi girin: ");
    scanf("%s", ad);

    printf("Soyad� girin: ");
    scanf("%s", soyad);

    strcpy(tamAd, ad);
    strcat(tamAd, " ");
    strcat(tamAd, soyad);

    printf("Birle�tirilmi� tam ad: %s\n", tamAd);

    return 0;
}




