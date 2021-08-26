#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <cctype> // to get upper and lower fun
#include <algorithm> //to get sort funciton
#include <set>
#include <utility> //to use pair
using namespace std;

int main(){
  vector<int> x{1,6,2,3,4};
  vector<int> y{5,6,4,8,9};

  loop:
  int z,found = 0;
  cout << "Enter number: ";
  cin >> z;
  for(int i = 0; i < x.size() && found == 0; i++)
    for(int j  =0; j < y.size() && found==0; j++)
      if(x[i]+ y[j] ==z){
        cout << "Yes" << endl;
        cout << x[i] << "    " << y[j] << endl;
        found = 1;
      }

  cout <<(found? "":"No") << endl;
  goto loop;
  return 0;

}
