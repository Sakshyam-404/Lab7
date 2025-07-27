//Write a program to create a class shape with functions to find the area of the shapes and display the names of the shapes and other essential components of the class.
// Create derived classes circle, rectangle, and trapezoid each having overriding functions area() and display().
// Write a suitable program to illustrate virtual functions and virtual destructors.

#include<iostream>
using namespace std;
class shape{
    public:
    virtual void display(){};
    virtual float area(){};
    virtual ~shape(){
        cout<<"The base class is destroyed"<<endl;
    }


};
class circle : public shape{
    private:
    float radius;
    public :
    circle(float r):radius(r){}
    void display(){
        cout<<"The shape is circle"<<endl;

    }
    float area(){
        return 3.143*radius*radius;

    }
    ~circle(){
        cout<<"The circle is destroyed "<<endl;
    }
    


};
class rectangle : public shape{
private:
float length;
float breadth;
public:
rectangle(float l, float b):length(l), breadth(b){}
 void display(){
        cout<<"The shape is rectangle"<<endl;

    }
    float area(){
        return length*breadth;

    }
    ~rectangle(){
        cout<<"The rectangle is destroyed"<<endl;
    }


};
class trapezoid : public shape{
    private:
    float base1, base2, height;
    public:
    trapezoid(float b1, float b2, float h):base1(b1), base2(b2), height(h){};
     void display(){
        cout<<"The shape is trapezoid"<<endl;

    }
    float area(){
        return 0.5*(base1+base2)*height;

    }
    ~trapezoid(){
        cout<<"The trapezoid is destroyed "<<endl;
    }
};
int main(){
    shape *s;
    s= new circle(5);
    s->display();
    cout<<"The area of the circle is "<<s->area()<<endl;
    delete s;
     s= new rectangle(5,10);
    s->display();
    cout<<"The area of the rectangle is "<<s->area()<<endl;
    delete s;
    s = new trapezoid(3.0,5.0,4.0);
    s->display();
    cout<<"The area of the trapezoid is "<<s->area()<<endl;
    delete s;



}