#include<stdio.h>
int main()
{
    int num;
    printf("Enter the number which you went to convert into octal\n");
    scanf("%d",&num);
    printf("The octal form of this number is %o\n",num);
    printf("Enter number to convert into decimal\n");
    scanf("%o",&num);
    printf("Decimal form of this number is %d",num);
}