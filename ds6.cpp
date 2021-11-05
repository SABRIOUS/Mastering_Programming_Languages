#include "header.hpp"


int main(){
  long long a = 348, b = 585829;
  long long (*uka) = &a;
  long long (*ukb) = &b;
  cout << "*uka = "<<*uka <<"\t\t uka = "<<uka<< " \n";
  cout << "*ukb = "<<*ukb <<"\t\t ukb = "<<ukb<< " \n";
  (*uka) =(*ukb);

  cout <<"\n\nAfter (*uka) = (*ukb)\n\n";
  cout << "*uka = "<<*uka <<"\t\t uka = "<<uka<< " \n";
  cout << "*ukb = "<<*ukb <<"\t\t ukb = "<<ukb<< " \n";

  cout <<"\n----------------\n";

  uka =ukb;
  cout <<"\n\nAfter uka = ukb\n\n";
  cout << "*uka = "<<*uka <<"\t\t uka = "<<uka<< " \n";
  cout << "*ukb = "<<*ukb <<"\t\t ukb = "<<ukb<< " \n";
	return 0;
}
