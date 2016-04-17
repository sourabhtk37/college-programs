#include<iostream>

using namespace std;

class A     //Base class
{
public:
int l;
void len()
{
cout<<"\nLength = ";
cin>>l;
}
};
class B :public A   //Inherits property of class A
{
public:
int b,c;
void lb()
{
len();
cout<<"\nBreadth = ";
cin>>b;
c=b*l;
}
};

class C
{
public:
int h;
void height()
{
cout<<"\nHeight = ";
cin>>h;
}
};

//Hybrid Inheritance Level
class D:public B,public C
{
public:
int res;

void result()
{
lb();
height();
res=h*c;
cout<<"\nResult (l*b*h) = "<<res;
}
};

int main()
{
D d1;
d1.result();
}
