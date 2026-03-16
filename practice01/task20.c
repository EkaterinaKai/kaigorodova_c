#include <stdio.h>

int main() {
    int a, b, c;
    printf("Введите три числа: ");
    scanf("%d %d %d", &a, &b, &c);
    if (a + b == c) {
        printf("Да, сумма первых двух равна третьему.\n");
    } else {
        printf("Нет.\n");
    }
    return 0;
}
