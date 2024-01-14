#include <stdio.h>
#include <string.h>

void alfabetikSirayaSira(char str[]);

int main() {
    char kelime[100];

    printf("Bir kelime girin: ");
    scanf("%s", kelime);

    alfabetikSirayaSira(kelime);

    return 0;
}

void alfabetikSirayaSira(char str[]) {
    int uzunluk = strlen(str);

    for (int i = 0; i < uzunluk - 1; ++i) {
        for (int j = 0; j < uzunluk - i - 1; ++j) {
            if (str[j] > str[j + 1]) {
                char gecici = str[j];
                str[j] = str[j + 1];
                str[j + 1] = gecici;
            }
        }
    }

    printf("Sýralanmýþ kelime: %s\n", str);
}
