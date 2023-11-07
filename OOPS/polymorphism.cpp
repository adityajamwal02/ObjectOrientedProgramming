/// One of the most common applications of polymorphism in C++ is through function overriding. By having two functions of the same name in different classes, we can create code that completes different behavior depending on the inheritance of the selected object.

#include<bits/stdc++.h>
using namespace std;

class shape{

public:
    shape(){}

    virtual void draw(){
        cout<<"Drawing a shape: "<<endl;
    }
};

class Rectangle : public shape{

public:
    Rectangle(){}

    virtual void draw(){
        cout<<"Drawing a Rectangle: "<<endl;
    }
};

class Square : public shape{

public:
    Square(){}

    virtual void draw(){
        cout<<"Drawing a Square: "<<endl;
    }
};

class Circle : public shape{

public:
    Circle(){}

    virtual void draw(){
        cout<<"Drawing a Circle: "<<endl;
    }
};

int main(){
    shape *s;

    Circle c;
    Rectangle r;
    Square sq;

    s=&r;
    s->draw();

    s=&sq;
    s->draw();

    s=&c;
    s->draw();

    shape *t=new shape();
    t->draw();

    return 0;
}
