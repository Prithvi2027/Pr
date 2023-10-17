//Write a program to find factorial of given nubmer
#include<stdio.h>

void main(){
	int a,i,c=1;
	printf("Enter the value of N ");
	scanf("%d",&a);
	for(i=1;i<=a;i++){
		c=c*i;
	}
	printf("The factorial of %d is %d",a,c);
}
