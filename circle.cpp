//
// Created by Flo on 07.11.2019.
//

#include "circle.h"

#include <iostream>
using namespace std;

//?TODO Code in everything

Circle::Circle(int radius) {
    this->radius = radius;
    cout << "New Circle with radius "<< this->getRadius() <<" is born!" <<endl; //?Why can I use the protected function?
}

void Circle::setRadius(float newRadius) {

}

float Circle::getRadius() {
    return 0;
}

float Circle::getArea() {
    return 0;
}

float Circle::getCircumference() {
    return 0;
}
