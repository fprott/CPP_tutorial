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
#include "shapes.hpp"
using namespace std;

int main(int argc, char *argv[]) { //??What is this argv thing? Why do I need an arg?
    cout << "Program start!" <<endl;
    Rectangle myRectangle = Rectangle(2,3);
    cout <<  myRectangle.getArea() <<endl;

    //?Comment in the next section and run it. Look at the error message!
    //Square mySquare = Square(3); //?Why does this fail?

    return 0;
}