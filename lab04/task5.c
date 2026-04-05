#include <stdio.h>
int main() {
    char buf[200];
    printf("Введите: ");
    fgets(buf, sizeof(buf), stdin);
    FILE *fp = fopen("test.txt", "w");
    if (fp == NULL) return 1;
    fputs(buf, fp);
    fclose(fp);
    fp = fopen("test.txt", "r");
    if (fp == NULL) return 1;
    while (fgets(buf, sizeof(buf), fp)) printf("%s", buf);
    fclose(fp);
    return 0;
}