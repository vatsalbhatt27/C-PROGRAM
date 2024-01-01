// type conversion B to C & C to B
#include<iostream.h>
#include<conio.h>
class Abc
{
	int a;
	public:
	Abc(int i)
	{
		a=i;
		cout<<"\nValue of  is :"<<a;
	}
	operator int()
	{
		return a;
	}
};
void main()
{
	clrscr();
	int a=10,b;
	Abc a1= a;

	b=a1;
	cout<<"\nValue of B is :"<<b;
	getch();
}