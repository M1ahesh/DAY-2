#include<stdio.h>
#include<string.h>
#include<conio.h>
struct books {
	char title[50];
	char author[30];
	char subject[60];
	long int book_id;
};

int main()
{
clrscr();
struct books book1;
struct books book2;

strcpy(book1.title, "c programming");
strcpy(book1.author, "donno");
strcpy(book1.subject,"c programming tutorial");
book1.book_id =6435407;

printf("book 1 title : %s\n",book1.title);
printf("book 1 author : %s\n",book1.author);
printf("book 1 subject: %s\n",book1.subject);
printf("book 1 book_id : %ld\n",book1.book_id);
return 0;
}