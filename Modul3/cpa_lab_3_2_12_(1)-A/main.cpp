#include <iostream>
using namespace std;
int main(void) {
int vector[] = { 3, -5, 7, 10, -4, 14, 5, 2, -13 };
int n = sizeof(vector) / sizeof(vector[0]);
// Insert your code here
int *m,*temp, nj=0;
m=vector;
temp=m+1;
for(int i=0; i<n;++i){

    if(*m>*temp)
        m=temp;
    ++temp;
}
cout<<*m;
return 0;
}

