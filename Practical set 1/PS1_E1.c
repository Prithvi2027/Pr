//Write a program to ask five nos. from user and display them in single line separated by comma
#include<stdio.h>

void main(){
    int a,b,c,d,e;
    printf("Enter 5 number\n");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    printf("The 5 number seperated by comma are \n%d,%d,%d,%d,%d",a,b,c,d,e);
}