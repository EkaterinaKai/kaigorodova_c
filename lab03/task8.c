#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr = NULL;
    int size = 0;
    int choice;
    
    do {
        printf("\n1 - Dobavit\n");
        printf("2 - Udalit\n");
        printf("3 - Vyvesti\n");
        printf("4 - Razmer\n");
        printf("0 - Vyyhod\n");
        printf("Vash vybor: ");
        scanf("%d", &choice);
        
        if (choice == 1) {
            int value;
            printf("Vvedite chislo: ");
            scanf("%d", &value);
            
            int *tmp = (int*)realloc(arr, (size + 1) * sizeof(int));
            if (tmp == NULL) {
                printf("Oshibka pamiati\n");
                continue;
            }
            arr = tmp;
            arr[size] = value;
            size++;
            printf("Dobavleno!\n");
        }
        else if (choice == 2) {
            if (size == 0) {
                printf("Spisok pust\n");
                continue;
            }
            
            int index;
            printf("Vvedite index (0-%d): ", size - 1);
            scanf("%d", &index);
            
            if (index < 0 || index >= size) {
                printf("Nevernyy index\n");
                continue;
            }
            
            for (int i = index; i < size - 1; i++) {
                arr[i] = arr[i + 1];
            }
            
            int *tmp = (int*)realloc(arr, (size - 1) * sizeof(int));
            if (tmp == NULL && (size - 1) > 0) {
                printf("Oshibka pamiati\n");
                continue;
            }
            arr = tmp;
            size--;
            printf("Udaleno!\n");
        }
        else if (choice == 3) {
            if (size == 0) {
                printf("Spisok pust\n");
            } else {
                printf("Spisok: ");
                for (int i = 0; i < size; i++) {
                    printf("%d ", arr[i]);
                }
                printf("\n");
            }
        }
        else if (choice == 4) {
            printf("Razmer: %d\n", size);
        }
        else if (choice == 0) {
            printf("Vykhod...\n");
        }
        else {
            printf("Nevernaya komanda\n");
        }
        
    } while (choice != 0);
    
    free(arr);
    
    return 0;
}