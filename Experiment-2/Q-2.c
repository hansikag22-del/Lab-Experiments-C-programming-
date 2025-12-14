//2. WAP a C program to Convert temperature from Celsius to Fahrenheit using the formula: F = (C * 9/5) + 32.

#include <stdio.h>
int main()
{
    float celsius,fahrenheit;
    printf("Enter temperature in celsius:");
    scanf("%f",&celsius);
    fahrenheit=(celsius*9/5)+32;
    printf("Temperature in fahrenheit=%.2fF\n",fahrenheit);
    return 0;
}