//copy constructor
#include<iostream.h>
#include<conio.h>
class abc
{
	int a;
	public:
	abc()
	{
		a=0;
	}
	abc(int i)
	{
		a=i;
	}
	abc(abc & t1)//copy constructor
	{
		a=t1.a;
	}
	void output()
	{
		cout<<"\nValue of A is:"<<a;
	}

};
void main()
{
	clrscr();
	abc a1;
	abc a2(50);

	abc a3=a2;

	a1.output();
	a2.output();
	a3.output();
	getch();
}