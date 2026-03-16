#include <stdio.h>

int main() {
    int n;
    
    printf("Введите число: ");
    scanf("%d", &n);
    
    printf("%d ", n);
    
    if (n % 2 == 0 && n % 3 == 0 && n % 5 == 0) {
        printf("делится на 2, 3 и 5\n");
    } else {
        printf("делители: ");
        if (n % 2 == 0) printf("2 ");
        if (n % 3 == 0) printf("3 ");
        if (n % 5 == 0) printf("5");
        printf("\n");
    }
    
    return 0;
}