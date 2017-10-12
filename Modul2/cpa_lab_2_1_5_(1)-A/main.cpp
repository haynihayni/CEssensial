#include <iostream>

using namespace std;
int main(void) {
int year;
cout << "Enter a year: ";
cin >> year;
if(year%4==0)
    cout<<"Leapyear";
else
    cout<<"common year";
return 0;
}

