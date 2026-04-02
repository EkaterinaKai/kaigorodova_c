#include <stdio.h> 
struct Student {
    char name [50];
    int age;
    float gpa;
};
int main() {
    struct Student students[5];
    printf("Введите 5 студентов (имя age gpa):\n");
    for (int i = 0; i < 5; i++) {
        scanf("%s %d %f", students[i].name, &students[i].age, 
&students[i].gpa);
    }
    printf("Все студенты:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d. %s, %d лет, %.2f\n",
               i+1, students[i].name, students[i].age, 
students[i].gpa);
    }
    int imax = 0;
    for (int i = 1; i < 5; i++) {
        if (students[i].gpa > students[imax].gpa) {
            imax = i;
        }
    }
    printf("Лучший студент: %s, %.2f\n", students[imax].name, 
students[imax].gpa);
    return 0;
}