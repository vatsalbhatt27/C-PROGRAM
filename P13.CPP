//member refercncing operator
#include<iostream.h>
#include<conio.h>
void main()
{
	int a=10;
	int*p;
	clrscr();

	p=&a; //call by Reference

	cout<<"\nValue of A is :"<<a<<"value of*p is :"<<*p;
	getch();
}