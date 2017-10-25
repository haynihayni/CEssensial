#include <iostream>

using namespace std;

int main()
{
    int ar[]={50, 20, 10, 5 ,1};
    int c,m=0;
    cin>>c;
    for(int i=0; m!=c;){
        if(m+ar[i]>c)
        {
            ++i;
            continue;
        }
        else
            m+=ar[i];
        cout<<ar[i]<<' ';
    }
    return 0;
}
