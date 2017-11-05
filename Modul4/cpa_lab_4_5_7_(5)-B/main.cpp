#include <iostream>
#include <string>
#include <regex>

using namespace std;

int main()
{
    std::string pattern;
std::getline(std::cin, pattern);
regex e("[a-z]");

pattern=regex_replace(pattern,e,"[a-zB-CE-Z]");

e="D";
pattern=regex_replace(pattern,e,"\\d");

e="A";
pattern=regex_replace(pattern,e,"[a-zA-Z]");

e="\\?";
pattern=regex_replace(pattern,e,"[\\w|\\W]{1}");

std::string sentence;
std::getline(std::cin, sentence);
// match pattern against sentence
e=pattern;
smatch match;
while(regex_search(sentence,match,e)){
    cout<<match[0]<<endl;
    sentence.erase(sentence.find(match[0]),1);
}
    return 0;
}
