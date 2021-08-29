#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <cctype> // to get upper and lower fun
#include <algorithm> //to get sort funciton
#include <set>
#include <utility> //to use pair
using namespace std;

map<string,string> m;



void add(){
  string s1, s2;
  cout << "Enter name followd by symbol: ";
  cin >> s1 >> s2;
  m[s1] = s2;
}

void draw(){
  vector<int> n;
  vector<string> s;
  string s1;
  int n1 = 1;
  cout << "What would you like to draw?\n";
  while(n1){    
    cin >> n1 >> s1;
    n.push_back(n1);
    s.push_back(s1);
  }
  cout<<endl<<endl;
  for(int i=0; i<n.size(); i++)
    for(int j=0; j<n[i] ; j++)
      cout << m[s[i]];
  cout <<endl<<endl;
}



int main(){
  m["space"] = " ";
  m["line"] = "\n";
  while(1){
    cout << "What would you like to do\n"
            "1. Add Symbols\n"
            "2. Draw\n"
            "3. Exit\n";
    int ans;
    cin >> ans;
    if(ans == 1)
      add();
    else if(ans == 2)
      draw();
    else
      return 0;
  }


}
