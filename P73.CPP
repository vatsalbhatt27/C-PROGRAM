// using member function without type conversion
#include<iostream.h>
#include<conio.h>
class Abc
{
	int a;
	public:
	void setval(int i)
	{
		a=i;
	}
	int getval (void)
	{
		return a;
	}
};
void main()
{
	clrscr();
	int a=10,b;
	Abc a1= a;
	a1.setval(a);

	b=a1.getval();
	cout<<"\nValue of A is :"<<a;
	cout<<"\nValue of B is :"<<b;
	getch();
}