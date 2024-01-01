//Return by Reference
#include<iostream.h>
#include<conio.h>
int & min(int&a,int&b)
{
	if(a<b)
	{
		return a;
	}
	else
	{
		return b;
	}
}
void main()
{
	int a=10,b=20;
	clrscr();
	cout<<"Before Swap :"<<endl;
	cout<<"\nValue of A is :"<<a;
	cout<<"\nValue of B is :"<<b;

	min(a,b)=100;

	cout<<"\n\nAfter Swap :"<<endl;
	cout<<"\nValue of A is :"<<a;
	cout<<"\nValue of B is :"<<b;
	getch();
}