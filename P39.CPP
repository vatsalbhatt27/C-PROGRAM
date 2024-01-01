//returnig objects
#include<iostream.h>
#include<conio.h>
class abc
{
	int a;
	public:
	void input(void)
	{
		cout<<"\nEnter Number of A :";
		cin>>a;
	}
	abc setval(void)
	{
		abc t1;
		t1.a=a+10;
		return t1;
	}
	void output(void)
	{
		cout<<"\nVAlue of A is :"<<a;
	}
};
void main()
{
	abc a1,a2;
	clrscr();
	a1.input();
	a2=a1.setval();
	a1.output();
	a2.output();
	getch();
}