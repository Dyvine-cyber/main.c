//program to calculate simple interest
/*
auther:dyvine eshiuma
Reg No:CT102/G/24154/24
*/

#include<stdio.h>
int main(){
	float principal,rate,time,simpleinterest;
	
	printf("\nEnter the principal amount:");
	scanf("%f",&principal);
	
	printf("Enter the rate of period:");
	scanf("%f",&rate);
	
	printf("Enter the time(in years):");
	scanf("%f",&time);
	
	simpleinterest=(principal*time*rate)/100.0;
		printf("\nSimple Interest %.2f",simpleinterest);
	
	return 0;
	}