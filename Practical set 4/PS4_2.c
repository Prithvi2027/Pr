//Write a program that checks whether input number is positive, negative or zero
#include<stdio.h>

void main(){
	int a;
	printf("Enter a number \n");
	scanf("%d",&a);
	(a>0)? printf("Number is positive"):(a==0)?printf("Number is zero"):printf("Number is negative");
}
