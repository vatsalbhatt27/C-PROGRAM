//object as function arguments
#include<iostream.h>
#include<conio.h>
class abc
{
	int a;
	public:
	void input(void)
	{
		cout<<"\nEnter VAlue of A is :";
		cin>>a;
	}
	void setval(abc t1)
	{
		a =t1.a+10;
	}
	void output(void)
	{
		cout<<"\nValue of A is :"<<a;
	}
};
void main()
{
	abc a1,a2;
	clrscr();
	a1.input();
	a2.setval(a1);
	a1.output();
	a2.output();
	getch();
}