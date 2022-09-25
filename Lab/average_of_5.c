#include<stdio.h>

void main() {
    float a, b, c, d, e, average;

    printf("Enter 5 Numbers:");
    scanf("%d%d%d%d%d",&a, &b, &c, &d, &e);

    average = (a+b+c+d+e) / 5;

    printf("\n\nThe Average of 5 Numbers is: %i", average);

}
