// To caclculate BMI of a body

#include<stdio.h>

void main() {
    float mass,height,bmi;

    printf("Enter The Mass and height: ");
    scanf("%f%f", &mass, &height);

    bmi = mass * (height * height);

    printf("The BMI Value is: %.3f", bmi);

}