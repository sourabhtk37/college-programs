#include <iostream>
#include<stdio.h>

using namespace std;

int main()
{
    char a[20];
    int len,sp;
    gets(a);
    for(int i=0;i<20;++i){
        if(a[i]==NULL){
            len=i;
            break;
        }
        if(a[i]==' '){
                sp=i+1;
               }
    }
    a[len]='\0';
            cout<<a[0]<<".";
            for(;sp<len;++sp){
                    cout<<a[sp];
            }
    return 0;
}
