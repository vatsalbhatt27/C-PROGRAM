//nesting of class
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
	void disp(void)
	{
		a2.output(a);
	}
	class abc1
	{
		public:
		void output(int a)
		{
			cout<<"\nValue od A is :"<<a;
		}
	};
	abc1 a2;
};
void main()
{
	abc a1;
	clrscr();
	a1.input(10);
	a1.disp();
	getch();
}