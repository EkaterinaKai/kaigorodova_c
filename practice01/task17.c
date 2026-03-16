#include <stdio.h>

int main() {
    int a, b;
    
    printf("Введите два числа: ");
    scanf("%d %d", &a, &b);
    
    printf("До обмена: a=%d, b=%d\n", a, b);
    
    // Обмен через арифметические операции
    a = a + b;
    b = a - b;
    a = a - b;
    
    printf("После обмена: a=%d, b=%d\n", a, b);
    
    return 0;
}