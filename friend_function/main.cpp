#include <iostream>

using namespace std;

class b;

class a
	{
	int real,img;
	public:
	void input()
	{
	cout<<"Enter the real part : ";
	cin>>real;
	cout<<"Enter the imaginary part : ";
	cin>>img;
	}
	friend void sum(a,b);
	};

	class b
	{
	int sreal,simg;
	public:
	void input()
	{
	cout<<"Enter the second real part : ";
	cin>>sreal;
	cout<<"Enter the second imaginary part : ";
	cin>>simg;
	}
       friend void sum(a,b);
	};

	void sum(a c1,b c2)
	{cout<<"\n\nThe resultant complex equation is : ";
	cout<<c1.real+c2.sreal<<"+i"<<c1.img+c2.simg;
	}

int main()
{
a c1;
b c2;
c1.input();
c2.input();
sum(c1,c2);
return 0;
}
