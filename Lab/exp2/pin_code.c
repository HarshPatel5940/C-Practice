#include<stdio.h>

int main() {
    int pincode, result;

    printf("Enter the pin code: ");
    scanf("%d", &pincode);

    result = pincode % 1000;

    printf("The Last three digits are: %03d", result);

    return 0;
}