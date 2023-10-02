//Write a program to swap values of two int variables without using a third variable.
#include<stdio.h>
int main()
{
    int a=5,b=10;
    printf("\nBefore Swaping The Value of a is %d and Value of b is %d\n",a,b);
    a=a+b;//a=5+10=15
    b=a-b;//b=15-10=5
    a=a-b;//a=15-5=10
    printf("After Swaping The Value of a is %d and Value of b is %d",a,b);
    return 0;
}