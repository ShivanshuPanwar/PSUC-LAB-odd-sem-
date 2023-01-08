#include<stdio.h>
int fib(int);
int main() {
    int n;
    printf("Enter the number which term you want:");
    scanf("%d",&n);
    printf("%dth term of fibonacci series is %d",n,fib(n));
}
int fib(int n) {
    if(n<=1) {
        return n;
    } else {
        return fib(n-1) + fib(n-2);
    }
}