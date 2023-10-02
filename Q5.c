//Write a program to input a three-digit number and display the sum of the digits.
#include<stdio.h>
int main()
{
    int num,n1,n2,n3;
    printf("Enter A Three Digit Number: ");
    scanf("%d",&num);
    if(num>999)
    printf("Invalid Input");
 else
 {
    int r=num;
    n1=num%10;
    num/=10;
    n2=num%10;
    num/=10;
    n3=num%10;
    int sum=n1+n2+n3;
    printf("The Sum of Digits of %d is %d",r,sum);
 }
    return 0; 
 
}