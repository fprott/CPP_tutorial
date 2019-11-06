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
#include <vector>
#include <memory>

using namespace std;

int* gibArray() {
    int array[10] = {0,1,2,3,4,5};
    //!since the last values are NOT set they are random!
    //array[6] = 6; //! I skip this so you can see what happens
    array[7] = 7;
    array[8] = 8;
    array[9] = 9;
    return array;
}

int* changeValue(int * array) {
    array[1] = 11; //!It is possible that there is no value 1 than the program crashes
    return array;
}

void reallyBadIdeaToSetAValue(int* pointer) {
    int value2 = 7;
    pointer = &value2;
    cout<<"The pointer here has the value " <<*pointer <<endl;
    return;
}

void memory_leak()
{
    int* valuePtr = new int(15);
    int x = 45;
    // ...
    if (x == 45)
        return;   // here we have a memory leak, valuePtr is not deleted
    // ...
    delete valuePtr; //this is not always reached
}

int main(int argc, char *argv[]) { //??What is this argv thing? Why do I need an arg?
    //!Pointer are dangerous, we now see why!

    //!First they are often used with new and delete
    //!new will allocate memmory in C++
    //!delete will free it
    //!In C they are called malloc and free <- we see that on friday

    //!This will not DIE when the function is left, only when the program shuts down
    int* immortal = new int(5); //!New gives us a memmory location
    memory_leak(); //?What hapend her


    //!Pointer can point to stuff that is long gone
    int value1 = 5;
    int* p_int;
    p_int = &value1;
    cout<<"The pointer thinks he has the value of " <<*p_int <<endl;
    reallyBadIdeaToSetAValue(p_int);
    cout<<"The pointer thinks he has the value of " <<*p_int <<endl;
    //!The following is a namespace. Everything you declare in a namespace is freed once you leave it
    //!You already know these from loops and if and functions
    {
        int value2 = 8;
        p_int = &value2;
    }
    cout<<"The pointer thinks he has the value of " <<*p_int <<endl; //?why do it seems like this works?

    //!This is called a marauding pointer and HE IS THE WORST!

    //!Smart Pointer handle this problem!
    //!There are two big types:
    //!unique_ptr
    std::unique_ptr<int> unique_int(new int(10)); //?What does that do
    //??what does the < > do?
    unique_int.get();
    cout<<"Value of the unique Pointer " << *unique_int <<endl; //!Works just like a pointer but is super safe!

    //!There is always maximal one unique pointer to the object!

    //? TODO uncomment the following and try what happens!
    std::unique_ptr<int> unique_int2;
    //unique_int2 = unique_int;

    //!shared_ptr
    std::shared_ptr<int> shared_int(new int(111));
    cout<<"Value of the shared Pointer " << *shared_int <<endl; //!Works just like a pointer but is super safe!
    std::shared_ptr<int> shared_int2;
    shared_int2 = shared_int; //?Why does this work?

    
    //------

    //!Pointer are the classical C way to handle arrays

    //!Arrays like this ARE POINTERS!
    int array[5] = {1,2,4,5,6};
    //array = {1,2,4,5,6}; //!This does NOT work!
    cout<<array<< endl; //?Why does this give you an address?
    cout <<array[0] <<endl; //?
    cout <<array[4] <<endl; //?
    cout <<array[5] <<endl; //?What happens? ?fixme

    //?What is the big problem that you can see here with arrays?

    //!To get the size of an array you can use the same operator we used to get the data size
    cout<<"The following is NOT your friend! He wants to murder you, screw your wife  and rearrange your desktop icons : " <<sizeof(array) <<endl;

    //!But this is one of your WORST false friends! Because this ability gets lost if the array comes from a function or an namespace

    cout<<"Now he betrays you : " <<sizeof(gibArray()) <<endl; //? what does he give you instead?

    //!The same goes if you just use a function to change a value

    cout<<"Now he betrays you : " <<sizeof(changeValue(array)) <<endl;

    //!THIS IS CALLED POINTER DEGENERATION
    //!Pointer degeneration is the reason why you need to store always the length of your array separately


    //!C++ has a better way to do that array stuff

    std::vector<int> vector = {1, 2, 3, 4}; //like an array but WAY better!

    //!Lets add something
    vector.push_back(5);
    vector.push_back(6);

    //!Lets remove the last thing
    vector.pop_back(); //!This also returns the value but we do not need that

    //!This is called an Iterator and HE IS YOUR FRIEND
    for(int value : vector) {
        std::cout << value << '\n';
    }




    return 0;
}