/*Write a program in C to calculate and print the Electricity bill of a given customer. The
customer id., name and unit consumed by the user should be taken from the keyboard
and display the total amount to pay to the customer. The charge are as follow
upto 199-1.20
between 200 to 400-1.50
between 400 to 600-1.80
600 and above-2
If bill exceeds Rs.400 then a surcharge of 15% will be
 charged and the minimum till should be of Rs.100*/
#include<stdio.h>

void main(){
    int id,u;
	float amt,samt;
	char n[100];
	printf("Enter Customer ID \n");
	scanf("%d",&id);


	printf("Enter Customer name \n");
	scanf(" %s",&n);


	printf("Enter the units consumed \n");
	scanf("%d",&u);

    printf("Customer ID:%d\n",id);
	printf("Customer name:%s\n",n);
	printf("Units Consumed:%d\n",u);
	
	if(u>0 && u<=199){
		amt=u*1.20;
        printf("Amount Charges @Rs.1.20 per unit :%f\n",amt);
	}
	else if(u>=200 && u<400){
		amt=u*1.50;
        printf("Amount Charges @Rs.1.50 per unit :%f\n",amt);
	}
	else if(u>=400 && u<600){
		amt=u*1.80;
        printf("Amount Charges @Rs.1.80 per unit :%f\n",amt);
	}
	else if(u>=600){
		amt=u*2.00;
        printf("Amount Charges @Rs.2.00 per unit :%f\n",amt);
	}
	else{
		printf("Wrong input");
	}



    if (amt>=400){
        samt=amt*0.15;
        printf("Surcharge Amount :%f\n",(samt>=100?samt:100));
        printf("Net amount paid by the customer:%f\n",amt,samt);
    }
    else{
        printf("Surcharge Amount :0\n");
        printf("Net amount paid by the customer:%f",amt);
    }
}
