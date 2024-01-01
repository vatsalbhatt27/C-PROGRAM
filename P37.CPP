//array of objects
#include<iostream.h>
#include<conio.h>
class abc
{
	int a;
	public:
	void input(void)
	{
		cout<<"\nEnter Value of A :";
		cin>>a;
	}
	void output(void)
	{
		cout<<"\nVAlue of A is :"<<a;
	}
};
void main()
{
	abc a1[3];
	int i;
	clrscr();
	for (i=0;i<=2;i++)
	{
		a1[i].input();
	}
	for(i=0;i<=2;i++)
	{
		a1[i].output();
	}
	getch();
}