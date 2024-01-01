//default argument
#include<iostream.h>
#include<conio.h>

inline int sum(int a=10,int b=20,int c=30,int d=40)
{
	return a+b+c+d;
}
void main()
{
      clrscr();
      cout<<"\nTotal is :"<<sum();
      cout<<"\nTotal is :"<<sum(1);
      cout<<"\nTotal is :"<<sum(1,2);
      cout<<"\nTotal is :"<<sum(1,2,3);
      cout<<"\nTotal is :"<<sum(1,2,3,4);
      getch();
}