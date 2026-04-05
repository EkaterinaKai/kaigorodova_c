#include <stdio.h>
typedef struct { char name[50]; int age; } Person;
int main() {
    Person people[] = {{"Katya", 17}, {"Casha", 17}, {"Mariam", 16}};
    Person read_people[3];
    FILE *fp = fopen("people.bin", "wb");
    if (fp == NULL) return 1;
    fwrite(people, sizeof(Person), 3, fp);
    fclose(fp);
    fp = fopen("people.bin", "rb");
    if (fp == NULL) return 1;
    fread(read_people, sizeof(Person), 3, fp);
    fclose(fp);
    for (int i = 0; i < 3; i++)
        printf("%s, %d\n", read_people[i].name, read_people[i].age);
    return 0;
}