#include <stdio.h>

int main() {
    int n;
    
    printf("Введите число: ");
    scanf("%d", &n);
    
    if (n % 2 == 0) {
        printf("%d - четное число\n", n);
    } else {
        printf("%d - нечетное число\n", n);
    }
    
    return 0;
}