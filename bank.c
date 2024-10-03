// LOAN PROGRAM APROVAL
/*
Auther:dyvine Eshiuma
RegNo: CT102/G/24154/24
*/


#include<stdio.h> 
int main(){
int age;
float annualincome;

printf("\n Enter the age : ");
scanf("%d", &age);

printf("Enter the annualincome: ");
scanf("%f", &annualincome);

if (age>= 21 &annualincome>= 21000){
printf("congratulation you qualify for loa:");
}
else {
printf("unfortunately,we are unable to offer you loan at this time");
}

return 0;

}

