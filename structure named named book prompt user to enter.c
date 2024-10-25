#include<stdio.h>
#include<string.h>

struct book{
char title[30];	
char author[30];
int publicationyear;
 int ISBN;
float price;
}book1;
int main(){
		
	printf("Enter the title:");
	scanf("%s",&book1.title);
	printf("Enter the author:");
	scanf("%s",&book1.author);
	printf("Enter the publicationyear:");
	scanf ("%d",&book1.publicationyear);
	printf("Enter the ISBN:");
	scanf("%d",&book1.ISBN);
	printf("Enter the price:");
	scanf("%f",&book1.price);

	
	printf("title:%s \n",book1.title);
	printf("author: %s \n",book1.author);
	printf("publicationyear:%d \n",book1.publicationyear);
	printf("ISBN:%LL \n",book1.ISBN);
	printf("price:%f\n",book1.price);
	return 0;
	

	
}
