#include <iostream>

using namespace std;

int main()
{
    struct TIME{
        int hour;
        int minute;
    };
    int ev;
    TIME time;
    cin>>time.hour>>time.minute;
    if(time.hour>=24||time.hour<0){
        cout<<"Hours must be in range [0;23]";
        time.hour=0;
    }
    if(time.minute<0||time.minute>60){
        cout<<"Minutes must be in range [0;59]";
        time.minute=0;
    }
    cin>>ev;
    time.hour=((ev+time.minute)/60+time.hour)%24;
    time.minute=(ev+time.minute)%60;
    cout<<time.hour<<":"<<time.minute;

    return 0;
}
