#include <stdio.h>

float kareAlan(float kenar);

int main() {
    float kenar;

    printf("Karenin kenar uzunluğunu girin: ");
    scanf("%f", &kenar);

    printf("Karenin alanı: %.2f\n", kareAlan(kenar));

    return 0;
}

float kareAlan(float kenar) {
    return kenar * kenar;
}
