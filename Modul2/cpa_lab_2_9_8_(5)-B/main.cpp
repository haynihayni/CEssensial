#include <iostream>
using namespace std;
int main(void) {
double matrix[][4] = {
{ 1, 2, 3, 4 },
{ 2, 2, 3, 1 },
{ 3, 3, 3, 2 },
{ 4, 1, 2, 4 } };
int n = sizeof(matrix[0]) / sizeof(matrix[0][0]);
bool issymmetric = true;
// Insert your code here
for(int j=0;j<n;++j){
    for(int i=0;i<n;++i){
        if(matrix[i][j]!=matrix[j][i]){
            issymmetric=false;
            break;
        }
    }
}
if(issymmetric)
cout << "The matrix is symmetric" << endl;
else
cout << "The matrix is not symmetric" << endl;
return 0;
}
