#include <iostream>
#include <string>
using namespace std;
class Person
{
    public:
        string name;
        int age;
        // Your code here
        string surname;
        string named(void){
            return name;
        }
};
void print(Person* person)
{
    //cout << (person->name) << " is " person->age << " years old" << endl;
}
int main()
{
    Person person;
    person.name = "Harry";
    person.age = 23;
    cout << "Meet " << person.named();
    print(&person);
    // Your code here
    person.surname="Potter";
    cout<<("I'm "+person.name+" "+person.surname);
    return 0;
}
