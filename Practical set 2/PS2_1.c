//Write a program to perform addition, subtraction, multiplication, division, modulo division on two integer numbers
#include<stdio.h>

void main(){
    int a,b;
    printf("Enter two number\n");
    scanf("%d%d",&a,&b);
    printf("Adidition of number is %d\n",a+b);
    printf("Subtraction of number is %d\n",a-b);
    printf("Multiplication of number is %d\n",a*b);
    printf("Division of number is %d\n",a/b);
    printf("Modulo division of number is %d",a%b);

}