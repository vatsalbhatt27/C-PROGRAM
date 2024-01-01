//constructot with deafult argument
#include<iostream.h>
#include<conio.h>
class abc
{
	int a,b;
	public:
	abc(int i=10,int j=20)
	{
		a=i;
		b=j;
	}
	void disp()
	{
		cout<<"\nvalue of A is :"<<a<<" B is :"<<b;
	}
};
void main()
{
	clrscr();
	abc a1;
	abc a2(20);
	abc a3(100,200);

	a1.disp();
	a2.disp();
	a3.disp();
	getch();
}