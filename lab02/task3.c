#include <stdio.h>
struct Date {
    int day, month, year;};
    struct Person {
        char name[50];
        struct Date birth;
    };
int main(){
    struct Person people[3];
    int  i;
    printf("3 people:\n");
    for(i=0; i<3; i++){
        printf("People %d:\n", i+1);
        printf("Name: ");
        scanf("%s", people[i].name);
        printf("Day Month Year: ");
        scanf("%d %d %d", &people[i].birth.day, &people[i].birth.month, &people[i].birth.year);
        printf("\n");
    }
printf("\n== Все люди\n");
for(i=0; i<3; i++){
    printf("%s: %02d.%02d.%d\n", people[i].name, people[i].birth.day, people[i].birth.month, people[i].birth.year);
}
printf("\n=== РОДИВШИЕСЯ ПОСЛЕ 2000 ===\n");
int count = 0;
for(i=0; i<3; i++){
    if(people[i].birth.year > 2000){
        printf("%s: %02d.%02.d.%d\n", people[i].name, people[i].birth.day, people[i].birth.month, people[i].birth.year, 2026 - people[i].birth.year);
        count++;
    }
}
if(count == 0){
    printf("No\n");
}
return 0;
}