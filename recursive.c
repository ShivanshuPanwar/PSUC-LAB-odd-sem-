#include<stdio.h>
int factorial(int);
int main() {
    int n;
    printf("Please enter the number:");
    scanf("%d",&n);
    printf("factorial of %d is:%d",n,factorial(n));
}
int factorial(int n) {
    int fact=1;
    if(n==1) {
        return 1;
        } else {
            return n*factorial(n-1);
        }
        return fact;
}