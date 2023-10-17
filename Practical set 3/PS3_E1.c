//Write a program to find out maximum out of three numbers using conditional operator.
#include<stdio.h>

void main(){
	int a,b,c;
	printf("Enter three number\n");
	scanf("%d%d%d",&a,&b,&c);
	if (a>=b&a>=c){
		printf("The maximum number is %d",a);
	}
	else if (b>=a&b>=c){
		printf("The maximum number is %d",b);
	}
	else if (c>=a&c>=b){
		printf("The maximum number is %d",c);
	}
/*	if (a>b){
		//when a>b
		if (a>c){
			printf("The maximum number is %d",a);
		}
		else{
			//As a>b and c>a the maximum number is c
			printf("The maximum number is %d",c);
		}
	}
	else{
		//when b>a
		if (b>c){
			//As b>a and b>c the maximum number is b
			printf("The maximum number is %d",b);
		}
		else {
			//As b>a and c>b the maximum number is c
			printf("The maximum number is %d",c);
		}
	}
*/

}
