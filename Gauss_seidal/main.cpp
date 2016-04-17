#include<stdio.h>
#include<conio.h>

float X,Y,Z;

 void compute(float xx,float yy,float zz,int count){
   if(count>5)
   {
    return ;
   }

  X=(17-yy+2*zz)/20;
  printf("x%d= %f",count,X);
  Y=(-18+zz-3*X)/20;
  printf("\ty%d= %f",count,Y);
  Z=(25+3*Y-2*X)/20;
  printf("\tz%d= %f",count,Z);

  count++;

  compute(X,Y,Z,count);

  printf("\n\n");
}

int main()
{
  int a1=3,b1=20,c1=-1 ;
  int a2=20,b2=1,c2=-2;
  int a3=2,b3=-3,c3=20;

  printf("\n eq1: 3x+2y-z=-18\n 20x+y-2z=17\n2x-3y+20z=25\n\n");

  printf("\n FINDING THE EQN FOR X");
  if(a1>(a2+a3))
  {
   printf("\n equation 1 for x");
  }

   if(a2>(a1+a3))
  {
   printf("\n equation 2 for x");
  }
   if(a3>(a2+a1))
  {
   printf("\n equation 3 for x");
  }

  printf("\n FINDING THE EQN FOR Y");
  if(b1>(b2+b3))
  {
   printf("\n equation 1 for y");
  }

   if(b2>(b1+b3))
  {
   printf("\n equation 2 for y");
  }
   if(b3>(b2+b1))
  {
   printf("\n equation 3 for y");
  }

   printf("\n FINDING THE EQN FOR Z");
  if(c1>(c2+c3))
  {
   printf("\n equation 1 for z");
  }

   if(c2>(c1+c3))
  {
   printf("\n equation 2 for z");
  }
   if(c3>(c2+c1))
  {
   printf("\n equation 3 for z");
  }

compute(0.0,0.0,0.0,0);

return 0;
}
