#include <stdio.h>
int main() {
    FILE *fp = fopen("test.txt", "w");
    if (fp == NULL) { printf("Ошибка\n"); return 1; }
    printf("Файл открыт\n");
    fclose(fp);
    return 0;
}