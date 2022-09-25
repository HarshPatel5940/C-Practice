#include<stdio.h>

void main() {
    int a, b;

    printf("Enter The First Number: ");
    scanf("%d", &a);

    
    printf("Enter The Second Number: ");
    scanf("%d", &b);

    if (a==b) {
        printf("\nBoth %i and %i are equal", a, b);
    } else if (a>b) {
        printf("\n%i is greater than %i", a, b);
    } else if (b>a) {
        printf("\n%i is greater than %i", b, a);
    }


}