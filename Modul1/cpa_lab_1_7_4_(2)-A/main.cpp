#include <iostream>


using namespace std;

int main()
{
    float a,b;
    cin>>a>>b;
    if (a-b<0.000001&&b-a<0.000001){
        cout<<"Results are equal (by 0.000001 epsilon)";
    }
    else{
        cout<<"Results are not equal (by 0.000001 epsilon)";

    }
}
