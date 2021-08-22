#include <iostream>
#include <vector>
#include <string>
#include <algorithm> //to get sort funciton
#include <set>
#include <utility> //to use pair
using namespace std;

int main(){
  set<pair<string,vector<int> > > s;
  set<pair<string,vector<int> > >::iterator it;



  for (int i = 0; i < 3; i++){
    pair<string,vector<int> > p;
    cout << "Ener name: ";
    cin >>p.first;
    more:
      // t to take a number to put it into vector
      int t;
      cout << "Enter number: ";
      cin >> t;
      if(t){
        p.second.push_back(t);

        goto more;
      }
      cout <<"\n";
      s.insert(p);
  }

  for (it = s.begin(); it != s.end(); it++){
    cout <<(*it).first<< endl;
    for (int j = 0; j < (*it).second.size(); j++)
      cout << "\t"<< (*it).second[j]<<endl;

  }


}
