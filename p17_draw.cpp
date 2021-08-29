#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <cctype> // to get upper and lower fun
#include <algorithm> //to get sort funciton
#include <set>
#include <utility> //to use pair
using namespace std;

int main(){
  vector<string> s;
  vector<int> n;
  string t1 = "";
  int t2;
  while (t1 != "exit"){
    cout << "What do you wanna do: ";
    cin >> t2 >> t1;
    n.push_back(t2);
    s.push_back(t1);
  }

  for (int q = 0; q < n.size(); q++)
    for (int i =0 ; i < n[q]; i++)
      if(s[q] == "star" || s[q] == "stars")
          cout << "*";
      else if(s[q]== "space" || s[q] == "spaces")
        cout << " ";
      else if ( s[q] == "line")
        cout <<endl;
    cout << endl;
}
