//program to culculate the fine for over due library book;
/*
Auther:Dyvine Eshiuma
Reg NO:CT102/G/24154/24
Date :27/9/2024
*/

#include<stdio.h>
int main() {
	
	int BOOKID, Duedate, returndate;
	int daysOverdue;
	int fineRate;
	int fineAmount = 0;
	
    printf("\n Enter the BOOKID: ");
	scanf("%d", &BOOKID);
	
	printf("Enter the Duedate: ");
	scanf("%d", &Duedate);
	
	printf("Enter the returndate:");
	scanf("%d", &returndate);

	daysOverdue = returndate - Duedate;
		
	if   (daysOverdue <= 0){fineRate = 0;}
		
		else if  (daysOverdue <= 7){fineRate = 20;}
	
	else if(daysOverdue<=14){fineRate=50;}
	
		else{fineRate=100;}

			fineAmount = daysOverdue*fineRate;
		
		printf("Book Id:%d\n",BOOKID);
		printf("Due date:%d\n",Duedate);
		printf("Returndate:&d\n",returndate);
		printf("Days overdue:%d\n",daysOverdue);
		printf("Finerate:%d\n",fineRate);
		printf("Total fine amount:%d\n",fineAsmount);
		
return 0;
}