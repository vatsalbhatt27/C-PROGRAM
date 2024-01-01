//unaray operator using friend function
#include<iostream.h>
#include<conio.h>
class Abc
{
	int a;
	public:
	void input(int i)
	{
		a=i;
	}
	void output(void)
	{
		cout<<"\nVlaue of A is :"<<a;
	}
	friend Abc  operator ++(Abc t1);
};
Abc operator ++(Abc t1)
{
	Abc temp;
	temp.a = ++ t1.a;
	return temp;
}
void main()
{
	Abc a1,a2,a3;
	clrscr();
	a1.input(10);
	a1.output();

	a2= ++ a1;
	a2.output();

	a3=++ a2;
	a3.output();
	getch();
}