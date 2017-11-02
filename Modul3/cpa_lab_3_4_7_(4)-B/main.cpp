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
int daysBetween(Date date1, Date date2){
    int dif=dayOfYear(date2)-dayOfYear(date1);
    if(dif<0)
        return -1;
    return dif+365*(date2.year-date1.year)+(date2.year-date1.year)/4;
}
int main(void) {
Date d, d2;
cout << "Enter year month day: ";
cin >> d.year >> d.month >> d.day;
cin >> d2.year >> d2.month >> d2.day;
cout << daysBetween(d,d2) << endl;
return 0;
}
