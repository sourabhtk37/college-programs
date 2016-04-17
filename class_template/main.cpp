#include <iostream>
using namespace std;

// class template declaration part
template <class _data_type>
class Test
{
public:
// constructor
Test();
// destructor
~Test();
// method
_data_type Data(_data_type);
};

template <class _data_type>
_data_type Test<_data_type>::Data(_data_type Var0)
{return Var0;}

// a class template definition part
// should be in the same header file with the class template declaration
// constructor
template <class _data_type>
Test<_data_type>::Test()
{cout<<"Constructor, allocate..."<<endl;}

// destructor
template <class _data_type>
Test<_data_type>::~Test()
{cout<<"Destructor, deallocate..."<<endl;}

// the main program
int main(void)
{
Test<int> Var1;
Test<double> Var2;
Test<char> Var3;
Test<char*> Var4;

cout<<"\nOne template fits all data type..."<<endl;
cout<<"Var1, int = "<<Var1.Data(100)<<endl;
cout<<"Var2, double = "<<Var2.Data(1.234)<<endl;
cout<<"Var3, char = "<<Var3.Data('K')<<endl;
cout<<"Var4, char* = "<<Var4.Data("The class template")<<endl<<endl;
return 0;
}
