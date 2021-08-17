#include <iostream>
using namespace std;


int main(){

  int x,y;
  char s;
  cout << "Enter first number: ";
  cin >>x;
  cout << "\nEnter the second number: ";
  cin >> y;
  cout << "\nEnter the mathematical Operator (+,-,/,*,%): ";
  cin >>s;

  if (s == '+'){
    cout << "\nThe Sum is: "<<x+y<<endl;
  }

  else if (s == '-'){
    cout << "\nThe subtract is: "<<x-y<<endl;
  }

  else if (s == '/'){
    cout << "\nThe division is: "<<x/y<<endl;
  }

  else if (s == '*'){
    cout << "\nThe multible is: "<<x*y<<endl;
  }

  else if (s == '%'){
    cout << "\nThe reminder is: "<<x%y<<endl;
  }


  return 0;


}
