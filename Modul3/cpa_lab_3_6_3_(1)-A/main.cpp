#include <iostream>
using namespace std;
// Insert your function here
void increment(int &v, int e=-2){
    if(e==-2)
        v++;
    else v+=e;
}
int main(void) {
int var = 0;
for(int i = 0; i < 10; i++)
if(i % 2)
increment(var);
else
increment(var,i);
cout << var << endl;
return 0;
}
