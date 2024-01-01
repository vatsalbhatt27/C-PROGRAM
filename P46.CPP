//dynamic initialization of object
#include<iostream.h>
#include<conio.h>
class abc
{
	int no;
	public:
	abc(){}
	abc(int n)
	{
		no=n;
	}
	int add(void)
	{
		return no*2;
	}
	void disp()
	{
		cout<<"\nNumber is :"<<no;
	}
};
void main()
{
	int n;
	clrscr();
	cout<<"\nEnter Number :";
	cin>>n;

	abc a1(n);
	abc a2(a1.add());

	a1.disp();
	a2.disp();
	getch();
}