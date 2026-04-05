#include <stdio.h>
#include <string.h>
typedef struct { char name[50]; int age; } Person;
void add() {
    Person p;
    printf("Имя: "); fgets(p.name, 50, stdin);
    p.name[strcspn(p.name, "\n")] = 0;
    printf("Возраст: "); scanf("%d", &p.age); getchar();
    FILE *fp = fopen("db.bin", "ab");
    if (fp) { fwrite(&p, sizeof(Person), 1, fp); fclose(fp); }
}
void show() {
    Person p;
    FILE *fp = fopen("db.bin", "rb");
    if (!fp) { printf("Пусто\n"); return; }
    while (fread(&p, sizeof(Person), 1, fp))
        printf("%s, %d\n", p.name, p.age);
    fclose(fp);
}
int main() {
    int c;
    do {
        printf("\n1. Добавить 2. Показать 3. Выйти: ");
        scanf("%d", &c); getchar();
        if (c == 1) add();
        else if (c == 2) show();
    } while (c != 3);
    return 0;
}