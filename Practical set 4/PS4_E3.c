/*Write a C program to read temperature in centigrade and display a suitable message
according to temperature state below:
Temp < 0 then Freezing weather
Temp 0-10 then Very Cold weather
Temp 10-20 then Cold weather
Temp 20-30 then Normal in Temp
Temp 30-40 then Its Hot
Temp >=40 then Its Very Hot*/
#include<stdio.h>

void main(){
    int c;
	printf("Enter the temperature in Centigrade \n");
	scanf("%d",&c);
    if(c<0){
		printf("Its Freezing Weather");
	}
	else if(c>0 && c<=10){
		printf("Its very cold weather");
	}
	else if(c>10 && c<=20){
		printf("Its Cold weather");
	}
	else if(c>20 && c<=30){
		printf("Its Normal weather");
	}
	else if(c>30 && c<=40){
		printf("Its Hot weather");
	}
    else if(c>40){
		printf("Its Very Hot weather");
	}
	else{
		printf("Wrong input");
	}
}