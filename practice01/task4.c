#include <stdio.h>

int main() {
    // 1. Создаем переменную и присваиваем значение
    int myVariable = 42;

    // 2. Выводим содержимое и адрес
    printf("Содержимое переменной: %d\n", myVariable);
    printf("Адрес переменной: %p\n", (void*)&myVariable); // & получает адрес [1]

    return 0;
}
