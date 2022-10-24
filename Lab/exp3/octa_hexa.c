// THE BELOW CODE IS GIVEN BY GITHUB COPIOLT - I STILL DON'T UNDERSTAND IT.

// convert decimal to hexadecimal in C

#include<stdio.h>
int main() {
    int decimal, remainder, quotient;
    int i = 1, j, temp;
    char hexadecimal[100];
    printf("Enter any decimal number: ");
    scanf("%d", &decimal);
    quotient = decimal;
    while (quotient != 0) {
        temp = quotient % 16;
        //To convert integer into character
        if (temp < 10)
            temp = temp + 48;
        else
            temp = temp + 55;
        hexadecimal[i++] = temp;
        quotient = quotient / 16;
    }
    printf("Equivalent hexadecimal value of decimal number %d: ", decimal);
    for (j = i - 1; j > 0; j--)
        printf("%c", hexadecimal[j]);
    return 0;
}


