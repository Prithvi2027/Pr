//Write a program to find the largest number of users given nos
#include<stdio.h>
#include <stdlib.h>

void main(){
	char n[100];
	int max,n2;
	printf("Enter 'a' to terminate\n");
	while(1){
		printf("Enter the number ");
		scanf(" %c",&n);
		if(n=='a'){
			printf("\nProgram terminated");
			break;
		}
		else{
			n2=atoi(n);
			printf("%s",n);
			max=(max>n2)?max:n2;
			printf("The largest number is %d\n",max);
		}
	}
}
