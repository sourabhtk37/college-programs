#include <iostream>
using namespace std;
class B
{
    public:
       void virtual display()
         { cout<<"Content of base class.\n"; }
};

class D : public B
{
    public:
       void display()
         { cout<<"Content of derived class.\n"; }
};

int main()
{
    B obj;
    B *b;
    b=&obj;

    b->display();

    D d;
    b = &d;
       /* Address of object d in pointer variable */
    b->display();
    return 0;
}
