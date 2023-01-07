#include<stdio.h>
int main()
{
    int n,i,a,b,c;
    for(i=1;i<=10;i++)
    {
        c=a+b;
        printf("%d\n",c);
        a=b;
        b=c;
    }
    getch();
}