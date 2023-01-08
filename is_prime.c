#include<stdio.h>
#include<math.h>
int is_prime(int num) {
    int i;
    for(i=2;i<=sqrt(num);i++) {
        if(num%i==0)
        return 0;
    }
    return 1;
}
int main() {
    int num;
    int is_prime(int);
    printf("Enter a number:");
    scanf("%d",&num);
    if(is_prime(num)) {
        printf("Number is prime\n");
    } else {
        printf("Number is not prime");
    }
    
}