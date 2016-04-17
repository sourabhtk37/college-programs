#include <iostream>

using namespace std;

class b;

class a
	{
	int x;
	public:
	void input()
	{
	cout<<"Enter the value of x: ";
	cin>>x;
	}
	friend void sum(a,b);
	};

	class b
	{
	int y;
	public:
	void input()
	{
	cout<<"Enter the value of y : ";
	cin>>y;
	}
       friend void sum(a,b);
	};

	void sum(a c1,b c2)
	{cout<<"\n\nThe sum is : ";
	cout<<c1.x+c2.y;
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
