#include<stdio.h>
int main() {
    char ch;
    char x;
    int to_upper(char);
    printf("Enter the alphabet:");
    scanf("%c",&ch);
    x=to_upper(ch);
    printf("The uppercase alphabet is %c",x);
}
int to_upper(char a) {
    return(a-32);
}