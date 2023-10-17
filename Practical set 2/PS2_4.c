//Write a program to ask angle from user in degrees and convert it into radians. Also
//obtain the sine and cosine values of such angle.

#include<stdio.h>
#include<math.h>

void main(){
    float d,r,s,c;
	printf("Enter the angle in degree\n");
	scanf("%f",&d);
	r=22*d/(7*180);
	s=sin(r);
	c=cos(r);
	printf("The angle in radian is %f \n",r);	
	printf("sin %f is %f\n",r,s);
	printf("cos %f is %f",r,c);
}