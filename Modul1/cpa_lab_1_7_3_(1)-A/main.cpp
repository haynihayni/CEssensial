#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
 cout<<"Put these values into your code:\n";
   float a,b,c,d,e;
   cin>>a>>b>>c>>d>>e;

   cout<<a<<endl
   <<fixed<<setprecision(2)<<b<<endl
   <<setprecision(6)<<c<<endl
   <<setprecision(2)<<d<<endl
   <<(int)e;

    return 0;
}
