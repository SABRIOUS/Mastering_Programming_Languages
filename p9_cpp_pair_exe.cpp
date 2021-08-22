#include <iostream>
#include <vector>
#include <string>
#include <algorithm> //to get sort funciton
#include <set>
#include <utility> //to use pair
using namespace std;

// int main(){
//   // pairs on names and telephone
//   pair <string, int> x[5];
//
//     for (int i = 0; i < 2; i++){
//         cout <<"("<<i<<") Enter name: ";
//         cin >> x[i].first;
//         cout <<"("<<i<<") Enter Numebr: ";
//         cin >> x[i].second;
//         printf("\n");
//     }
//
//     for (int i = 0; i < 2; i++){
//         cout << x[i].first<<" ";
//         cout << x[i].second<<endl;
//     }
//
// }


// CPP Set of Pair

int main(){
  set<pair<string,int> > s;
  pair<string,int> p;
  for(int i = 0; i<2; i++){
    cout << i <<") Enter Name: ";
    cin >> p.first;;
    cout << i <<") Enter number: ";
    cin >> p.second;;
    s.insert(p);
    printf("\n");
  }

  // to iterate over the set of pair
  set<pair<string,int> >::iterator it;

  for(it = s.begin(); it != s.end(); it++){
    cout<<(*it).first<<" ";
    cout<<(*it).second<<endl;
  }
}
