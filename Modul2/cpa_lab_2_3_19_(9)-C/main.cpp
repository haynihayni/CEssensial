#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    if(n%2){
    int c=1;
    int dif=4;
    for(int i=0;i<n/2;++i){
        c+=dif;
        dif+=8;
    }
    cout<<c;
    }
    else
        cout << "Number must be odd";
    return 0;
}
