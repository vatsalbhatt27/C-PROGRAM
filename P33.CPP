//macking outline function inline
#include<iostream.h>
#include<conio.h>
class abc
{
	int a;
	public:
	void input(void);
	void output(void);
};
inline void abc::input(void)
{
	cout<<"\nENter number :";
	cin>>a;
}
inline void abc::output(void)
{
	input();
	cout<<"\nNumber is :"<<a;
}
void main()
{
	abc a1;
	clrscr();
	a1.output();
	getch();
}