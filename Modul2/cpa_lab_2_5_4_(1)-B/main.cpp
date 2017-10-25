#include <iostream>

using namespace std;

int main()
{
    int c=1,a,b;
    while(c){
        cout<<"\nMENU:\n0 - exit\n1 - addition\n2 - subtraction\n3 - multiplication\n4 - division\nYour choice?\n";
        cin>>c;
        switch(c){
        case 0: break;

        case 1:
            cin>>a>>b;
            cout<<a+b;break;
        case 2:
            cin>>a>>b;
            cout<<a-b;break;
        case 3:
            cin>>a>>b;
            cout<<a*b;break;
        case 4:
            cin>>a>>b;
            if (b)
                cout<<a/b;break;
        }
    }
    return 0;
}
