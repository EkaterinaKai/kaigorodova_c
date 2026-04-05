#include <stdio.h>
int main() {
    int arr[] = {10, 20, 30, 40, 50}, read_arr[5];
    FILE *fp = fopen("data.bin", "wb");
    if (fp == NULL) return 1;
    fwrite(arr, sizeof(int), 5, fp);
    fclose(fp);
    fp = fopen("data.bin", "rb");
    if (fp == NULL) return 1;
    fread(read_arr, sizeof(int), 5, fp);
    fclose(fp);
    for (int i = 0; i < 5; i++) printf("%d ", read_arr[i]);
    printf("\n");
    return 0;
}