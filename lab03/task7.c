#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name[100];
    int age;
};

int main() {
    int n;
    
    printf("Vvedite kolichestvo studentov: ");
    scanf("%d", &n);
    
    struct Student *students = (struct Student*)malloc(n * sizeof(struct Student));
    
    if (students == NULL) {
        printf("Oshibka pamiati\n");
        return 1;
    }
    
    for (int i = 0; i < n; i++) {
        printf("Student %d\n", i + 1);
        printf("Imya: ");
        scanf("%s", students[i].name);
        printf("Vozrast: ");
        scanf("%d", &students[i].age);
    }
    
    printf("\nSpisok studentov:\n");
    for (int i = 0; i < n; i++) {
        printf("%d. %s, %d let\n", i + 1, students[i].name, students[i].age);
    }
    
    int oldest = 0;
    for (int i = 1; i < n; i++) {
        if (students[i].age > students[oldest].age) {
            oldest = i;
        }
    }
    
    printf("\nSamyy starshiy: %s, %d let\n", students[oldest].name, students[oldest].age);
    
    free(students);
    
    return 0;
}