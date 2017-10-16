#include <iostream>
using namespace std;
int main(void) {
    int n;
    if(n<1){
        cout<<"The isn't rigth";
        return 1;
    }
    cin>>n;
cout << '+';
for(int i = 0; i < n; i++)
cout << '-';
cout << '+' << endl;
for(int i = 0; i < n; i++) {
cout << '|';
for(int j = 0; j < n; j++)
cout << ' ';
cout << '|' << endl;
}
cout << '+';
for(int i = 0; i < n; i++)
cout << '-';
cout << '+' << endl;
return 0;
}
