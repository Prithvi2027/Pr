//Write a program to interchange the value of given two variables.(Without using third variable)
#include<stdio.h>

void main(){
    int a,b;
    printf("Enter the two number");
    scanf("%d%d",&a,&b);
    printf("Initially the value of a is %d and b is %d\n",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("Now the value of a is %d and b is %d",a,b);
}