#include <iostream>
using namespace std;
struct Date {
int year;
int month;
int day;
};
bool isLeap(int year) {
if(year%4==0||year%100==0||year%400==0)
return true;
return false;
}
int monthLength(int year, int month) {
switch(month){
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12: return 31;
    case 2:
        if(isLeap(year))
            return 29;
        return 28;
    case 4:
    case 6:
    case 9:
    case 11: return 30;
}
}
int dayOfYear(Date date) {
// Insert your code here
int d=0;
for(int i=1;i<date.month;++i){
    d+=monthLength(date.year,i);
}
return d+date.day;
}
int main(void) {
Date d;
cout << "Enter year month day: ";
cin >> d.year >> d.month >> d.day;
cout << dayOfYear(d) << endl;
return 0;
}
