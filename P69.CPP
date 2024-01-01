//containership
#include<iostream.h>
#include<conio.h>
class A
{
	public:
	void dispA()
	{
		cout<<"\nClass A ";
	}
};
class B
{
	A a1;
	public:
	void dispB()
	{
		a1.dispA();
		cout<<"\nClass B ";
	}
};
void main()
{
	clrscr();
	B b1;
	b1.dispB();
	getch();
}