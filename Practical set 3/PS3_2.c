//Write a program to perform given operation using bitwise operator on two integer
//values. X&Y, X|Y, X^Y, X >> 2, Y <<1 , Y>>2
#include<stdio.h>

void main(){
	int X,Y;
	printf("Enter 2 number\n");
	scanf("%d%d",&X,&Y);
	printf("X&Y=%d\n",X&Y);
	printf("X|Y=%d\n",X|Y);
	printf("X^Y=%d\n",X^Y);
	printf("X>>2=%d\n",X>>2);
	printf("Y>>2=%d",Y>>2);
}
