//Write a program to evaluate the polynomial 3x2 – 4x + 9 for any value of x. (Use only two variables)
#import<stdio.h>

void main(){
	float x,a;
	printf("Enter the value of x ");
	scanf("%f",&x);
	a=(3*x*x)-(4*x)+9;
	printf("The value of expression is %f",a);
}
