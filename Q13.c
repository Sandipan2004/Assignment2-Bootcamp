/*Write a program to take a three-digit number from the user and rotate its digits by
one position towards the right.*/
#include<stdio.h>
int main()
{
    int num,p1,p2,p3,ori;
    printf("Enter Three Digit Number: ");
    scanf("%d",&num);
    ori=num;//567
    p1=num%10;//p1=7
    num/=10;//num=56
    p2=num%10;//p2=6
    num/=10;//num=5
    p3=(p1*100)+(num*10)+p2;
    printf("The Origanal Number is %d\n",ori);
    printf("The Rotated Number is %d",p3);
    return 0;
}