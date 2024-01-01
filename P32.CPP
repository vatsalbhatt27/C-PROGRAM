//private member function
#include<iostream.h>
#include<conio.h>
class abc
{
	int a;
	void input(void)
	{
		cout<<"\nEnter Number :";
		cin>>a;
	}
	public:
	void output(void)
	{
		input();
		cout<<"\nNumber is :"<<a;
	}
};
void main()
{
	abc a1;
	clrscr();
	a1.output();
	getch();
}
