// Swap two numbers and display it out.
#include<stdio.h>


void main() {
    int num1,num2;

    printf("Enter the value for Num 1: ");
    scanf("%d", &num1);

    printf("Enter the value for Num 2: ");
    scanf("%d", &num2);

    printf("\nThe Value After swapping is %d %d", num1,num2);

    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;

    printf("\nThe Value After swapping is %d %d", num1,num2);

}