//private class with return value
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
	int disp(void)
	{
		return a;
	}
};
void main()
{
	abc a1;
	clrscr();
	a1.input(10);
	cout<<"\nValue of A is :"<<a1.disp();
	getch();;;;;
}