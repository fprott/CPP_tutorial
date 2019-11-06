/*Task
 * Fill in all empty comments that start with ? in a meaningful way
 *
 * Answer all question comments! Just write your answer behind your comment
 *
 * All comments with a ! at the beginning and ! are just comments. Do not change them! But read them carefully!
*/

#include <iostream> //Why that?
#define RADIUS 5 //?
//!The following is usually overkill!
#define PI 3.1415926535897932384626433832795028841971693993751058209749445923078164062862089986280348253421170679821480865132823066470938446095505822317253594081284811174502841027019385211055596446229489549303819644288109756659334461284756482337867831652712019091456485669234603486104543266482133936072624914127372458700660631558817488152092096282925409171536436789259036001133053054882046652138414695194151160943305727036575959195309218611738193261179310511854807446237996274956735188575272489122793818301194912983367336244065664308602139494639522473719070217986094370277053921717629317675238467481846766940513200056812714526356082778577134275778960917363717872146844090122495343014654958537105079227968925892354201995611212902196086403441815813629774771309960518707211349999998372978049951059731732816096318595024459455346908302642522308253344685035261931188171010003137838752886587533208381420617177669147303598253490428755468731159562863882353787593751957781857780532171226806613001927876611195909216420198938
//What does define PI do? What might be the purpose?

//!An interesting thing is that the precompiler actually can handlel functions
//!C++ guys, do NOT use that stuff without need. This is for extreme cases. But you should have SEEN it!
//!C guys, depending on your platform this might happen often to you.
#define SPECIFIC_AREA() (PI * RADIUS * RADIUS) //?

#define AREA(R) (PI * R * R)//?
//Why was the upper possible? When is the upper calculated?

//!This is a BETTER way to do this stuff. If possible USE THIS INSTEAD!
//!The inline thing is only relevant for C
//!The inline means that the compiler will roll out this function before handeling the rest of the code
inline int area(int r)
{
    return PI*r*r;
}

int main(int argc, char *argv[]) {
    std::cout << "Hello, World!" << std::endl;
    std::cout << PI <<std::endl; //What is happening to PI?
    std::cout << SPECIFIC_AREA() <<std::endl;
    std::cout << AREA(3) <<std::endl;
    std::cout << area(3) <<std::endl; //What do we learn about case sensitivity?
    return 0;
}
