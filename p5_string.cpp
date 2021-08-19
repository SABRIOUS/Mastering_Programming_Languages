#include <iostream>
#include <vector>
#include <string>
#include <algorithm> //to get sort funciton
#include <set>
using namespace std;

int main(){
  set<string> x;
  x.insert("Ahmed Tech");
  x.insert("Python");
  x.insert("C++ Programming");
  x.insert("Java");

  set<string>::iterator i;
  for (i =x.begin(); i !=x.end(); i++)
    cout <<(*i)<<endl;


}
