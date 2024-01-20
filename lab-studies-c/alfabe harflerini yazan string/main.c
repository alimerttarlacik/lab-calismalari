#include <stdio.h>

int main() {
    char input[1000];

    printf("Bir metin girin: ");
    gets(input);

    for (int i = 0; input[i] != '\0'; i++) {
        if ((input[i] >= 'A' && input[i] <= 'Z') || (input[i] >= 'a' && input[i] <= 'z')) {
            putchar(input[i]);
        }
    }

    printf("\n");

    return 0;
}
