#include<iostream>
#include<math.h>

using namespace std;

 float value( float x){
     float y;
     y=pow(x,4)-19;
     return y;
}

int main(){
      float x1=2.0,x2=3.0,x3,y;
      int i;
  for(i=0;i<9;i++)
  {
   x3=(x1+x2)/2;
   y=pow(x3,4)-19;
   if(y<0)
    x1=(x3+x2)/2;
   else
    x2=(x1+x3)/2;
   }
   cout<<"\n The value of fourth root of 19 by bisection method is : "<<x3;
   cout<<"\n Name : T K Sourabh\n Branch : \CSE-B\n SUB : Applied Mathematics Lab\n Enrollment No : 07720802714";
 }
