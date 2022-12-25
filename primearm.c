/*
        Ques_3----->>>>>>
            Write a menu driven program to check given number is prime and Armstrong using switch and functions
*/

#include<stdio.h>
#include<math.h>
int digit(int);
int prime(int);
int armStrong(int);

void main(){
    int num1, num2, input;
    printf("To perform Prime press 1 and for Armstrong press 2: ");
    scanf("%d", &input);

    switch (input){
    case 1:
        if(prime(num1)){
            printf("%d is Prime Number!", num1);
        }else{
            printf("%d is Not Prime!", num1);
        }
        break;
    
    case 2:
        if(armStrong(num2) == num2){
            printf("Armstrong Number!");
        }else{
            printf("Not Armstrong Number!");
        }
        break;

    default:
        printf("Invalid Entry!");
        break;
    }
}

int prime(int num1){
    int flag = 0, i;
    printf("Please enter the number: ");
    scanf("%d", &num1);

    for(i = 2; i <= sqrt(num1); i++){
        if(num1 % i == 0){
            flag = 1;
            break;
        }
    }
    if(flag == 1){
        return 0;
    }
    else{
        return 1;
    }

}

int digit(int num2){
    int i = 0;
    while (num2>0)
    {
        num2 = num2/10;
        i = i+1;
    }
    return i;
}

int armStrong(int num2){
    //int num2;
    printf("Please enter any number: ");
    scanf("%d", &num2);
    int a = 0, rem, s = 0;
    a = digit(num2);
    while(num2!=0){
        rem = num2 % 10;
        num2 = num2 / 10;
        s = s + pow(rem, a);
    }
    return s;
}