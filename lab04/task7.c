#include <stdio.h>
typedef struct { char name[50]; int age; } Person;
int main() {
    Person p1 = {"Katya", 17}, p2;
    FILE *fp = fopen("person.bin", "wb");
    if (fp == NULL) return 1;
    fwrite(&p1, sizeof(Person), 1, fp);
    fclose(fp);
    fp = fopen("person.bin", "rb");
    if (fp == NULL) return 1;
    fread(&p2, sizeof(Person), 1, fp);
    fclose(fp);
    printf("Имя: %s, Возраст: %d\n", p2.name, p2.age);
    return 0;
}