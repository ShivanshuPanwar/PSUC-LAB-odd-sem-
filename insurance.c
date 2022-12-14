#include<stdio.h>
int main()
{
    int age;
    char gender,smoker;
    float amount;
    printf("Enter Age:");
    scanf("%d",&age);
    printf("Enter Gender\n m:male\n f:female:");
    fflush(stdin);
    scanf("%c", &gender);
    printf("Are you smoker\n y:yes\n n:no:");
    fflush(stdin);
    scanf("%c",&smoker);
    if(age>=21 && age<=30)
    {
        amount=10000;
    }
    else if(age>=31 && age<=40)
    {
        amount=15000;
    }
    else if(age>=41 && age<=50)
    {
        amount=20000;
    }
    else if(age>=51 && age<=60)
    {
        amount=40000;
    }
    else
    {
      printf("You are not elgibile");
    }
    if(gender=='f' && smoker=='n')
    {
        amount=amount-((amount*10)/100.0);
        printf("Amount=%f",amount);
    }
    else if(gender=='m' && smoker=='y')
    {
      amount=amount+((amount*10)/100.0);
      printf("Amount=%f", amount);
    } 
    else
    {
     printf("Amount=%f",amount);
    }

}