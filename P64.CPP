//hirarechical inheritance
#include<iostream.h>
#include<conio.h>
class A
{
	public:
		void dispA()
		{
			cout<<"\nClass A";
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
class C :public A
{
	public:
		void dispC()
		{
			cout<<"\nClass C ";
		}
};
void main()
{
	B b1;
	C c1;
	clrscr();
	b1.dispA();
	b1.dispB();
	c1.dispA();
	c1.dispC();
	getch();

}