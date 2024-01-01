//call by reference
#include<iostream.h>
#include<conio.h>

void swap(int*,int*); //function prototype
void main()
{
	int a=10,b=20;
	clrscr();
	cout<<"Before swap:"<<endl;
	cout<<"\nValue of A is :"<<a;
	cout<<"\nValue of B is :"<<b;

	swap(&a,&b); //function calling(a and b are actual Argument)

	cout<<"\nAfter swap:"<<endl;
	cout<<"\nValue of A is :"<<a;
	cout<<"\nValue os A is :"<<b;
	getch();
}
void swap(int*a,int*b)//function defination (a nd b are formal Argument)
{
	int c;
	c=*a;
	*a=*b;
	*b=c;
}