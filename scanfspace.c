#include<stdio.h>
void main()
{

    char str[100];
    printf("Enter a string which is more than 2 string");
    scanf("%[^\n]s",str);
    printf("\n The string enter by you is:");
    printf("%s",str);

}