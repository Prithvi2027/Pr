//Write a program that ask length, breadth, and height of a rectangular sheet
//Calculate and print surface area and volume of the sheet
#include<stdio.h>

void main(){
    float l,b,h,sa,v;
    printf("Enter the length");
    scanf("%f",&l);
    printf("Enter the breadth");
    scanf("%f",&b);
    printf("Enter the height");
    scanf("%f",&h);
    sa=2*(l*b+b*h+h*l);
    v=l*b*h;
    printf("The surface area of rectangular sheet is %f\n",sa);
    printf("The volume is %f",v);

}