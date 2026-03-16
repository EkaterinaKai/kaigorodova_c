#include <stdio.h>

int main() {
    printf("Hello, Worid!\n");

    int x = 42;
    printf("Адрес переменной x: %p\n", (void*)&x);
    return 0;
}