#include <iostream>

using namespace std;

int main()
{
    int sum=0;
    //cout << "Hello world!" << endl;
    for(int i=1;i<1000;++i){
        if(i%3==0||i%5==0){
            sum+=i;
        }
    }
    cout<<"The sum of the natural numbers which are multiple of 3 and 5 is :"<<sum;
    return 0;
}
