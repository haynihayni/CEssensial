#include <iostream>
using namespace std;
int main(void) {
double pi4 = 0.;
long n;
cout << "Number of iterations? ";
cin >> n;
int j=0;
for(int i=1;j<n/2;i+=4){
    pi4+=1./i;
    ++j;
}
j=0;
for(int i=3;j<n/2;i+=4){
    pi4-=1./i;
    ++j;
}

cout.precision(20);
cout << "Pi = " << (pi4 * 4.) << endl;
return 0;
}
