#include <stdio.h>
enum Day {MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY, SUNDAY};
#include <stdio.h>
struct Schedule {
    char subject[30];
    enum Day day;
};
void printDay(enum Day day) {
    switch (day) {
        case MONDAY:
            printf("Понедельник");
            break;
        case TUESDAY:
            printf("Вторник");
            break;
        case WEDNESDAY:
            printf("Среда");
            break;
        case THURSDAY:
            printf("Четверг");
            break;
        case FRIDAY:
            printf("Пятница");
            break;
        case SATURDAY:
            printf("Суббота");
            break;
        case SUNDAY:
            printf("Воскресенье");
            break;
        default:
            printf("Неизвестный день");
            break;
    }
}
int main() {
    enum Day today = THURSDAY;
    struct Schedule lesson = {"Programming", FRIDAY};
    printf("Сегодня: ");
    printDay(today);
    printf("\n");
    printf("Занятие по %s будет в ", lesson.subject);
    printDay(lesson.day);
    printf("\n");
    return 0;
}