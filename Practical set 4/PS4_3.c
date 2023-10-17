//Write a program that checks whether entered year is leap year or not
#include<stdio.h>

void main(){
	int a;
	printf("Enter a year \n");
	scanf("%d",&a);
	if(a%100==0){
		(a%400==0)? printf("%d is a leap year",a):printf("%d is not a leap year",a);
	}
	else{
		(a%4==0)? printf("%d is a leap year",a):printf("%d is not a leap year",a);
	}
}
