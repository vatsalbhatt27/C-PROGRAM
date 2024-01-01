//implicit & explict construct
#include<iostream.h>
#include<conio.h>
#include<string.h>
class abc
{
	int rno;
	char nm[20];
	public:
	abc(){}
	abc(int r,char n[])
	{
		rno=r;
		strcpy (nm,n);
	}
	void disp()
	{
		cout<<"\nRoll No is :"<<rno;
		cout<<"\nName is :"<<nm;
	}
};
void main()
{
	clrscr();
	abc a1(1,"abc");//Implicit
	abc a2=abc(2,"xyz");//explicit

	a1.disp();
	a2.disp();
	getch();
}