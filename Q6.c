//Write a program which takes a character as an input and displays its ASCII code.
#include<stdio.h>
int main()
{
    char ch;
    printf("Enter The Character: ");
    scanf("%c",&ch);
    printf("The ASCII Value of Character %c is %d",ch,ch);
    return 0;
}