#include <stdio.h>
int main() {
    FILE *fp = fopen("test.txt", "rb");
    if (fp == NULL) return 1;
    fseek(fp, 0, SEEK_END);
    printf("Размер: %ld байт\n", ftell(fp));
    fclose(fp);
    return 0;
}