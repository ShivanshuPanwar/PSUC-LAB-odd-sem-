#include<stdio.h>
int main()
{
    int n,i,a,b,c;
    printf("Enter number of terms:");
    scanf("%d",&n);
    a=0;
    b=1;
    printf("%d\n%d",a,b);
    for(i=2;i<=n;i++)
    {
        c=a+b;
        a=b;
        b=c;
        printf("%d\n",c);    
    }
    return 0;
}