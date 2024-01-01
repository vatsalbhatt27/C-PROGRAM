//destructor
#include<iostream.h>
#include<conio.h>
class abc
{
	int *a;
	int size;
	public:
	abc (int s)
	{
		size=s;
		a=new int[size];
	}
	void input()
	{
		int i;


		for(i=0;i<size;i++)
		{
			cout<<"\nENter "<<i+1<<"Number :";
			cin>>a[i];
		}
	}
	void disp()
	{
		int i;
		for(i=0;i<size;i++)
		{
			cout<<"\n"<<i+1<<"Number is :"<<a[i];
		}
	}
	~abc()
	{
		cout<<"\n Call Deastructor";
	}
};
void main()
{
	clrscr();
	abc a1(5);
	abc a2(8);
	abc a3(3);

	a1.input();
	a2.input();
	a3.input();

	a1.disp();
	a2.disp();
	a3.disp();
	getch();
}