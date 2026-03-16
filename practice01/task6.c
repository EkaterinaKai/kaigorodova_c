#include <stdio.h>

int main() {
    int a, b, c;
    
    printf("Введите три числа: ");
    scanf("%d %d %d", &a, &b, &c);
    
    float average = (float)(a + b + c) / 3;
    printf("Среднее арифметическое: %.2f\n", average);
    
    return 0;
}
