#include <stdio.h>
int main() {
    FILE *fp = fopen("test.txt", "w");
    if (fp == NULL) return 1;
    fputs("Hello\n", fp); fputs("World\n", fp);
    fclose(fp);
    fp = fopen("test.txt", "r");
    if (fp == NULL) return 1;
    char buf[100];
    while (fgets(buf, sizeof(buf), fp)) printf("%s", buf);
    fclose(fp);
    return 0;
}