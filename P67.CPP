//constructor in drived class
#include<iostream.h>
#include<conio.h>
class A
{
	int a;
	public:
		A(int i)
		{
			a = i;
		}
		void dispA()
		{
			cout<<"\nValue of A is :"<<a;
		}
};
class B : public A
{
	int b;
	public:
		B(int i,int j) : A (i)
		{
			b = j;
		}
		void dispB()
		{
			cout<<"\nValue of B is :"<<b;
		}
};
void main()
{
	B b1(10,20);
	clrscr();
	b1.dispA();
	b1.dispB();
	getch();
}