#include <iostream>
using namespace std;

class student{
private:
  string name;
  int c,cpp;

public:
  void setName(string x){
    if (x !="gammal")
      name = x;
    else
      name = "Error... ";
  }

  void setC(int x){
    c = x;
    if(c < 85){
      cpp = 0;
    }
  }

  void setCpp(int x){
    if(c >= 85)
      cpp = x;
    else
      cpp = 0;
  }

  void print(){
      cout << name << endl;
      cout << c << endl;
      cout << cpp << endl;
    }
};




int main(){
  student school[100];
  school[0].setName("gammal");
  school[0].setC(90);
  school[0].setCpp(10);
  school[0].print();
}
