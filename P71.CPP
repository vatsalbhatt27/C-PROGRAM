//type conversions C to B
#include<iostream.h>
#include<conio.h>
class Abc
{
	int a;
	public:
		Abc(){}
		Abc(int i)
		{
			a=i;
			cout<<"\nValue of A is :"<<a;
		}
		operator int()
		{
			return a;
		}
};
void main()
{
	int a;
	clrscr();
	Abc a1(10);
	a= a1;
	cout<<"\nValue of A is :"<<a;
	getch();
}
