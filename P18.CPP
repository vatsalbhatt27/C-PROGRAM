//call by value
#include<iostream.h>
#include<conio.h>

void swap(int,int);

void main()
{
	int a=10,b=20;
	clrscr();
	cout<<"Before Swap :"<<endl;
	cout<<"\nValue of A is :"<<a;
	cout<<"\nVAlue of B is :"<<b;

	swap(a,b);

	cout<<"\n\nAfter Swap :"<<endl;
	cout<<"\nvalue of A is :"<<a;
	cout<<"\nValue of B is :"<<b;
	getch();
}
void swap(int a,int b)
{
	int c;
	c=a;
	a=b;
	b=c;
}