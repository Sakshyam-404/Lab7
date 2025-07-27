//Create a class Person and two derived classes Employee and Student, inherited from class Person.
//Now create a class Manager which is derived from two base classes Employee and Student. Show the use of the virtual base class.
#include<iostream>
using namespace std;

class Person{
protected:
string name;
int id;
public:
void getdata(){
    cout<<"Enter name : "<<endl;
    cin>>name;
    cout<<"Enter id : "<<endl;
    cin>>id;
}

void showdata(){
    cout<<"Name : "<<name<<endl;
    cout<<"Id : "<<id<<endl;   

}


};
class Student : virtual public Person{
    protected:
    int roll_no;
    public:
    void getdata(){

        cout<<"Enter your roll no"<<endl;
        cin>>roll_no;
    }
    void showdata(){

        cout<<"Roll no : "<<roll_no<<endl;
    }

};
class Employee : virtual public Person{
    protected:
    int salary;
    public:
    void getdata(){

        cout<<"Enter your salary"<<endl;
        cin>>salary;
    }
    void showdata(){

        cout<<"Salary : "<<salary<<endl;
    }

};
class Manager : public Student, public Employee{
    protected:
    int overtime;
    public:
    void getdata(){
        Person::getdata();
        Student::getdata();
        Employee::getdata();
        cout<<"Enter the overtime"<<endl;
        cin>>overtime;
    }
    void showdata(){
        Person::showdata();
        Student::showdata();
        Employee::showdata();
        cout<<"Overtime : "<<overtime;
    }

};
int main(){
    Manager m;
    m.getdata();
    m.showdata();
}
