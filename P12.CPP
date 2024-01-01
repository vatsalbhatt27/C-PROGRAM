//scope resolution operators
#include<iostream.h>
#include<conio.h>

int a=20;

void main()
{
	int a=10;
	clrscr();
	cout<<"\nLocal value of A is:"<<a;
	cout<<"\nGlobal value of A is :"<<::a;
	cout<<"\nTotal is :"<<::a+a;
	cout<<"\nTotal is :"<<a+a;
	cout<<"\nTotal is :"<<::a+::a;
	getch();
}