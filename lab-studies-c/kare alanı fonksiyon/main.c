#include <stdio.h>

float kareAlan(float kenar);

int main() {
    float kenar;

    printf("Karenin kenar uzunlu�unu girin: ");
    scanf("%f", &kenar);

    printf("Karenin alan�: %.2f\n", kareAlan(kenar));

    return 0;
}

float kareAlan(float kenar) {
    return kenar * kenar;
}
