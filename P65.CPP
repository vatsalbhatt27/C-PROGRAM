//hybried inheritance
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
class B : public A
{
	public:
		void dispB()
		{
			cout<<"\nClass B ";
		}
};
class C
{
	public:
		void dispC()
		{
			cout<<"\nClass C ";
		}
};
class D : public B,public C
{
	public:
		void dispD()
		{
			cout<<"\nClass D ";
		}
};
void main()
{
	clrscr();
	D d1;
	d1.dispA();
	d1.dispB();
	d1.dispC();
	d1.dispD();
	getch();
}