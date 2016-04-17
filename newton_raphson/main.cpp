#include<iostream>
#include<conio.h>
#include<math.h>

using namespace std;

 float value(float x)
 {
  float y;
  y=pow(x,4)-19;
  return y;
 }
 float diffrentiation(float y)
 {
  float z;
  z=4*pow(y,3);
  return z;
  }
 int main()
 {
  float r=2.5,y,y1,r1;
  for(int i=0;i<10;i++)
  {
   y=value(r);
   y1=diffrentiation(r);
   r=r-y/y1;
   }
   cout<<"\n Fourth root of 19 by Newton Raphson method is : "<<r;
   cout<<"\n Name : T K Sourabh\n Brach : \CSE-B\n SUB : Applied Mathematics Lab\n Enrollment No : 07720802714";
   getch();
   return 0;
  }
