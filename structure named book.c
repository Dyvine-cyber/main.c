
#include<stdio.h>
#include<string.h>

struct book{
char title[30];	
char author[30];
int publicationyear;
long long int ISBN;
float price;
}book1;
int main(){
	strcpy(book1.title, "introduction to C programming");
	strcpy( book1.author,"john smith");
	book1.publicationyear=2022;
	book1.ISBN =9780131103627;
	book1.price=49.99;
	
	printf("title:%s \n",book1.title);
	printf("author: %s \n",book1.author);
	printf("publicationyear:%d \n",book1.publicationyear);
	printf("ISBN:%LL \n",book1.ISBN);
	printf("price:%f\n",book1.price);
	
	return 0;
	

	
}
