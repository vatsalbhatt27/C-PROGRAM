//multiple inheritance
#include<iostream.h>
#include<conio.h>
class A
{
	public:
		void dispA(void)
		{
			cout<<"\nClass A ";
		}
};
class B
{
	public:
		void dispB ()
		{
			cout<<"\nClass B ";
		}
};
class C : public A ,public B
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