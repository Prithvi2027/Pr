//Write a program that checks whether input number is divisible by 5 or not.
#include<stdio.h>

void main(){
	int a;
	printf("Enter a number \n");
	scanf("%d",&a);
	if(a%5==0){
		printf("Number %d is divisible by 5",a);
	}
	else{
		printf("Number %d is not divisible by 5",a);
	}
}
