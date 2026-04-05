#include <stdio.h>
int main() {
    FILE *fp = fopen("test.txt", "w");
    if (fp == NULL) return 1;
    fprintf(fp, "%d %s %f\n", 42, "Answer", 3.14);
    fclose(fp);
    fp = fopen("test.txt", "r");
    if (fp == NULL) return 1;
    int n; char s[50]; float f;
    fscanf(fp, "%d %s %f", &n, s, &f);
    printf("%d %s %f\n", n, s, f);
    fclose(fp);
    return 0;
}