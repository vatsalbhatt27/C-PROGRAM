//polymorphisem
#include<iostream.h>
#include<conio.h>


int sum(int a)
{
	return a+a;
}
int sum(int a,int b)
{
	return a+b;
}
int sum(int a,int b,int c)
{
	return a+b+c;
}
int sum(int a,int b,int c,int d)
{
	return a+b+c+d;
}
void main()
{
	int a=1,b=2,c=3,d=4;
	clrscr();
	cout<<"\nTotal is :"<<sum(a);
	cout<<"\nTotal is :"<<sum(a,b);
	cout<<"\nTotal is :"<<sum(a,b,c);
	cout<<"\nTotal is :"<<sum(a,b,c,d);
	getch();
}