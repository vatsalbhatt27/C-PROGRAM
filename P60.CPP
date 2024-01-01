//which object is max - manipulation of string using operation
#include<iostream.h>
#include<conio.h>
#include<string.h>
class Abc
{
	char * nm;
	int size;
	public:
	Abc(){}
	Abc(char name[])
	{
		size = strlen(name);
		nm=new char[size +1];
		strcpy(nm,name);
	}
	int operator > (Abc t1)
	{
		 return strcmp(nm,t1.nm)>0 ? 1:0;
	}
};
void main()
{
	clrscr();
	Abc a1("a");
	Abc a2("A");
	a1>a2?cout<<"\nFirst string is Gereater than second string ": cout<<"\nSecond string is Gerater than First string";
	getch();
}