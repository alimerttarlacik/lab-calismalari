#include <stdio.h>

int main() {
    int a, b, gecici;

    printf("Birinci tam sayýyý girin: ");
    scanf("%d", &a);

    printf("Ýkinci tam sayýyý girin: ");
    scanf("%d", &b);

    gecici = a;
    a = b;
    b = gecici;

    printf("Deðiþtirilmiþ deðerler:\n");
    printf("a: %d\n", a);
    printf("b: %d\n", b);

    return 0;
}
