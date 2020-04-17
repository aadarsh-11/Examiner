#include<stdio.h>
#include<windows.h>
#include<string.h>
#include<conio.h>
#include<time.h>
#include"Graphics.h"
#include"Set Question Paper.h"
#include"Result.h"

int main()
{
	char mis[10],name[30];
	time_t start, end;
	
	heading();
	
	nl(12);
	tab(8);
	printf("Enter your MIS no: ");
	fflush(stdin);
	gets(mis);
	
	tab(8);
	printf("Enter your name: ");
	fflush(stdin);
	gets(name);
	nl(5);
	printf(" press any key to proceed....");	
	getch();
	
	system("CLS");
	
	int n=noq() ,a[n];
	heading();
	instructions();
	
	system("CLS");
	heading();
	printf("\n\nMaximum Marks:- %d",maxmarks());
	tab(17);
	printf("Time:- %dhrs\n",totaltime());
	dash(19);
	tab(17);
	dash(12);
	nl(2);
	start = time(NULL);
	
	questions(a);

	end = time(NULL);
	getch();
	system("CLS");
	
	heading();
	nl(9);
	tab(7);
	printf(" YOU HAVE SUCCESSFULLY ATTEMPTED THE EXAM! ");
	nl(6);
	printf(" please enter any key to see your RESULTS... ");
	getch();
	
	system("CLS");
	
	result(a,n,answer,end,start,mis,name);
	return 0;
}
