//Write a C program to check whether a triangle is Equilateral, Isosceles or Scalene
#include<stdio.h>

void main(){
    int a,b,c;
    printf("Enter the side of the triangle \n");
	scanf("%d%d%d",&a,&b,&c);
    if(a==b && b==c){
        printf("The triangle is equilateral");
    }
    else if (a==b || b==c || c==a){
        printf("The triangle is isosceles");
    }
    else {
        printf("The triangle is Scalene");
    }
}