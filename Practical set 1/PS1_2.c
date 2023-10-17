// Write a program to find simple interest
#include<stdio.h>

void main(){
    float p,r,t,si;
    printf("Enter the principal amount");
    scanf("%f",&p);
    printf("Enter the rate of intrest(yearly)");
    scanf("%f",&r);
    printf("Enter the time period(in years)");
    scanf("%f",&t);
    si=p*r*t/100;
    printf("The simple intrest is %f",si);
    
}