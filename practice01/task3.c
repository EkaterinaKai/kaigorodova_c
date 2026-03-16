#include <stdio.h>

int main() {
    printf("Размер int: %zu байт\n", sizeof(int));
    printf("Размер float: %zu байт\n", sizeof(float));
    printf("Размер double: %zu байт\n", sizeof(double));
    printf("Размер char: %zu байт\n", sizeof(char));
    
    return 0;
}