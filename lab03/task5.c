#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, index;
    
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
    
    printf("Vvedite index dlya udaleniya (0-%d): ", n - 1);
    scanf("%d", &index);
    
    if (index < 0 || index >= n) {
        printf("Nevernyy index\n");
        free(arr);
        return 1;
    }
    
    for (int i = index; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    
    int *tmp = (int*)realloc(arr, (n - 1) * sizeof(int));
    if (tmp == NULL && (n - 1) > 0) {
        printf("Oshibka realloc\n");
        free(arr);
        return 1;
    }
    arr = tmp;
    
    printf("Massiv posle udaleniya: ");
    for (int i = 0; i < n - 1; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    free(arr);
    
    return 0;
}