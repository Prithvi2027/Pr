//Write a program to find the sum of first N odd numbers
#include<stdio.h>

void main(){
	int a,b,c=-1,d;
	printf("Enter the value of N");
	scanf("%d",&a);
	for(b=1;b<=a;b++){
		c=c+2;
		d=d+c;
	}
	printf("The sum of first N numbers is %d",d);
}
