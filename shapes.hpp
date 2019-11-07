//
// Created by Florian Prott on 07.11.2019.
//

//!hpp files are a mix of .h and .cpp files
//!Usually they are only use with good reason
//!This means you only use them ONCE in your program, else the compiler might get crazy
//!It is NOT good practice to use them but they are a thing so you should know about them

using namespace std;

// Base class
class Shape {
private:
    int something = 5; //?can this ever be used?

protected:
    int width; //?Why is this in protected?
    int height;

    void setWidth(int w) {
        width = w;
    }
    void setHeight(int h) {
        height = h;
    }

public:
    Shape() {
        cout << "Shape super object (super class is the base class) created"<<endl;
    }

    ~Shape() {
        cout << "Shape super object (super class is the base class) destroyed"<<endl;
    }

    virtual float getArea() =0; //!This is an pure virtual function. You have to overwrite it. If you don't then you will get an error message. In a more complex program this can be one of THE WORST ERROR MESSAGE!
};

// Derived classs
class Rectangle: public Shape {
public:
    Rectangle(int width, int height) {
        this->setHeight(height);
        this->setWidth(width);
        cout << "Rectangle object created"<<endl;
    }
    ~Rectangle() {
        cout << "Rectangle object destroyed"<<endl;
    }

    float getArea() override {
        return (this->width * height); //? Why is this code ok?
    }
};

class Square: public Shape {
public:
    Square(int sideLength) {

    }
};
