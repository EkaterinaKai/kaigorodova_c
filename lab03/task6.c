#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, index, value;
    
    printf("Vvedite razmer massiva: ");
    scanf("%d", &n);
    
    int *arr = (int*)malloc(n * sizeof(int));
    
    if (arr == NULL) {
        printf("Oshibka pamiati\n");
        return 1;
    }
    
    printf("Vvedite %d chisel:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Vvedite index dlya vstavki (0-%d): ", n);
    scanf("%d", &index);
    printf("Vvedite znachenie: ");
    scanf("%d", &value);
    
    if (index < 0 || index > n) {
        printf("Nevernyy index\n");
        free(arr);
        return 1;
    }
    
    int *tmp = (int*)realloc(arr, (n + 1) * sizeof(int));
    if (tmp == NULL) {
        printf("Oshibka realloc\n");
        free(arr);
        return 1;
    }
    arr = tmp;
    
    for (int i = n; i > index; i--) {
        arr[i] = arr[i - 1];
    }
    
    arr[index] = value;
    
    printf("Massiv posle vstavki: ");
    for (int i = 0; i < n + 1; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    free(arr);
    
    return 0;
}