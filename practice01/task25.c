#include <stdio.h>

int main() {
    float num1, num2, result;
    char op;
    printf("Введите два числа и символ операции (+, -, *, /): ");
    scanf("%f %f %c", &num1, &num2, &op);
    
    switch(op) {
        case '+': result = num1 + num2; break;
        case '-': result = num1 - num2; break;
        case '*': result = num1 * num2; break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
            } else {
                printf("Деление на ноль!\n");
                return 1;
            }
            break;
        default: printf("Неверная операция!\n"); return 1;
    }
    printf("Результат: %.2f\n", result);
    return 0;
}
