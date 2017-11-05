#include <iostream>
#include <string>
#include <regex>

using namespace std;

int main()
{
    std::string values,temp;
    std::getline(std::cin, values);
    std::string templat;
    std::getline(std::cin, templat);
// Put values into the template
    int p;
    regex pre("(\\b[^,]+\\b)=(\\b[^,]+\\b)"), in_sen("\\[(\\w+)\\]"),t("");
    smatch match,m2;
    while(regex_search(values,match,pre)){
        t="\\["+string(match[1])+"\\]";
        if(regex_search(templat,m2,t)){
            p = templat.find(m2[0]);
            templat.erase(p,m2[0].length());
            templat.insert(p,match[2]);
        }
        else{
            p = values.find(match[0]);
            values.erase(p,match[0].length());
        }
    }

    std::cout << templat << "\n";
    return 0;
}
