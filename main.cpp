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

//!The following are java function comments
//!They comment your code on the go, they are very usefull
//!There are several styles to comment but you should ALWAYS USE ONE!
// https://developer.lsst.io/cpp/api-docs.html for reference


/**
    Does a simple loop and prints something on the console

    @param num number of loop
    @return nothing
*/
void doALoop(int num) {
    for(int i=0; i < num; i++) {
        cout << "Loop number :" << i << endl; //!Keep in mind programmers count from 0!
    }
}

//?Write down the function comment
void doBLoop(int num) {
    int i = 0;
    while(i<num){
        cout << "Loop number :" << i << endl;
        //!You will get a endless loop here if you do not do something against it
        //?do something to prevent the endless loop!

    }
}

//?Write down the function comment
void doCLoop(int num) {
    int i = 0;
    do {
        cout << "Loop number :" << i << endl;
        //!You will get a endless loop here if you do not do something against it
        //?do something to prevent the endless loop!

    }while(i<num);

}

//?Write down the function comment
void doDLoop(int num) {
    int i = 0;
    for(true) { //!Do not change this!
        if(num == ???) //fix this
            break; //!This is a break! it stops a loop compleltly
        if(i == 5):
            cout << "I do not want to print anything in loop :" << i << endl; 
            continue; //!This is a continue. The code will stop here for this round of the loop. The next statments are not processed. But the next round of the loop will be handled as normal!
        cout << "Loop number :" << i << endl; 

    }
}

//!The following loops are BROKEN, correct them!
/**
    Does a lot of loops that you should correct in a way that this thing works as intended

    @return True if function works, false if you made an mistake
*/
bool loopOfDesaster() {
    int num = 10;
    int checksum = 0; //!Checksumme that we count up to check if the loops work as intended
    for(int i=1; i=10; i++) {//?CHANGE
        cout << "Loop 1 number :" << i << endl;

        //!Do not change the next line
        checksum+=1; //!Nice way to say checksum= checksum+1;
    }

    int i=0; //why do I have to assign that again?

    do {
        checksum+=1;
        //?CHANGE
    }while(i<=9);

    i=0; //?why can't we say int i=0;?

    //!The ! sign is a way to say not
    while(!(i=10)) {//?CHANGE
        cout << "Loop 1 number :" << i << endl;

        checksum+=1; //!Do not change
        i++;
    }

    if (checksum == 30)
    {
        return true; //!C++ has NO true True or False values. Everything that is not 0 is true
    }else{
        return false;
    }

}

/**
    Builds a string to demonstrate that strings in C++ are complicated
    try using include <string> if you need them

    @param compliment A short compliment
    @return True if function works, false if you made an mistake
*/
std::string giveMeACompliment(std::string compliment) { //?Why do we need to use std here? What is missing with the C++ Data types?
    return "You have done this "+ compliment + " !"; //??Why do we use + not <<
}

int main(int argc, char *argv[]) {
    cout << "Ok, lets use some standard data types and control structures!" << endl;
    
    if(5 > 6){
        cout << "5 > 6" << endl;
    }else{
        cout << "5 < 6" << endl;
    }
    
    if(5==true){ //?What happens here? why?
        cout << "This is actually true" << endl;
    }
    
    //!This is a special kind of if else thing called a switch-case
    
    int any_value=2; //?Todo cahnge

    switch(any_value) {
        case 1: printf("a ist one\n"); break;
        case 2: printf("a ist two\n"); break;
        case 3: printf("a ist three\n"); break;
        default: printf("a ist more than three\n"); break;
    }
    
    cout << "Ok, lets do loops!" << endl;
    doALoop(10);
    //doBLoop(10); //?TODO coment in!
    //doCLoop(10); //?TODO coment in!
    if (loopOfDesaster() != 0) { //??Why can we make this comparision?
        cout << giveMeACompliment("very good") <<endl;
    }
    return 0;
}