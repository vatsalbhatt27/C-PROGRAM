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
	abc operator -(abc t1)
	{
		abc temp;
		temp.a = a - t1.a;
		return temp;
	}
	abc operator *(abc t1)
	{
		abc temp;
		temp.a = a * t1.a;
		return temp;
	}
	abc operator /(abc t1)
	{
		abc temp;
		temp.a = a / t1.a;
		return temp;
	}
};
void main()
{
	abc a1,a2,a3,a4,a5,a6;
	clrscr();
	a1.input(10);
	a2.input(20);

	a3=a1+ a2;
	a4=a1-a2;
	a5=a1*a2;
	a6=a1/a2;

	a1.output();
	a2.output();
	a3.output();
	a4.output();
	a5.output();
	a6.output();
	getch();
}