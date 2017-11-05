#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class FlightBooking {
public:
    FlightBooking(int id, int capacity, int reserved);
    FlightBooking();
    void printStatus();
    bool reserveSeats(int number_ob_seats);
    bool canceReservations(int number_ob_seats);
    int getId() { return id; }
    ~FlightBooking(){
        delete &id;
        delete &capacity;
        delete &reserved;
    }
private:
    int id;
    int capacity;
    int reserved;
};
FlightBooking::FlightBooking()
{
    id = 0; capacity = 0; reserved = 0;
}
FlightBooking::FlightBooking(int id, int capacity, int reserved)
{
// Save data to members according to limits
    this->id=id;
    if(reserved<0)
        this->reserved=0;
    if(reserved*100/capacity>105)
        this->reserved=105*capacity/100;
    else
        this->reserved=reserved;
    this->capacity=capacity;
}
bool FlightBooking::reserveSeats(int number_ob_seats)
{
// try to add reservations and return 'true' on success
// keep the limits in mind

    if((reserved+number_ob_seats)*100/capacity>105)
        return false;
    reserved+=number_ob_seats;
    return true;
}
bool FlightBooking::canceReservations(int number_ob_seats)
{
// try to cancel reservations and return 'true' on success
// keep the limits in mind
    if(reserved<number_ob_seats)
        return false;

        reserved-=number_ob_seats;
    return true;
}
void FlightBooking::printStatus()
{
// print report here
    cout<<"Flight "<<id<<" : "<<reserved<<"\\"<<capacity<<" ("<<reserved*100/capacity<<"%) seats taken"<<endl;
}
int main() {
    FlightBooking booking[10],*pz;
    pz=booking;

// Use this to have some starting value
// booking[0] = FlightBooking(1, 400, 0);
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
                id=atoi(command.substr(p,command.find(" ",p+1)-command.find(" ")).c_str());
                for(int i=0;i<index;++i){
                    if(booking[i].getId()==id){
                        flag=true;
                        break;
                    }
                }

                if(flag)
                    continue;

                booking[index]=FlightBooking(id,
                                             atoi(command.substr(command.find(" ",p+1),
                                                                 command.find("\n")-command.find(" ",p+1)).c_str()),0);
                booking[index].printStatus();

                ++index;
            }
        }
        if(command.find("delete")!=-1){
            int t;
            p=command.find(" ");
            id=atoi(command.substr(p,command.find("\n")-p).c_str());
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
        if(command.find("add")!=-1){
            int t;
            p=command.find(" ");
            id=atoi(command.substr(p,command.find("\n")-p).c_str());
            for(int i=0;i<index;++i){
                if(booking[i].getId()==id){
                    flag=true;
                    t=i;
                    break;
                }
            }
            if(flag){
                if(!booking[t].reserveSeats(atoi(command.substr(command.find(" ",p+1),
                                                                 command.find("\n")-command.find(" ",p+1)).c_str()))){
                    cout<<"Cannot perform this operation"<<endl;
                }
                else
                    booking[t].printStatus();
            }
            else{
                cout<<"Not found";
            }

        }
        if(command.find("cancel")!=-1){
            int t;
            p=command.find(" ");
            id=atoi(command.substr(p,command.find("\n")-p).c_str());
            for(int i=0;i<index;++i){
                if(booking[i].getId()==id){
                    flag=true;
                    t=i;
                    break;
                }
            }
            if(flag){
                if(!booking[t].canceReservations(atoi(command.substr(command.find(" ",p+1),
                                                                 command.find("\n")-command.find(" ",p+1)).c_str()))){
                    cout<<"Cannot perform this operation"<<endl;
                }
                else
                    booking[t].printStatus();
            }
            else{
                cout<<"Not found\n";
            }
        }
    }
    return 0;
}
