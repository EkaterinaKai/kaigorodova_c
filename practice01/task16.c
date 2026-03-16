#include <stdio.h>

int main() {
    int x;
    
    printf("Введите число x: ");
    scanf("%d", &x);
    
    int result;
    if (x > 0) {
        result = x * x;
        printf("f(%d) = %d (x^2)\n", x, result);
    } else if (x == 0) {
        result = 0;
        printf("f(%d) = %d\n", x, result);
    } else {
        result = -x;
        printf("f(%d) = %d (-x)\n", x, result);
    }
    
    return 0;
}