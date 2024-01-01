#include<iostream.h>
#include<conio.h>
#include"udf.h"
int sum (int,int);
void main()
{
	int a=10,b=20,c=0;
	clrscr();

	c=sum(a,b);

	cout<<"\nTotal is:"<<c;
	getch();
}

