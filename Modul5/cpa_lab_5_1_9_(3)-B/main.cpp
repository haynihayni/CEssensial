#include <iostream>

using namespace std;

class AdHocSquare
{
public:
    AdHocSquare(double side);
    void set_side(double side);
    double get_area();
private:
    double side;
};
AdHocSquare::AdHocSquare(double s){
    if(s>0)
        side=s;
    else
        side=1;
}
void AdHocSquare::set_side(double s){
    if(s>0)
        side=s;
}
double AdHocSquare::get_area(){
    return 4*side;
}
class LazySquare
{
public:
    LazySquare(double side);
    void set_side(double side);
    double get_area();
private:
    double side;
    double area;
    bool side_changed;
};
LazySquare::LazySquare(double s){
    if(s>0)
        side=s;
    else
        side=1;
    area=4*side;
    side_changed=false;
}
void LazySquare::set_side(double s){
    if(s>0){
        side=s;
        side_changed=true;
    }
}
double LazySquare::get_area(){
    if(side_changed){
        area=4*side;
        side_changed=false;
    }
    return area;
}
int main()
{

    return 0;
}
