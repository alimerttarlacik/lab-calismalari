#include <stdio.h>

int main() {
    float feet, cm;

    printf("Feet deðerini girin: ");
    scanf("%f", &feet);

    cm = feet * 30.48;

    printf("%.2f feet = %.2f cm\n", feet, cm);

    return 0;
}
