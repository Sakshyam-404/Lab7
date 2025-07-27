//Write a program with an abstract class Student and create derive classes Engineering, Medicine and Science from base class Student.
// Create the objects of the derived classes and process them and access them using an array of pointers of type base class Student.
#include<iostream>
using namespace std;
class Student{
    public:
    virtual void show_info()=0;
    virtual ~Student(){
        cout<<"The base class is destroyed"<<endl;
    }

};
class Engineering : public Student{
    public:
    void show_info(){
        cout<<"Hey there I am from Engineering"<<endl;
    }
    virtual ~Engineering(){
        cout<<"Engineering is destroyed"<<endl;
    }

};
class Medicine : public Student{
    public:
    void show_info(){
        cout<<"Hey there I am from Medicine"<<endl;
    }
    virtual ~Medicine(){
        cout<<"Medicine is destroyed"<<endl;
    }

};
class Science : public Student{
    public:
    void show_info(){
        cout<<"Hey there I am from Science"<<endl;
    }
    virtual ~Science(){
        cout<<"Science is destroyed"<<endl;
    }

};
int main(){
    Student *arr[3];
    
    arr[0]=new Engineering;
    arr[0]->show_info();
    delete arr[0];
    arr[1]=new Medicine;
    arr[1]->show_info();
    delete arr[1];
    arr[2]=new Science;
    arr[2]->show_info();
    delete arr[2];
    return 0;

}