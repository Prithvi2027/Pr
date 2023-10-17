//Write a program to convert temperature in Celsius to Fahrenheit temperature 
//f = 1.8*C + 32
#include <stdio.h>
void main()
{
    float c,f=0;
    printf("Enter the temperature in celcius");
    scanf("%f",&c);
    f=(1.8*c)+32;
    printf("\nThe temperature in ferinite is %f",f);
}
