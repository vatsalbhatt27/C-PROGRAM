//public class
#include<iostream.h>
#include<conio.h>
class abc
{
	public:
	int a;
	void disp(void)
	{
		cout<<"\nValue of A is :"<<a;
	}
};
void main()
{
	abc a1;
	clrscr();
	a1.a=10;
	a1.disp();
	getch();
}