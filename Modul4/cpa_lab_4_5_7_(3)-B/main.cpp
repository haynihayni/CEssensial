#include <iostream>
#include <string>
#include <vector>
#include <sstream>
using namespace std;
string lower(string sen){
    for(int i=0; i<sen.length();++i){
        sen[i]=sen[i]+'a'-'A';
    }
    return sen;
}
string replaceall(string mai,string slave){
   std::string str = mai;
   std::string pattern = slave;

   std::string::size_type i = str.find(pattern);
   while (i != std::string::npos) {
     str.erase(i, pattern.length());
     i = str.find(pattern, i);
   }
   return str;
}

int main()
{

    std::string stop_words;
    std::string sentence;

std::getline(std::cin, stop_words);
std::getline(std::cin, sentence);
// remove stop_words from sentence here
sentence=tolower(sentence);
string temp=sentence, word="";
int pre=0, post=stop_words.find(',',pre);
int i=0;
word=stop_words;
while(true){
        if(pre==string::npos){
         break;
        }
    stop_words=stop_words.substr(pre+i,post-pre-i);

    sentence=replaceall(sentence,stop_words);
        cout<<stop_words<<endl;
    stop_words=word;
    i=1;
    pre=post, post=stop_words.find(',',pre+1);
}


std::cout << sentence << "\n";
    return 0;
}
