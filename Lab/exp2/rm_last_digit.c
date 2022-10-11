#include<stdio.h>

int main() {
    int a, b;

    printf("Enter the number: ");
    scanf("%d", &a);

    b = (a - (a % 10) ) / 10;

    printf("\nThe New Number is: %i",b );

    return 0;
}