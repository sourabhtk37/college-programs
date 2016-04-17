#include <iostream>
#include<stdio.h>
using namespace std;

int main()
{
    int i,n,flag=0,k=2,temp;
    cin>>n;
    temp=n;
    for(k=0;k<100;k++){
            --n;
      for(i=2;i<=n/2;++i)
      {
          if(n%i==0){
                flag=1;
                break;
        }
       }
     if (flag==0 && n>1){
        cout<<n<<" ";
        break;
    }
    }

    n=temp;
flag=0;
    while(1){
            ++n;
      for(i=2;i<=n/2;++i)
      {
          if(n%i==0){
                flag=1;
                break;
        }
       }
     if (flag==0 && n>1){
        cout<<n<<" ";break;
    }
    }
       return 0;
}
