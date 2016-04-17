#include<iostream>
#include<math.h>

using namespace std;

int main(){
    float x=2,y=3,z,z1;

    while(x!=y){
            z=(x+y)/2;
            z1=pow(z,4)-19;
            if(z1<0)
                x=z;
            else
                y=z;
    }

    cout<<"Hence the fourth root of 19 is : "<<z;

return 0;
}
