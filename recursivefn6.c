#include<stdio.h>
void main()
{
    int num1,num2,op,result;
    long int fact(int);
    int fib(int);
    int ackermann(int,int);

    printf("1.factorial\n2.fibonacci\n3.Ackermann\nEnter:");
    scanf("%d",&op);
    switch(op)
    {
        case 1:
        printf("Enter number to find factorial:");
        scanf("%d",&num1);
        result=fact(num1);
        printf("Factorial=%d",result);
        break;
        case 2:
        printf("Enter number to find fibonacci:");
        scanf("%d",&num1);
        result=fib(num1);
        printf("the %d in fibonacci sequence is %d",num1,result);
        break;
        case 3:
        printf("Enter two number for ackermann:");
        scanf("%d%d",&num1,&num2);
        result=ackermann(num1,num2);
        printf("Ackermann=%d",result);
        break;
        default:
        printf("Exit");
        break;
    }
    }
    long int fact(int num1)
    {
        if(num1==0)
        {
            return 1;
        }
        else
        {
          return (num1*fact(num1-1));
        }
    }
    int fib(int num1)
    {
        int c;
        if(num1<=2)
        {
            return 1;
        }
        else 
        {
            return (fib(num1-1)+fib(num1-2));
        }
    }
    int ackermann(int num1,int num2)
    {
        if(num1==0)
        {
            return num2+1;
        }
        else if(num2==0)
        {
            return ackermann((num1-1),1);
        }
        else
        {
            return ackermann((num1-1),ackermann(num1,(num2-1)));
        }
    }