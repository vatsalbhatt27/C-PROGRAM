//nesting of class 2
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
			a3.output1(a);
		}

		class abc2
		{
			public:
			void output1(int a)
			{
				cout<<"\nValue of A is :"<<a;
			}
		};
		abc2 a3;
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
