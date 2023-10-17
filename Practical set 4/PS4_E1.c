//Write a C program to check whether a given number is even or odd
#include<stdio.h>

void main(){
	int a;
	printf("Enter the number \n");
	scanf("%d",&a);
	(a%2==0)?printf("Its even number"):printf("Its odd number");
}
