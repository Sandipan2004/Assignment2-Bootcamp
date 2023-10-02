//Write a program to print a given number without its last digit.
#include<stdio.h>
int main()
{
    int num;
    printf("Enter The Number: ");
    scanf("%d",&num);
    num/=10;
    printf("%d",num);
    return 0; 
}