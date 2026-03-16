#include <stdio.h>

int main() {
    int x = 10;
    
    printf("Исходное x = %d\n", x);
    
    printf("x++ (постфикс): %d (x теперь = %d)\n", x++, x);
    printf("++x (префикс): %d (x теперь = %d)\n", ++x, x);
    
    // Декремент
    printf("x-- (постфикс): %d (x теперь = %d)\n", x--, x);
    printf("--x (префикс): %d (x теперь = %d)\n", --x, x);
    
    return 0;
}