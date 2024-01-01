//scope resolution operator
#include<iostream.h>
#include<conio.h>

int a=20; //Global variable

void main()
{
	int a=10; //Local Variable
	clrscr();
	cout<<"\nLocal value of A is :"<<a;
	cout<<"\nGlobal variable of A is:"<<::a;
	getch();
}