//Write a program to convert distance between two cities from km to m, inches, and feet’s
#include<stdio.h>

void main(){
    float km,m,i,f;
    printf("Enter the distance in km \n");
    scanf("%f",&km);
    m=km*1000;
    f=km*3280.84;
    i=km*39370.079;
    printf("The distance in meter is %f\n",m);
    printf("The distance in inches is %f\n",i);
    printf("The distance in feet is %f",f);
}