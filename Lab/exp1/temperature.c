// converting celsius to farenheight

#include<stdio.h>

void main() {
    float c,f;

    printf("Enter the Temp in celsius: ");
    scanf("%f", &c);

    f =(1.8*c) + 32;

    printf("The Temp in farenheight is: %.2f", f);
}