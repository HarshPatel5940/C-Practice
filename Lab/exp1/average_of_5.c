#include<stdio.h>

void main() {
    float a, b, c, d, e, sum, average;

    printf("Enter 5 Numbers:");
    scanf("%d%d%d%d%d",&a, &b, &c, &d, &e);

    sum = (a+b+c+d+e);
    average =  sum / 5;

    printf("\n\nThe Average of 5 Numbers is: %i", average);

}
