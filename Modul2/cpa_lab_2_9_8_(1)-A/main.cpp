#include <iostream>
using namespace std;
int main(void) {
int vector1[7] = {4, 7, 2, 8, 1, 3, 0};
int vector2[7];
// Insert your code here
for(int i = 0; i < 7; i++)
{
 vector2[i]=vector1[(i+sizeof(vector1)-1)%7];

cout << vector2[i] << ' ';
}
return 0;
}
