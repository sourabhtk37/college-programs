#include <iostream>
#include<math.h>

using namespace std;

int main()
{
    double a=0.2,b=1.4,y,yn,t;

    y=sin(a)-log(a)+exp(a);
    yn=sin(a)-log(b)+exp(b);
    t=y+yn;

    for(double i=0.3;i<=1.3;i+=0.1){
        y=sin(i)-log(i)+exp(i);
        t+=y*2;
    }

    cout<<"\nThe value of given integral using Trapezoidal rule is :"<<(t*0.1)/2<<endl;

    for(double j=0.3;j<=1.3;j+=0.2){
        y=sin(j)-log(j)+exp(j);
        t+=y*4;
    }

    for(double k=0.4;k<=1.2;k+=0.2){
        y=sin(k)-log(k)+exp(k);
        t+=y*2;
    }
    cout<<"\n\nThe value of given integral using simpson's rule is :"<<(t*0.1)/3<<endl;
    return 0;
}
