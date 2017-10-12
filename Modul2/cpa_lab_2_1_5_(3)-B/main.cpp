#include <iostream>
using namespace std;
int main(void) {
int sys;
float m, ft, in;
 // Insert your code here
cout<<"Choose metric(0) or imperial(1)";
cin>>sys;
if(sys==1){
    cin>>ft>>in;
    cout<<ft*0.3048 + in*0.0254<<"m";
}
else{
    cin>>m;
    ft=m/0.3048;
    cout<<(int)ft<<"'"<<(ft-(int)ft)*12<<"\"";

}
return 0;
}
