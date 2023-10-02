//Write a program to swap values of two int variables.
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the Value of a: ");
    scanf("%d",&a);
    printf("Enter the Value of b: ");
    scanf("%d",&b);
     printf("\nBefore Swaping The Value of a is %d and Value of b is %d\n",a,b);
    c=b;
    b=a;
    a=c;
    printf("After Swaping The Value of a is %d and Value of b is %d",a,b);
    return 0;
}