#include <stdio.h>
#include <limits.h>

int main() {
    int n;
    
    printf("Введите число типа int: ");
    scanf("%d", &n);
    
    printf("n = %d\n", n);
    printf("INT_MAX = %d\n", INT_MAX);
    
    int result = n + INT_MAX;
    printf("n + INT_MAX = %d\n", result);
    printf("Произошло переполнение! (ожидалось ~%ld)\n", 
           (long long)n + INT_MAX);
    
    return 0;
}