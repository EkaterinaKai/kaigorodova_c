#include <stdio.h>

int main() {
    int n;
    
    printf("Введите число: ");
    scanf("%d", &n);
    
    printf("n в двоичном виде: ");
    for (int i = 31; i >= 0; i--) {
        printf("%d", (n >> i) & 1);
    }
    printf("\n");
    
    printf("n & 1 = %d (последний бит)\n", n & 1);
    printf("n | 1 = %d (установить последний бит)\n", n | 1);
    printf("n ^ 1 = %d (инвертировать последний бит)\n", n ^ 1);
    printf("~n = %d (инверсия всех битов)\n", ~n);
    
    return 0;
}