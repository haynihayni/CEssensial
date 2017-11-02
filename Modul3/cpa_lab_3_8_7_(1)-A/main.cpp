#include <iostream>
#include <cmath>
using namespace std;
// Insert your functions here
void increment(int &var, int e=-1){
    if(e==-1)
        var++;
    else
        var+=e;
}
void increment(float &var, float e=-1){
    if(e==-1)
        var++;
    else    var+=e;
}
int main(void) {
int intvar = 0;
float floatvar = 1.5;
for(int i = 0; i < 10; i++)
if(i % 2) {
increment(intvar);
increment(floatvar, sqrt(intvar));
}
else {
increment(intvar,i);
increment(floatvar);
}
cout << intvar * floatvar << endl;
return 0;
}
