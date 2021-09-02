#include <iostream>
#include <string>
using namespace std;


class Ahmed_Tech_Member{
private:
  string name,cell;
  int days;
public:
  Ahmed_Tech_Member(string c){
    name = "Ahmed Tech New User";
    cell = c;
    days = 0;
  }

  Ahmed_Tech_Member(string a,string b,int k){
    name = a;
    cell = b;
    days = k;
  }

  void setName(string n){
    name = n;
  }
  void print(){
    cout<<endl<<name<<endl;
    cout<<cell<<endl;
    cout<<days<<endl<<endl;
  }
};


int main(){
  Ahmed_Tech_Member x("+201020304099");
  x.setName("Ahmed Sabry");
  x.print();
  Ahmed_Tech_Member y("Sabry","0147",99);
  y.print();
}
