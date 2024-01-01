//inline function
#include<iostream.h>
#include<conio.h>

inline int sum(int a,int b)
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

	c=sum(a,b);
	cout<<"\nTotal is  :"<<c;
	getch();
}