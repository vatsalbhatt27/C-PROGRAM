#include<conio.h>
#include<iostream.h>
void main()
{
	int no1,no2,ch,ans;
	clrscr();

	cout<<"\nEnter First No:";
	cin>>no1;

	cout<<"\nEnter Second No:";
	cin>>no2;

	cout<<"\n1.	Addition";
	cout<<"\n2.	Subtraction";
	cout<<"\n3.	Multiplication";
	cout<<"\n4.	Division";
	cout<<"\n\n\t\t Enter Your Choise:";
	cin>>ch;

	switch(ch)
	{
		case 1:
			ans=no1+no2;
			break;

		case 2:
			ans=no1-no2;
			break;

		case 3:
			ans=no1*no2;
			break;

		case 4:
			ans=no1/no2;
			break;

		default:
			cout<<"\nWrong Choise....try again.....";
	}
	cout<<"\n Anser is :"<<ans;
	getch();
}