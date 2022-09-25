#include<stdio.h>

void main() {
    float PI = 3.14;
    float radius, area, circumference;

    printf("Enter The Number: ");
    scanf("%f", &radius);

    circumference = 2 * PI * radius;
    area = PI * (radius*radius);

    printf("\nThe Area of circle is: %f\nThe Circumference is: %f", area, circumference);

}