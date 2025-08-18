#include <stdio.h>
#define PI 3.14159   // You can also use M_PI from math.h

int main() {
    float radius, area;

    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    area = PI * radius * radius;  // Formula: πr²

    printf("Area of the circle = %.2f\n", area);

    return 0;
}