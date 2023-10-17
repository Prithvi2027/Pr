//Write a program that finds roots of quadratic equations
#include<stdio.h>
#include<math.h>

void main(){
	float a,b,c,d,s1,s2;
	printf("Enter the value of a,b and c of quadratic equation ax^2+bx+c\n");
	scanf("%f%f%f",&a,&b,&c);
	d=b*b-4*a*c;
	if(d>0){
		s1=(-b+sqrt(d))/(2*a);
		s2=(-b-sqrt(d))/(2*a);
		printf("The root of quadratic equation is %f and %f",s1,s2);
	}
	else if (d<0){
		s1=(-b)/(2*a);
		s2=sqrt(-d)/(2*a);
		printf("The root of quadratic equation is %f+i%f and %f-i%f",s1,s2,s1,s2);
	}
	else if(d==0){
		s1=(-b)/(2*a);
		printf("The root of quadratic equation is %f",s1);
	}
	else{
		printf("Wrong Input");
	}
	
}
