//
// Created by Flo on 07.11.2019.
//

#ifndef TEST_CIRCLE_H
#define TEST_CIRCLE_H

#include <iostream> //!If you have to have an inclide in a header (which is bad) then do it AFTER the include guard!

//!Do not change the code, fill in the ?Comments
class Circle{ //!Note: Classes are written Upper-Case
private:
    int area; //!Note, this has no data type yet
    int radius = 0; //!you can initiate stuff
    const float PI = 3.14159265359; //!just an example for const, there are better ways to handle PI;

protected:
    //!just an example for an protected value
    float getRadius(); //?

public:
    Circle(int radius = 0); //?
    //! The following is an example why you do NOT need to code in a .cpp
    //! you usually should NOT code like that
    ~Circle() {  //?
        std::cout << "A circle with radius "<< this->getRadius() << " dies!" <<std::endl;
    };

    void setRadius(float newRadius);

    float getArea();
    float getCircumference(); //circumference in german : Umfang
};


#endif //TEST_CIRCLE_H
