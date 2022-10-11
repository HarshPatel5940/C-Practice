#include<stdio.h>

int main() {
    int a, b1, b2, result;

    printf("Enter the number: ");
    scanf("%d", &a);

    b1 = a % 10;
    a = (a - ( a % 10 ) ) / 10;
    b2 = a % 10;
    a = (a - (a % 10) ) / 10;


    result = b1 * b2;

    printf("%d * %d = %d", b2, b1, result);

    return 0;
}