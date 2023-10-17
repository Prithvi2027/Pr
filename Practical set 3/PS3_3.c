//What will be the value of X, Y, Z and T after execution of bellowed code? Initial value of
#include<stdio.h>

void main(){
	int X,Y=6,Z,T;
	X=Y--;//x=6,y=5
	X=X++;//x=7,y=5
	X=++Y;//x=6,y=6
	T=Z++ + ++Y;//x=6,y=7,z=1,t=8
	T+=8;//t=16,x=6,y=7,z=1
	T=Z++ + ++Z;//z=2
	printf("The value of X is %d \n The value of Y is %d\n The value of Z is %d\n The value of T is %d",X,Y,Z,T);	
}
