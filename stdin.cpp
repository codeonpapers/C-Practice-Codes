#include<stdio.h>
int main()
{
    char myName[12];
    printf("Enter your name: ");
    fgets(myName,sizeof(myName),stdin);
    printf("Hello, %s",myName);
    return 0;
}