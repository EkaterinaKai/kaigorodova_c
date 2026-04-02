#include <stdio.h>
struct Student {
    char name [50];
    int age;
    float gpa;
};
int main(){
    struct Student s;
    printf("Имя: "); scanf("%s", s.name);
    printf("Возраст: "); scanf("%d", &s.age);
    printf("Балл: "); scanf("%f", &s. gpa);
    printf("%s, %d, %2.f\n", s.name, s.age, s.gpa);
return 0;
}