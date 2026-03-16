#include <stdio.h>

int main(){       
    int a,b;
    
    printf("Введите два числа: ");
    scanf("%d %d, &a, &b");

    printf("Сумма: %d\n", a + b);
    printf("Разность: %d\n", a - b);
    printf("Произведение: %d\n", a * b);
    printf("Целочисленное деление: %g\n", a / b);

    return 0;
}
    