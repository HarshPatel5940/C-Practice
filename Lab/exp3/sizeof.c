#include<stdio.h>

int main() {
    int x;

    printf("Enter a Number: ");
    scanf("%d", &x);

    printf("\nSize the variable %d is %d: ", x, sizeof(x));
    printf("\nSize the intger datatype x is %d: ", sizeof(int));
    printf("\nSize the charactor datatype x is %d: ", sizeof(char));
    printf("\nSize the double datatype x is %d: ", sizeof(double));
    printf("\nSize the float datatype x is %d: ", sizeof(float));

}