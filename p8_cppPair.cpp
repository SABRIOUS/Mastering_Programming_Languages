#include <iostream>
#include <vector>
#include <string>
#include <algorithm> //to get sort funciton
#include <set>
#include <utility>
using namespace std;

// int main(){
//   pair<string,int> x[10];
//
//   for (int i = 0; i < 2; i++){
//       cout << "Enter name: ";
//       cin >> x[i].first;
//       cout << "Enter Numebr: ";
//       cin >> x[i].second;
//   }
//   for (int i = 0; i < 2; i++){
//       cout << x[i].first<<" ";
//       cout << x[i].second<<endl;
//   }
//
// }

// CPP Set of Pair

int main(){
  set<pair<string,int> >s;
  pair<string,int> p;
  for(int i = 0; i < 3;i++ ){
    cout<<"Enter Name: ";
    cin>> p.first;
    cout<<"Enter Number: ";
    cin>> p.second;
    s.insert(p);
  }

  set<pair<string,int> >::iterator it;
  for(it = s.begin(); it!= s.end();it++)
    {
    cout << (*it).first<<" ";
    cout << (*it).second<<endl;
    }
}
