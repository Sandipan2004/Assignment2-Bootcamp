//Write a program to print unit digit of a given number.
#include<stdio.h>
int main()
{
    int num,rem;
    printf("Enter The Number: ");
    scanf("%d",&num);
    rem=num%10;
    if(rem<0)
    rem*=-1;
    printf("Unit Digit of %d is %d",num,rem);
    return 0; 
}