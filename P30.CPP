//Nesting of member function
#include<iostream.h>
#include<conio.h>
class abc
{
	int a;
	public:
	void input(void)
	{
		cout<<"\nEnter Number :";
		cin>>a;
		output();
	}
	void output(void)
	{
		cout<<"\nNumber is :"<<a;
	}
};
void main()
{
	abc a1;
	a1.input();
	getch();
}