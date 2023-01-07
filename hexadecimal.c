#include<stdio.h>
int main()
{
    int num;
    printf("Enter number to convert into hexadecimal\n");
    scanf("%d",&num);
    printf("The hexadecimal form of this number is %x\n",num);
    printf("Enter number to convert into decimal\n");
    scanf("%x",&num);
    printf("Decimal form of this number is %d",num);
}