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


//?Questions, what are these things doing? Why can I run the code?
void passByValue(int value);
void passByReference(int &reference);
void passByPointer(int* pointer);

int main(int argc, char *argv[]) { //??What is this argv thing? Why do I need an arg?
    cout << "Program start!" <<endl;
    int i = 10;
    cout << "i is " << i <<endl;
    passByValue(i);
    cout << "i is " << i <<endl; //??Why is this NOT 20?
    passByReference(i);
    cout << "i is " << i <<endl;
    passByPointer(&i);
    cout << "i is " << i <<endl;

    //!Note the reference
    int& r = i; //pointers for poor people
    cout << "r is " << r <<endl;

    struct Apple {
        int weight;
        double price;
    };

    Apple myAppel = Apple();
    myAppel.price = 5;
    myAppel.weight =10;

    cout << "myAppel is " << myAppel.price  << " EUR and "<< myAppel.weight << " g" <<endl;


    return 0;
}

//?
void passByValue(int value){
    value=20;
}

//?
void passByReference(int &reference){ //?What is going on here?
    reference=30;
}

//?
void passByPointer(int* pointer){
    *pointer=40;
}