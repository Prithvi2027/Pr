//Write a program to interchange the value given to two variables. (Using third variable).
#include<stdio.h>

void main(){
    int a=10,b=20,c;
    printf("Initially the value of a is %d and b is %d\n",a,b);
    c=a;
    a=b;
    b=c;
    printf("Now the value of a is %d and b is %d",a,b);
}