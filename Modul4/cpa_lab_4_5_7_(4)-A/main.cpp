#include <iostream>
#include <string>
#include <sstream>
#include <vector>

using namespace std;

int main()
{
string str;
std::getline(cin,str);
vector<string> array;
stringstream ss(str);
string temp;
while (ss >> temp)
    array.push_back(temp);

for(int i=0;i<array[0].length();++i){
    for(int j=0; j<array[1].length();++j ){

        if(array[0][i]==array[1][j]){
            array[1]=array[1].erase(j,1);
        }
    }
}
if(array[1].empty())
    cout<<"anagrams";
else
    cout<<"not anagrams";
    return 0;
}
