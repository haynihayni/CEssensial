#include <iostream>
#include <ctime>
struct Date {
int year;
int month;
int day;
};
Date today(void) {
// Insert your code here

time_t t = time(NULL);

tm tl = *localtime(&t);
Date dif;
dif.year=tl.tm_year+1900;
dif.month=(tl.tm_mon)+1;
dif.day=(tl.tm_mday);

return dif;
}
int main(void) {
Date t = today();
std::cout << t.year << "-" << t.month << "-" << t.day << std::endl;
return 0;
}
