//TYPE CONVERSION B to C
#include<iostream.h>
#include<conio.h>
class Abc
{
	int a;
	public:
		Abc (){}
		Abc(int i)
		{
			a=i;
			cout<<"\nValue of A is :"<<a;
		}
};
void main()
{
	int a=10;
	clrscr();
	Abc a1=a;
	getch();
}