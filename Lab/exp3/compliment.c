 #include<stdio.h>

int main() {
    int a;

    printf("Enter the number: ");
    scanf("%d", &a);

    printf("The Compliment of %d is: %d", a, ~a);

    return 0;
}