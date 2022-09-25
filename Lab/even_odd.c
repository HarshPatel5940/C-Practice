#include<stdio.h>

void main() {
    int a;

    printf("Enter The Number: ");
    scanf("%i", &a);

    if (a%2==0) {
        printf("\n%i is an even Number",a);
    } else {
        printf("\n%i is an odd Number",a);
    }

}