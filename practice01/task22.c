#include <stdio.h>

int main() {
    float c;
    printf("Введите температуру в Цельсиях: ");
    scanf("%f", &c);
    printf("Фаренгейты: %.2f\n", c * 9/5 + 32);
    printf("Кельвины: %.2f\n", c + 273.15);
    return 0;
}
