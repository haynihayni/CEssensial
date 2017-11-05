#include <iostream>

using namespace std;
class ShopItemOrder{
private:
    string name;
    double price;
    int num;
public:
    void sete(string na, double p, int n){
        name = na;
        price = p;
        num=n;
    }
    string Name(void){
        return name;
    }
    double Price(){
        return price;
    }
    int Num(void){
        return num;
    }
    double Total(){
        return num*price;
    }
    void Print(void){
        cout<<"The name of item "<<name
        <<". Price is "<<price
        <<". Total is "<<price*num;
    }
};
int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
