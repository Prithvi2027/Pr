//Write a program to reverse the given 4-digit no.
#include<stdio.h>

void main(){
    int a,b,c,d,e,r;
    printf("Enter a  4 digit number");
	scanf("%d",&a);
	b=a%10;
	a=a/10;
	c=a%10;
	a=a/10;
	d=a%10;
	a=a/10;
	e=a%10;
	r=b*1000+c*100+d*10+e;
	printf("The reverse order is %d",r);
}