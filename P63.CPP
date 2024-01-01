//multi-level inheritance
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
			cout<<"\nClass B";
		}
};
class C : public B
{
	public :
		void dispC()
		{
			cout<<"\nClass C ";
		}
};
void main()
{
	C c1;
	clrscr();
	c1.dispA();
	c1.dispB();
	c1.dispC();
	getch();
}