// program to culculate compoundinterest

/*author:dyvine eshiuma
Reg No:CT102/G/24154/24
DATE:20/9/2024
*/
#include<stdio.h>
int main(){
float principal,time,rate,compound_interest;

printf("Enter the principal amount:");
scanf("%f",&principal);

printf("Enter the rate of interest:");
scanf("%f",&rate);

printf("Enter the time period:");
scanf("%f",&time);

compound_interest = principal*pow(1+rate/100,time)-principal;

 printf("compound_interest=%.2f\n",compound_interest);
 
 return 0;
 }