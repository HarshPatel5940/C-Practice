#include<stdio.h>

void main() {
    float PI = 3.14;
    float radius, perimeter;

    printf("Enter The Number: ");
    scanf("%f", &radius);

    perimeter = 2 * PI * radius;


    printf("\nThe Area of circle is: %f", perimeter);

}