#include <stdio.h>
struct Rectangle {
    float width;
    float height;
};
float area(struct Rectangle rect) {
    return rect.width * rect.height;
}
float perimeter(struct Rectangle rect) {
    return 2 * (rect.width + rect.height);
}
float areaPtr(struct Rectangle *rect) {
    return rect->width * rect->height;
}
float perimeterPtr(struct Rectangle *rect) {
    return 2 * (rect->width + rect->height);
}
int main() {
    struct Rectangle rect;
    printf("Введите ширину: ");
    scanf("%f", &rect.width);
    printf("Введите высоту: ");
    scanf("%f", &rect.height);
    printf("Площадь: %.2f\n", areaPtr(&rect));
    printf("Периметр: %.2f\n", perimeterPtr(&rect));
    return 0;
}