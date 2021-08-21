#include <iostream>
#include <vector>
#include <string>
#include <algorithm> //to get sort funciton
#include <set>
using namespace std;


int main(){
  int n;
  start:
  string s = "";

  cout << "Enter a number: ";
  cin >> n;

  for (int i = 0;i < n; i++){
    s += "*";
    cout <<s<<endl;
  }
  goto start;
  return 0;
}
