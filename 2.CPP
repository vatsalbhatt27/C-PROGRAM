#include<iostream.h>
#include<conio.h>
void main()
{
	int no1,no2;
	clrscr();

	cout<<"\nEnter First No:";
	cin>>no1;

	cout<<"\nEnter Second No:";
	cin>>no2;

	if(no1>no2)
	{
		cout<<"\nFirst No is Max";
	}
	else
	{
		cout<<"\nSecond No is Max";
	}
	getch();
}