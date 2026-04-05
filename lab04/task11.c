#include <stdio.h>
int main() {
    FILE *fp = fopen("test.txt", "r");
    if (fp == NULL) return 1;
    int ch;
    while ((ch = getc(fp)) != EOF) putchar(ch);
    if (feof(fp)) printf("\nКонец файла\n");
    if (ferror(fp)) printf("Ошибка\n");
    fclose(fp);
    return 0;
}