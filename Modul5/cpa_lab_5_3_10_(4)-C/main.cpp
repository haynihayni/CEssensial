#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Gym {
public:
    Gym(int id, int capacity, string name);
    Gym();
    void printStatus();
    void reserveSeats(int number_ob_seats);
    void canceReservations();
    int getId() { return id; }

    int id;
    int capacity;
    string name;
};
Gym::Gym()
{
    id = 0; capacity = 0; name = "";
}
Gym::Gym(int id, int capacity, string name)
{
// Save data to members according to limits
    this->id=id;
    this->name=name;
    this->capacity=capacity;
}
void Gym::reserveSeats(int number_ob_seats)
{
// try to add reservations and return 'true' on success
// keep the limits in mind
    capacity+=number_ob_seats;
    printStatus();
}
void Gym::canceReservations()
{
// try to cancel reservations and return 'true' on success
// keep the limits in mind
    capacity=0;

}
void Gym::printStatus()
{
// print report here
    cout<<"Member "<<id<<" : "<<name<<", subscription valid for "<<capacity<<" months"<<endl;

}
int main() {
    Gym booking[10],*pz;
    pz=booking;

// Use this to have some starting value
// booking[0] = Gym(1, 400, 0);
// booking[0].printStatus();
    std::string command = "";
    int p=0,index=0,id;
    bool flag=false;
    while (command != "quit")
    {
        std::cout << "What would you like to do?: ";
        getline(cin,command);
        // handle the command
        if(command.find("create")!=-1){
            if(index<10){
                p=command.find(" ");
                id=atoi(command.substr(p,command.find(" ",p+1)-p).c_str());
                for(int i=0;i<index;++i){
                    if(booking[i].getId()==id){
                        flag=true;
                        break;
                    }
                }

                if(flag)
                    continue;
                string q=command.substr(command.find(" ",p+1)+1);

                booking[index]=Gym(id,0,q);
                booking[index].printStatus();

                ++index;
            }
        }
        if(command.find("delete")!=-1){
            int t;
            p=command.find(" ");
            id=atoi(command.substr(p).c_str());
            for(int i=0;i<index;++i){
                if(booking[i].getId()==id){
                    flag=true;
                    t=i;
                    break;
                }
            }
            if(flag){

                delete &booking[t];//atoi(command.substr(p,command.find(" ",p+1)-command.find(" ")).c_str())
            }
            else{
                cout<<"Cannot perform this operation: flight "<<id<<" not found";
            }



        }
        if(command.find("extend")!=-1){
            int t;
            p=command.find(" ");
            id=atoi(command.substr(p,command.find(" ",p+1)-p).c_str());
            for(int i=0;i<index;++i){
                if(booking[i].getId()==id){
                    flag=true;
                    t=i;
                    break;
                }
            }
            if(flag){
                string q=command.substr(command.find(" ",p+1)+1);

                booking[t].reserveSeats(atoi(q.c_str()));

               // booking[t].printStatus();
            }
            else{
                cout<<"Not found";
            }

        }
        if(command.find("cancel")!=-1){
            int t;
            p=command.find(" ");
            id=atoi(command.substr(p).c_str());
            for(int i=0;i<index;++i){
                if(booking[i].getId()==id){
                    flag=true;
                    t=i;
                    break;
                }
            }
            if(flag){
                booking[t].canceReservations();
                booking[t].printStatus();
            }
            else{
                cout<<"Not found\n";
            }
        }
    }
    return 0;
}
