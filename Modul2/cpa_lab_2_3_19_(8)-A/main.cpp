#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int q=1;
    for(int i=1;i<=n;++i){
        q*=i;
    }
    cout<<q;
    return 0;
}
