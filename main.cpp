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
using namespace std;

void printOnlyInt(int anInt) {
    cout <<"I can only print int values "<<anInt<<endl;
}

int main(int argc, char *argv[]) {
    cout << "Ok, lets use some standard data types!" << endl;
    int int_value = -35466;
    cout << "I am an integer " << int_value <<endl;
    float float_value = 3.4556;
    cout << "I am an float " << float_value <<endl;
    long long_value = 2147483646; //!A long is a integer that has more memory
    cout << "I am an long int " << long_value <<endl;

    //!How long is the memory?
    cout <<"I need the memory of "<<sizeof(long_value)<<endl;//?are those bits or bytes or what?
    //!WARNING! THE SIZE IS ALWAYS DEPENDING ON YOUR PLATFORM THERE ARE INT WITH 32 and 64 and 16 and 8 bit !!!

    long_value = int_value; //?does this work? If so why?
    cout << "I am an long int " << long_value <<endl;

    long_value = 2147483646; //!Set back the value of long
    int_value = 2147483646; //?does this work? If so why?
    cout << "I am an int " << int_value <<endl;


    bool bool_value = 5; //?does this work? If so why?
    cout << "I am either true or false " << bool_value <<endl;

    int i = -36123;
    short s_i = i; //?what is the value?
    unsigned  u_i = i; //?What is the value?

    //!Casting
    //!Casting means changing a datatype from one type to an other
    //!Until now we casted implicitly by assigning data types to each other. There is also an explicit cast

    cout << "We have to cast this explicitly" << int(float_value) <<endl;


    //?fix the following function by using the following variable
    flaot f = 5.678; //!Do not change the variable
    //printOnlyInt(f); //!Comment in when you fixed it!

    //There are specific

    return 0;
}