/*Display grade according to percentage using else if statement.
Per>= 90 – “A+”
Per>= 80 – “A”
Per>= 70 – “B+”
Per>= 60 – “B”
Per>= 50 – “C+”
Per>= 40 – “C”
Per< 40 – “F” */
#include<stdio.h>

void main(){
	int a;
	printf("Enter the percentage \n");
	scanf("%d",&a);
	if(a>=90){
		printf("A+");
	}
	else if(a>=80){
		printf("A");
	}
	else if(a>=70){
		printf("B+");
	}
	else if(a>=60){
		printf("B");
	}
	else if(a>=50){
		printf("C+");
	}
	else if(a>=40){
		printf("C");
	}
	else if(a<40){
		printf("F");
	}
	else{
		printf("Wrong Input");
	}
}
