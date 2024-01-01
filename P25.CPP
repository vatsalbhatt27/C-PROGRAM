//private class
#include<iostream.h>
#include<conio.h>
class abc
{
	int a; //member
	public:
	void input(int i)//formal parameter
	{
		a=i;
	}
	void disp(void)
	{
		cout<<"\nValue of A is:"<<a;
	}
};
void main()
{
	abc a1;
	clrscr();
	a1.input(10);
	a1.disp();
	getch();
}
