//Create a polymorphic class Vehicle and create other derived classes Bus, Car, and Bike from Vehicle.
// Illustrate RTTI by the use of dynamic_cast and typeid operators in this program.

#include<iostream>
#include<typeinfo>
using namespace std;
class Vehicle{
    protected:
    int vec_no;
    public:
    void get_no(){
        cout<<"Enter the vehicle number"<<endl;
        cin>>vec_no;
    }
    void show_no(){
        cout<<"Vehicle number : "<<vec_no<<endl;
    }
    virtual void compname(){};

};
class Bus : public Vehicle{
    public:
    void compname(){
        cout<<"Types of the bus"<<
        " Volvo"<<endl<<
        "Tata"<<endl;
    }

};
class Car : public Vehicle{
    public:
    void compname(){
        cout<<"Types of the bus"<<
        " Land Cruiser"<<endl<<
        "Toyota Hilux"<<endl;
    }

};
class Bike : public Vehicle{
    public:
    void compname(){
        cout<<"Types of the bus"<<
        " R15"<<endl<<
        "KTM"<<endl;
    }

};
int main(){
    Vehicle *v[4];
    Vehicle sam;
    sam.get_no();
    sam.show_no();


    Bus b;
    Car c;
    Bike Bi;
    v[0]=&b;
    v[1]=&c;
    v[2]=&Bi;
    for(int i=0; i<3; i++){ 
    cout<<typeid(*v[i]).name()<<endl;
    }
    //dyanmic casting
   v[4] =dynamic_cast<Vehicle*>(v[0]); //bus to bi
    cout<<typeid(*v[4]).name();
    


}
