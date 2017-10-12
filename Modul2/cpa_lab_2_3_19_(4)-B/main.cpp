#include <iostream>

using namespace std;

int main()
{
    int n;
    double a=1.;
    cin>>n;
    for(int i=0;i<n;++i){
        a*=1./2.;
    }
    cout.precision(20);
    cout<<fixed<<a;
    return 0;
}
