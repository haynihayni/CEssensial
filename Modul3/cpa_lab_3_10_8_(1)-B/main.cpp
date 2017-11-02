#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main(void) {
int maxball;
int ballsno;
cout << "Max ball number? ";
cin >> maxball;
cout << "How many balls? ";
cin >> ballsno;

srand(time(NULL));
int *rnd,q;
rnd=new int[ballsno];
// Insert your code here
for(int i=0;i<ballsno;++i){

    rnd[i]=(rand()) % maxball + 1;

    for(int j=0; j<i;++j){
        if(rnd[j]==rnd[i]){
            rnd[i]=rand() % maxball + 1;
            j=0;
        }
    }
    cout<<rnd[i] <<" ";
}
return 0;
}
