#include<stdio.h>
int main()
{
    int num;
    printf("Enter number to convert octal into hexadecimal\n");
    scanf("%o",&num);
    printf("hexadecimal form of this number is %x\n",num);
    printf("Enter number to convert hexadecimal into octal\n");
    scanf("%x",&num);
    printf("Octal form of this number is %o",num);
}