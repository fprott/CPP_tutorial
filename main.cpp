/*Task
 * Fill in all empty comments that start with ? in a meaningful way
 *
 * Answer all question comments! Just write your answer behind your comment
 *
 * Questions starting with ?? are hard and are filed in last AFTER we talked about this!
 *
 * All comments with a ! at the beginning and ! are just comments. Do not change them! But read them carefully!
*/

#include <iostream>
#include "circle.h"
using namespace std;

int main(int argc, char *argv[]) { //??What is this argv thing? Why do I need an arg?
    //!Do not change the code down here. You may comment out stuff that does not work yet!
    cout << "Program start!" <<endl;
    Circle circle0 = Circle(); //!
    Circle circle1 = Circle(5);
    Circle* circle2 = new Circle(10);
    Circle* circle3 = new Circle(15);
    Circle* circle4 = new Circle(30);

    cout << circle0.getArea()<<endl;
    cout << circle1.getArea()<<endl;
    cout << circle2->getArea()<<endl; //? What does the -> do ?
    cout << "--------" <<endl;
    cout << circle1.getCircumference()<<endl;
    cout << circle1.getCircumference()<<endl;
    cout << "--------" <<endl;
    circle0.setRadius(100);
    cout << circle0.getCircumference()<<endl;
    cout << circle0.getCircumference()<<endl;
    cout << "Program end!" <<endl;
    //!Now we have to delete what we created!
    //?Do we need to delete circle 0,1,2 ?
    delete circle3;
    delete(circle4);
    //?What happens to Circle 2?
    //??Why is Circle 2 a BIG PROBLEM!
    return 0;
}