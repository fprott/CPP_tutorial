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

void sayHello() {
    cout << "Hello!" <<endl;
}

int main(int argc, char *argv[]) { //??What is this argv thing? Why do I need an arg?
    //!Pointers are hard. Try not to use them in C++! They are need in C and are a foundation of C++
    //! Operator * gives you the value of a pointer
    //! Operator & gives you the address of a value

    int value;
    cout <<"Value of an empty value is "<<value<< " (random!)"<<endl;
    value = 555;

    int* p_int; //? What does this do?
    //int * p_int; //!This is also a valid way to write this
    cout <<"Value of an empty pointer is "<<p_int<< " (random!)"<<endl;

    //let p_int point to value
    p_int = value;//?Fix this!

    //Get the value of p_int and put it into a new variable
    int value_of_p_int= p_int; //?Fix this!

    cout <<"value_of_p_int is " <<value_of_p_int <<endl;

    //!everything can be written as a potiner!

    float float_value = 555.55;
    float* p_float= float_value; //?Fix this!

    //You can even cast with that!
    int float_value_as_int = p_float; //?Fix this!
    cout <<"Value of a casted float value that was in a pointer is " <<float_value_as_int <<endl;

    //!Even big things like strings are pointers!
    std::string str = "Hello, I am a String! I can get like really big. I need a dynamic size of data!";
    std:string* p_str = str; //?Fix this!
    cout <<"Value of the string " << p_str <<endl;//?Fix this!

    //!You can even put a function in it

    //!The following is VERY DANGEROUS but you will see it in C
    //!Try to NOT use it ! But you might NEED to use it in C
    //!It is very ugly and you have to seperate it and comment it so that it does not make trobule
    //! In C++ and C even functions are pointers
    void (*fun_ptr)(void) = &sayHello; //!Note that we do not use the ()
    fun_ptr();
    //!You can store a function into a datatype

    return 0;
}