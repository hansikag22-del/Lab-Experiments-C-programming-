//3. Write a program that prompts the user to enter their name and age.

#include <stdio.h>
int main()
{
    int age;
    char name[20];
    printf("//Hansika Gupta\n");
    printf("Please enter your age:");
    scanf("%d",&age);
    printf("Please enter your name:");
    scanf("%s",&name);
    
    printf("age:%d",age);
    printf("\nname:%s",name);
    return 0;
    
}