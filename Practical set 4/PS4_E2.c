//Write a C program to read the age of a candidate and determine whether it is eligible
//for casting his/her own vote.
#include<stdio.h>

void main(){
	int a;
	printf("Enter your age \n");
	scanf("%d",&a);
	if(a>=18){
		printf("You are elegible for casting vote");
	}
	else if(a<18 && a>0){
		printf("You are not elegible for casting vote");
	}
	else{
		printf("Wrong Input");
	}
}
