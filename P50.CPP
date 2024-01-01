//binary operator overload
#include<iostream.h>
#include<conio.h>
class abc
{
	int a;
	public:
	void input(int i)
	{
		a=i;
	}
	void output (void)
	{
		cout<<"\nValue of A is :"<<a;
	}
	abc operator +(abc t1)
	{
		abc temp;
		temp.a = a + t1.a;
		return temp;
	}
};
void main()
{
	abc a1,a2,a3;
	clrscr();
	a1.input(10);
	a2.input(20);

	a3=a1+ a2;

	a1.output();
	a2.output();
	a3.output();
	getch();
}