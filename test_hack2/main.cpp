#include <iostream>
#include<stdio.h>

using namespace std;
char a[100];

int main()
{int i;
    gets(a);
    int x;
 for( i=0;i<100;++i){
        if(a[i]==NULL){
            a[i]='\0';
            break;
        }
}
for(i=0;i<100;++i){
    cout<<a[i];
}
i=99;
  for(;i>=0;--i){
        if(a[i]==' '){
            x=i+1;
    for(x;a[x]!=' '||a[x]!=NULL;++x){
    cout<<a[x];
    }
        }
    }
    return 0;
}
