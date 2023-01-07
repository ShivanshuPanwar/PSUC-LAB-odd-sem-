#include<stdio.h>
int main()
{
    int num1,num2,result;
    char op;
    printf("Enter Number 1:");
    scanf("%d", &num1);
    printf("Enter Number 2:");
    scanf("%d",&num2);
    printf("Enter operator:");
    fflush(stdin);
    scanf("%c", &op);
    switch(op)
    {   case '+':
        result=num1+num2;
        break;
        case'-':
        result=num1-num2;
        break;
        case'*':
        result=num1*num2;
        break;
        case'/':
        result=num1/num2;
        break;
        case'%':
        result=num1%num2;
        break;
        default:
        printf("Sorry");
        break;
    }
    printf("%d",result);
}