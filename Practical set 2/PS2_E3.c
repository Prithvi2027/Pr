//Write a program to accept values of initial velocity and acceleration of and object
//moving with constant acceleration and calculate distance covered after in some time t =
//10 sec. Print all results. [d = (1/2)at2 + v0t ]
#include<stdio.h>

void main(){
    float v,a,d;
    printf("Enter the value of initial velocity(m/s) ");
    scanf("%f",&v);
    printf("Enter the value of constant acceleration(m/s^2) ");
    scanf("%f",&a);
    d=0.5*a*100+v*10;
    printf("The value of initial velocity is %fm/s\n",v);
    printf("The value of constant acceleration is %fm/s^2\n",a);
    printf("The value of time period is 10s\n");
    printf("The value of displacement is %fm",d);

}