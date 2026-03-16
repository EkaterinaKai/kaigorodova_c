#include <stdio.h>

int main() {
    int a, b;
    
    printf("Введите два целых числа: ");
    scanf("%d %d", &a, &b);
    
    // Явное приведение типов для получения дробной части
    float result = (float)a / b;
    printf("Деление %d / %d = %.2f\n", a, b, result);
    
    return 0;
}