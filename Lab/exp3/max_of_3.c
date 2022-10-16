#include<stdio.h>

int main() {
    int max1 = 0;
    unsigned int a, b, c;

    printf("Enter The Three Number: ");
    scanf("%d%d%d", &a, &b, &c);

    max1 = (a>b) ? (a>c ? a:c) : (b>c ? b : c);

    printf("The Greatest Number is: %i", max1);

    return 0;
}
