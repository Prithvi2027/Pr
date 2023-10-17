//Write a program to ask the values of sides of a right-angled triangle (not the
//hypotenuse). Calculate and print answers of the rest of two angles using math functions. 
#include<stdio.h>
#include<math.h>

void main(){
    float s1,s2,h,a1,a2;
	printf("Enter side 1 of right angle triangle ");
	scanf("%f",&s1);
	printf("Enter side 2 of right angle triangle ");
	scanf("%f",&s2);
	h=sqrt(s1*s1+s2*s2);
	a1=asin(s1/h);
	a2=asin(s2/h);
	printf("The hypotenuse of right angle triangle is %f \n",h);	
	printf("The angle 1 is %f\n",a1);
	printf("The angle 2 is %f",a2);
}