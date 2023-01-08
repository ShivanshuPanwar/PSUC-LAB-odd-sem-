#include<stdio.h>
int main() {
    char ch,x;
    int to_lower(char);
    printf("Enter the alphabet:");
    scanf("%c",&ch);
    x=to_lower(ch);
    printf("The lower case of alphabet is %c",x);
}
int to_lower(char a) {
    return(a+32);
}