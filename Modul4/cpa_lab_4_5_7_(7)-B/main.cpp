#include <iostream>
#include <string>
#include <regex>
using namespace std;

int main()
{
    bool flag=false;
    std::string password,n="Password is valid",m="";
std::getline(std::cin, password);
regex e ("\\d");
regex ex ("(_|[^\\s\\w])");
// manipulate the password here
// and print validation result
if(password.length()<8)
    m+="The password must be 8 characters long\n";
for(int i=0;i<password.length();++i){
    if(password[i]>='A'){
        flag=true;
        break;
    }
}
if(!flag)
    m+="The password must have at least one upper case letter\n";
if(!regex_search(password,e)){
    m+="The password must have at least one digit\n";
    flag=false;
}
if(!regex_search(password,ex))
{
        m+="The password must have at least one special character";
    flag=false;
}
if(flag)
    cout<<n;
else
    cout<<m;
cout<<flag;
    return 0;
}
