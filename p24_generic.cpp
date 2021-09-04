#include <iostream>
#include <string>
using namespace std;


// to make a variable that deal with any type

template <typename Gammal>

void printMax(Gammal x, Gammal y){
  Gammal z = x > y ? x : y;
  cout << z << endl;
  return;
}
int main(){
  printMax("Za","Te");
  return 0;
}
