//Write a program that ask co-ordinates of a point and find position of a point on x-y plane
#include<stdio.h>

void main(){
	int x,y;
	printf("Enter the co-ordinate of a point \n");
	scanf("%d%d",&x,&y);
	if(x>0 && y>0){
		printf("Its in 1st quadrant");
	}
	else if(x<0 && y>0){
		printf("Its in 2nd quadrant");
	}
	else if(x<0 && y<0){
		printf("Its in 3rd quadrant");
	}
	else if(x>0 && y<0){
		printf("Its in 4rt quadrant");
	}
	else if(x==0 && y==0){
		printf("Its origin");
	}
	else{
		printf("Wrong input");
	}
}
