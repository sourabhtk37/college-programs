#include<iostream>

using namespace std;

class top{
public :
int a;
void getdata()
{
cout<<"Enter first Number = ";
cin>>a;
}
void putdata()
{
cout<<"\nFirst Number Is = "<<a;
}
};
//First level inheritance
class middle :public top{
    public:
int b;
void square()
{
getdata();
b=a*a;
cout<<"\nSquare Is = "<<b;
}
};

class bottom :public middle{
    public:
int c;
void cube()
{
square();
c=b*a;
cout<<"\n\nCube = "<<c<<"\n\n";
}
};

int main(){
bottom b1;
b1.cube();
}
