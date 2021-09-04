#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <set>
using namespace std;


void print(int x){
  cout << x << endl;
}

int main(){
  // int a[5] = {5,77,96, 47,90};
  // for_each(a,a+5print);

  // vector<int> a = {5,77,96, 47,90};
  // for_each(a.begin(),a.end(),print);

  set<int> a = {5,77,96, 47,90};  
  for_each(a.begin(),a.end(),print);
}
