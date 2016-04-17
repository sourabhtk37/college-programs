#include <iostream.h>

using namespace std;

int main()
{
   int z,x=1,y=2,sum;
   sum=x+y;
   while(y<4000000){
        z=x+y;
        sum+=z;
        x=y;
        y=z;
   }
   cout<<"The sum is : "<<sum;
   return 0;
}


