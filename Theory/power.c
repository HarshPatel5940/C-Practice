#include<stdio.h>

int main() {
    float base, exp;
    float result=1;

    printf("enter base: ");
    scanf("%f", &base);

    printf("enter exp: ");
    scanf("%f", &exp);

    while (exp != 0) {
        result *= base;
        --exp;
    }
    printf("Answer= %f" , result);
    result = 0;
    return 0;
}