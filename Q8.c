/*Write a program to check whether the given number is even or odd using a bitwise
operator*/
#include<stdio.h>
int main()
{
    int num,r;
    printf("Enter A Number: ");
    scanf("%d",&num);
    r=num&1;
    if(r==0)
    printf("%d is Even",num);
    if(r==1)
    printf("%d is Odd",num);
    return 0;
}