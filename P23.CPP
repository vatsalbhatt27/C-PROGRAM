//polymorphisem
#include<iostream.h>
#include<conio.h>


int sum(float ,float b)
{
	return a+b;
}
int sum(int a,int b)
{
	return a+b;
}
void main()
{
	int a=1,b=2;
	float c=3,d=4;
	clrscr();
	cout<<"\nTotal is :"<<sum(a,b);
	cout<<"\nTotal is :"<<sum(c,d);
	getch();
}