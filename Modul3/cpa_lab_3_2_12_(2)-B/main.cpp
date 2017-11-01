#include <iostream>
using namespace std;
int main(void) {
int matrix[10][10] = { };
// Insert your code here
int *a;
a=matrix[0];
for(int i = 0; i < 10; i++) {
for(int j = 0; j < 10; j++) {
        *a=(i+1)*(j+1);
        a++;
cout.width(4);
cout << matrix[i][j];
}
cout << endl;
}
return 0;
}
