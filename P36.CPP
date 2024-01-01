//static data member
#include<iostream.h>
#include<conio.h>
class abc
{
	static int a;
	public:
	void input(int i)
	{
		a=i;
	}
	void output()
	{
		cout<<"\nVAlue of A is :"<<a;
	}
};
int abc::a=0;
void main()
{
	abc a1,a2;
	clrscr();
	a1.input(10);
	a2.output();
	a2.input(200);
	a1.output();
	getch();
}