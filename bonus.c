#include<stdio.h>
int main() {
    char female;
    int amount,bonus=0;
    printf("Is customer female(Y/N):");
    scanf("%c",&female);
    printf("Enter the amount:");
    scanf("%d",&amount);
    if(female=='Y'&& amount>5000) {
        bonus=bonus+(amount*5/100);
        printf("final amount after bonus:%d", (amount+bonus));
    }
    else {
        bonus=bonus+(amount*2/100);
        printf("final amount after bonus:%d",(amount+bonus));
    }
    return 0;
}