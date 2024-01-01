//memory  allocation for object
#include<iostream.h>
#include<conio.h>
class abc
{
	int a[10];
	public:
	void input(void)
	{
		int i;
		for(i=0;i<=9;i++)
		{
			cout<<"\nEnter number :";
			cin>>a[i];
		}
	}
	void output(void)
	{
		int i;
		for(i=0;i<=9;i++)
		{
			cout<<"\nNumber is  :"<<a[i];
		}
	}
};
void main()
{
	abc a1;
	clrscr();
	a1.input();
	a1.output();
	cout<<"\nsize of an object is :"<<sizeof(a1);
	getch();
}