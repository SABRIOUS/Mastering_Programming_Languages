/*Goal: practice using stringstream
/*Goal: practice getting string inputs and
 **converting them to numeric variables using
 **stringstream.
 **
 **Prompt the user for the length of a room.
 **Then prompt for the width of the room.
 **Print out the area of the room.
 */

#include <iostream>
#include <string>
#include <sstream>
using namespace std;

 int main (){

    string w,l;
    float width = 0;
    float length = 0;
    float area = 0;

    cout << "Enter the length: ";
    getline(cin,l);
    stringstream(l) >> length;

    cout << "Enter the width: ";
    getline(cin,w);
    stringstream(w) >> width;
    area = width * length;

    cout << "The area is: "<< area<<endl;

    return 0;
 }
