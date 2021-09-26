// include all important library
#include "header.hpp"


void odd(int x){
  if ( x == 0)
    return;
  else if (x%2==1){
    odd(x-1);
    cout << x <<" ";
  }

  else odd(x-1);
}

void even(int x){
  if ( x == 0)
    return;
  else if (x%2==0){
    even(x-1);
    cout << x <<" ";
  }

  else even(x-1);
}

int main(){
  int x;
  cout<<"Enter a number: ";
  cin>>x;
  cout << "Odd Number: ";
  odd(x);
  cout << "\n--------------\n";
  cout << "Even Number: ";
  even(x);
}
