//1. WAP a C program to calculate the area and perimeter of a rectangle based on its length and width.

#include <stdio.h>
int main()
{
    float length,width,area,perimeter;
    printf("Enter the length of rectangle:");
    scanf("%f",&length);
    printf("Enter the width of rectangle:");
    scanf("%f",&width);
    area=length * width;
    perimeter=2*(length+width);
    printf("\nArea of the rectagle:%.2f\n",area);
    printf("Perimeter of the rectangle:%.2f\n",perimeter);
    return 0;
    
}
