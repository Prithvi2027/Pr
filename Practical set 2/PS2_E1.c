//Write a program to add individual digits of 5-digit no
#include<stdio.h>

void main(){
    int a,b,c,d,e,r;
    printf("Enter a 5 digit individually\n");
	scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    r=a*10000+b*1000+c*100+d*10+e;
    printf("The five digit number is %d",r);
}