//Write a program to find maximum and minimum from given two nos. using conditional operator.
#include<stdio.h>

void main(){
    int a,b;
    printf("Enter two number\n");
    scanf("%d%d",&a,&b);
    if (a>b){
        printf("The maximum number is %d\n",a);
        printf("The minimum number is %d",b);
    }
    else {
        printf("The maximum number is %d\n",b);
        printf("The minimum number is %d",a);
    }
}

