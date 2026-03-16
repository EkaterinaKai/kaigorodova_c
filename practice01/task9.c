#include <stdio.h>

int main() {
    int n;
    
    printf("Введите число: ");
    scanf("%d", &n);
    
    int div2 = (n % 2 == 0);
    int div3 = (n % 3 == 0);
    
    printf("%d ", n);
    if (div2 && div3) {
        printf("делится на 2 и на 3\n");
    } else if (div2) {
        printf("делится только на 2\n");
    } else if (div3) {
        printf("делится только на 3\n");
    } else {
        printf("не делится ни на 2, ни на 3\n");
    }
    
    return 0;
}