#include <stdio.h>
int main() {
    FILE *fp = fopen("test.txt", "w+");
    if (fp == NULL) return 1;
    fprintf(fp, "0123456789");
    fseek(fp, 5, SEEK_SET);
    fprintf(fp, "ABC");
    fseek(fp, 0, SEEK_SET);
    char buf[20];
    fgets(buf, sizeof(buf), fp);
    printf("%s\n", buf);
    fclose(fp);
    return 0;
}