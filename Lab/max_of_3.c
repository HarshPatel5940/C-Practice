#include<stdio.h>

void main() {
    int max1 = 0;
    unsigned int a, b, c;

    printf("Enter The First Number: ");
    scanf("%d", &a);

    printf("Enter The Second Number: ");
    scanf("%d", &b);

    printf("Enter The Third Number: ");
    scanf("%d", &c);

    if (a > max1) {
        max1 = a;
    } 
    if (b > max1) {
        max1 = b;
    }
    if (c > max1) {
        max1 = c;
    }

    printf("The Greatest Number is: %i", max1);
}
