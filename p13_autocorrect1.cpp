#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <cctype> // to get upper and lower fun
#include <algorithm> //to get sort funciton
#include <set>
#include <utility> //to use pair
using namespace std;

// autocorrect1

// int main(){
//   string name;
//   cout << "Enter your name: ";
//   cin >> name;
//   name[0] = toupper(name[0]);
//
//   for(int i = 1; i<name.size(); i++){
//     name[i] = tolower(name[i]);
//   }
//   cout << name << endl;
//
// }


// -------------------
// CPP Autocorrect 2

// int main(){
//   map<string,string> d;
//   d["hillo"] = "Hello";
//   d["helo"] = "Hello";
//   d["helllo"] = "Hello";
//   string in;
//   for(int i = 0; i< d.size(); i++){
//     cout << "Enter a word ";
//     cin >> in;
//     if (d.find(in) != d.end() )
//       cout << d[in] <<endl;
//     else
//       cout << in <<endl;
//   }
// }
