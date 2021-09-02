#include <iostream>
using namespace std;

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

  int getDay(){
    return day;
  }
  int getMonth(){
    return month;
  }
  int getYear(){
    return year;
  }


  void print(){
    cout << day << "/" << month << "/" << year<<endl;
  }
};


class Yearly_Member: public Sabry_Tech_Member{
public:
  void operator ++(){
    setDate(getDay(),getMonth(),getYear()+1);
  }
};


class monthly_member: public Sabry_Tech_Member{
public:
  void operator ++(){
    if (getMonth()==12)
      setDate(getDay(),1,getYear()+1);
    else
      setDate(getDay(),getMonth()+1,getYear());
  }
};


int main(){
  monthly_member ahmed;
  Yearly_Member mohamed;
  ahmed.setDate(1,12,2020);
  mohamed.setDate(1,11,2021);
  ahmed.print();
  mohamed.print();
  ++ahmed;
  ++mohamed;
  cout << "\n";
  ahmed.print();
  mohamed.print();
}
