// make a program to find quotient and reminder of two numbers
//  we can first take divident and divisor and do the calculations

#include<stdio.h>

int main() {
    int d1,d2,q,r;

    printf("Enter the divident: ");
    scanf("%d", &d1);

    printf("Enter the divisor: ");
    scanf("%d", &d2);

    q = d1 / d2;
    r = d1 % d2;

    printf("\nThe Quotient is %i \nThe Reminder is %i", q,r);

    return 0;
}