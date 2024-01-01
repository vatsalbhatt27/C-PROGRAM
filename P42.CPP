//parameterized constructor
#include<iostream.h>
#include<conio.h>
class abc
{
	public:
	abc()
	{
		cout<<"Welcome ";
	}
	abc (char str[])
	{
		cout<<str;
	}
};
void main()
{
	clrscr();
	abc a1;
	abc a2("MUKESH");
	getch();
}