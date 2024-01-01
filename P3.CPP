#include<iostream.h>
#include<conio.h>
void main()
{
	int no1,no2,no3;
	clrscr();

	cout<<"\nEnter First No:";
	cin>>no1;

	cout<<"\nEnter Second No:";
	cin>>no2;

	cout<<"\nEnter Third No:";
	cin>>no3;

	if(no1>no2)
	{
		if(no1>no3)
		{
			cout<<"\nFirst No is Max";
		}
		else
		{
			cout<<"\nThird No is Max";
		}
	}
	else
	{
		if(no2>no3)
		{
			cout<<"\nSecond No is Max";
		}
		else
		{
			cout<<"\nThird No is Max";
		}
	}
	getch();
}