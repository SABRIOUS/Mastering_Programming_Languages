#include <iostream>
using namespace std;

// cpp operator overloading
class Sabry_Tech_Member{
private:
  int day, month, year;
public:
  bool setDate(int d, int m, int y){

    if (d >= 1 && d <= 31)
      day = d;
    else
      return false;

    if (m >= 1 && m <= 12)
      month = m;
    else
      return false;

    if (y>= 2020)
      year = y;
    else
      return false;

    return true;
  }

  void operator ++(){
    if (day < 31)
      day++;
    else{
      day = 1;
      if (month <12)
        month++;
      else{
        month = 1;
        year++;
      }
    }
  }

  void print(){
    cout << day << "/" << month << "/" << year<<endl;
  }
};

int main(){
  Sabry_Tech_Member omar;
  if(omar.setDate(31,12,2022) == false)
    cout << "Date Is Incorrect " <<endl;
  else
    cout <<"Date Is Correct" <<endl;

  omar.print();
  ++omar;
  omar.print();
}
