#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <set>
using namespace std;


class GT_Bank_Account{
public:
  static double balance;
};

class SALES: public GT_Bank_Account{
public:
  void deposit(double a) {
    balance += a;
  }
};

class BILL: public GT_Bank_Account{
public:
  void withdraw(double a) {
    balance -= a;
  }
};


class ACC: public GT_Bank_Account{
public:
  void getBalance() {
    cout <<balance<<endl;
  }
};

double GT_Bank_Account::balance = 0;

int main(){
  SALES s;
  s.deposit(3500);

  BILL b;
  b.withdraw(500);

  ACC a;
  a.getBalance();
}
