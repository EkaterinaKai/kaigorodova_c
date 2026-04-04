#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, m;
    
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
    
    printf("Vvedite novyy razmer: ");
    scanf("%d", &m);
    
    int *tmp = (int*)realloc(arr, m * sizeof(int));
    if (tmp == NULL) {
        printf("Oshibka realloc\n");
        free(arr);
        return 1;
    }
    arr = tmp;
    
    if (m > n) {
        printf("Vvedite %d novyh chisel:\n", m - n);
        for (int i = n; i < m; i++) {
            scanf("%d", &arr[i]);
        }
    }
    
    printf("Massiv: ");
    for (int i = 0; i < m; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    free(arr);
    
    return 0;
}