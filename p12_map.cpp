#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <algorithm> //to get sort funciton
#include <set>
#include <utility> //to use pair
using namespace std;


int main(){
  map<int,string> m;
  m[230] = "ahmed";
  m[111] = "mohamed";
  m[53] = "sabry";

  map<int,string>:: iterator i;
  for (i=m.begin() ; i != m.end() ; i++){
    cout<<(*i).first << " ";
    cout<<(*i).second << endl;
  }

}
