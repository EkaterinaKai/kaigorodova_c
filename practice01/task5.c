#include <stdio.h>

int main() {
    float x = 3.14159265358979323846f;
    
    printf("Исходное число: 3.14159265358979323846\n");
    printf("float x = %.20f\n", x);
    printf("Точность float потеряна после %d знака\n", 7);
    
    return 0;
}