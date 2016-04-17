#include <iostream>

using namespace std;

int main()
{
    int x,y;
    cin>>x;
    for(int i=0;i<x;++i){
        cin>>y;
        y=y%2;
        if(y%2==0){
            cout<<"yes";
        }
        else
            cout<<"no";
    }
    return 0;
}
