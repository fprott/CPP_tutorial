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

#include <fstream>
// #include <filesystem> //!This is C++ 17 but we use C++ 11 so our paths are not so good

/**
    Reads one specific line of the deine_mudda.txt file
    NOT implemented optimally
    @param line number of the line
    @return std::string Line in text file
*/
std::string readLine(int line) {

    std::ifstream f("deine_mudda.txt"); //!you may have to change that in accordance to your OS and IDE
    std::string s;
    for (int i = 1; i <= line; i++)
        std::getline(f, s);

    return s;
}

int main(int argc, char *argv[]) { //??What is this argv thing? Why do I need an arg?
    cout << "Program start!" <<endl;
    cout << readLine(10) <<endl;

    return 0;
}