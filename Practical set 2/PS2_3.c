//Write a program to calculate distance between two points on x-y plane.
#include<stdio.h>
#include<math.h>

void main(){
    float x1,y1,x2,y2,d;
	printf("Enter the x1 and y1 coordinate\n");
	scanf("%f %f",&x1,&y1);
	printf("Enter the x2 and y2 coordinate\n");
	scanf("%f%f",&x2,&y2);
	d=sqrt(pow(x1-x2,2)+pow(y1-y2,2));
	printf("The distance is %f",d);
}   