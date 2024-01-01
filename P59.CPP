//manipulation of string using operator
#include<iostream.h>
#include<conio.h>
#include<string.h>
class Abc
{
	char *nm;
	int size;
	public:
	Abc (){}
	Abc (char name [])
	{
		size = strlen(name);
		nm=new char[size +1];
		strcpy(nm,name);
	}
	void output(void)
	{
		cout<<"\nName is :"<<nm;
	}
	Abc operator + (Abc t1)
	{
		Abc temp;
		int size=strlen(nm) + strlen(t1.nm);
		temp.nm=new char[size +1];
		strcat(temp.nm,nm);
		strcat(temp.nm,t1.nm);
		return temp;
	}
};
void main()
{
	clrscr();
	Abc a1("MUKESH");
	Abc a2(" PATEL");
	Abc a3;
	a3=a1 + a2;
	a1.output();
	a2.output();
	a3.output();
	getch();
}