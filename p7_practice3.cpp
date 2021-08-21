#include <iostream>
#include <vector>
#include <string>
#include <algorithm> //to get sort funciton
#include <set>
using namespace std;

int main(){
  int n;
  cout << "Enter a number: ";
  cin >> n;
  string stars = "", spac = " ";
  for (int i = 0; i < n; i++)
    spac += " ";
  printf("\n");
  for (int i = 0; i <= n; i++)
    {
    stars += "*";
    cout << spac.substr(i) << stars<<endl;
    stars += "*";

  }

  return 0;
}
