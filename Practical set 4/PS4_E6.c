//Write a program in C to read any Month Number in integer and display the number of
//days and name for this month.
#include<stdio.h>

void main(){
    int m;
    printf("Enter the month number\n");
	scanf("%d",&m);
    if(m==1){
        printf("Number of days in this month is 31\n");
        printf("Name of the month is January");
    }
    else if(m==2){
        printf("Number of days in this month is 28\n");
        printf("Name of the month is February");
    }
    else if(m==3){
        printf("Number of days in this month is 31\n");
        printf("Name of the month is March");
    }
    else if(m==4){
        printf("Number of days in this month is 30\n");
        printf("Name of the month is April");
    }
    else if(m==5){
        printf("Number of days in this month is 31\n");
        printf("Name of the month is May");
    }
    else if(m==6){
        printf("Number of days in this month is 30\n");
        printf("Name of the month is June");
    }
    else if(m==7){
        printf("Number of days in this month is 31\n");
        printf("Name of the month is July");
    }
    else if(m==8){
        printf("Number of days in this month is 31\n");
        printf("Name of the month is August");
    }
    else if(m==9){
        printf("Number of days in this month is 30\n");
        printf("Name of the month is September");
    }
    else if(m==10){
        printf("Number of days in this month is 31\n");
        printf("Name of the month is October");
    }
    else if(m==11){
        printf("Number of days in this month is 30\n");
        printf("Name of the month is November");
    }
    else if(m==12){
        printf("Number of days in this month is 31\n");
        printf("Name of the month is December");
    }
    else{
        printf("Wrong Input");
    }

    
}