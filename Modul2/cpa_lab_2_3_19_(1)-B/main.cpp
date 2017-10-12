#include <iostream>

using namespace std;

int main()
{
    int c0,i=0;
    cin>>c0;

    while(c0!=1){

        if(c0%2){
            c0=3*c0+1;
        }
        else
            c0/=2;
        cout<<c0<<endl;
    ++i;
    }
    cout<<"steps = "<< i;
    return 0;
}
