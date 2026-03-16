#include <stdio.h>

int main() {
    int score;
    
    printf("Введите балл (0-100): ");
    scanf("%d", &score);
    
    if (score >= 90 && score <= 100) {
        printf("Отлично\n");
    } else if (score >= 75) {
        printf("Хорошо\n");
    } else if (score >= 60) {
        printf("Удовлетворительно\n");
    } else if (score >= 0) {
        printf("Неудовлетворительно\n");
    } else {
        printf("Некорректный балл\n");
    }
    
    return 0;
}