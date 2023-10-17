//Write a program to ask for the radius of a sphere from user and find surface area and volume using math functions
#include<stdio.h>
#include<math.h>

void main(){
    float r,sa,v,pi=3.14159;
    printf("Enter the radius of the sphere ");
    scanf("%f",&r);
    sa=4*pi*pow(r,2);
    v=4*pi*pow(r,3)/3;
    printf("The surface area of sphere is %f\n",sa);
    printf("The volume of sphere is %f",v);
}