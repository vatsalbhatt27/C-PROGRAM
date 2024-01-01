//default argument inline
#include<iostream.h>
#include<conio.h>

inline int sum(int a=100,int b=200)
{
	int c;
	c=a+b;
	return c;
}
void main()
{
	int a,b,c;
	clrscr();
	a=10;
	b=20;

	c=sum(a,b); //10+20
	cout<<"\nTotal is :"<<c;

	c=sum(a); //10+200
	cout<<"\nTotal is :"<<c;

	c=sum();
	cout<<"\nTotal is :"<<c;
	getch();
}