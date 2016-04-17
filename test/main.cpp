#include <iostream>
using namespace std;

int main()
{
	int i;
	cin>>i;

   // cout << "Hello World!" << endl;
   for(int j=1;j<=i;++j){
        if(i%3==0||i%5==0){
   	if(j%3==0&&j%5==0)
   	  cout<<"FizzBuzz\n";
   	else if(j%5==0)
   	  cout<<"Buzz\n";

   	else if(j%3==0)
   	  cout<<"Fizz\n";
   	else
   	  cout<<j<<endl;
   }}

    return 0;
}
