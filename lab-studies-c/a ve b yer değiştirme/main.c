#include <stdio.h>

int main() {
    int a, b, gecici;

    printf("Birinci tam say�y� girin: ");
    scanf("%d", &a);

    printf("�kinci tam say�y� girin: ");
    scanf("%d", &b);

    gecici = a;
    a = b;
    b = gecici;

    printf("De�i�tirilmi� de�erler:\n");
    printf("a: %d\n", a);
    printf("b: %d\n", b);

    return 0;
}
