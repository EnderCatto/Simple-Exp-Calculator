#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>

int main()
{
    int base, exponent, result = 1;
    //printf("Enter a number and the exponent to raise the number to: ");
    scanf("%d %d", &base, &exponent);

    while (exponent > 0)
    {
        result *= base; // result = result * base; equivalent operation using the compound assignment operator
        exponent--;
    }

    printf("%d\n", result);
    return 0;
}