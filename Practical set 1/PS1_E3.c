//Write a program to ask five number from user and display their sum and average
#include<stdio.h>

void main(){
    float a,b,c,d,e,s,avg;
    printf("Enter 5 number\n");
    scanf("%f%f%f%f%f",&a,&b,&c,&d,&e);
    s=a+b+c+d+e;
    avg=s/5;
    printf("The sum of five number is %f\n",s);
    printf("The average of five number is %f",avg);
}