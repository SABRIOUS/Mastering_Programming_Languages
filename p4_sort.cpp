#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;

// int main(){
//   int x[5] = {10,9,8,7,6};
//   vector <int> y;
//
//   y.push_back(10);
//   y.push_back(9);
//   y.push_back(8);
//   y.push_back(7);
//   y.push_back(6);
//
//   sort(x,x+5);
//   for (int i=0; i<5; i++)
//     cout<<x[i]<<" ";
//   cout<<"\n----------------\n";
//   // sort(y.begin(),y.end()); to sort vector
//   for (int i=0; i<5; i++)
//     cout<<y[i]<<" ";
// }


// set in c++


int main(){
  set <int> x;
  x.insert(3);
  x.insert(7);
  x.insert(10);
  x.insert(5);
  x.insert(2);
  x.insert(0);
  x.insert(1);

  set<int>::iterator i;
  for (i= x.begin(); i != x.end(); i++)
    cout<< (*i)<<" ";

}
