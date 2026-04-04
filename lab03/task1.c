#include <stdio.h>
#include <stdlib.h>
int main (){
    int n;
    printf("Введите размер массива");
    scanf ("%d", &n);
    int *arr = malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Ошибка");
        return 1;
    }
    printf("Введите элементы массива");
    for(int i=0; i<n; i++) {
        scanf ("%d", &arr[i]);
    }
    for(int i=0; i<n; i++) {
        printf ("%d ", arr[i]);
    }
    free(arr);
    arr = NULL;
return 0;
}
    