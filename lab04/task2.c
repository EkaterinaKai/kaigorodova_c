#include <stdio.h>
int main() {
    FILE *fp = fopen("test.txt", "w");
    if (fp == NULL) return 1;
    putc('H', fp); putc('i', fp); putc('!', fp);
    fclose(fp);
    fp = fopen("test.txt", "r");
    if (fp == NULL) return 1;
    int ch; while ((ch = getc(fp)) != EOF) putchar(ch);
    putchar('\n');
    fclose(fp);
    return 0;
}