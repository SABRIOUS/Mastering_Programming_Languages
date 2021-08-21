#include <iostream>
#include <vector>
#include <string>
#include <algorithm> //to get sort funciton
#include <set>
using namespace std;

int main(){
  start:
  vector<string> s;
  string word = "";
  int n;
  cout << "Enter a number: ";
  cin >> n;

  for(int i = 0; i <n; i++)
  {
    word += "*";
    s.push_back(word);
  }

  for(int i = s.size()-1; i >= 0; i--)
  {
    cout << s[i]<<endl;
  }
  goto start;

}
