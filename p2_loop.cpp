#include <iostream>
using namespace std;


int main(){
  int i = 7;
  for(int i=0 ;i<3 ; i++){
    cout<<"\nThe first i = "<<i;
    for(int i=0 ;i<3 ; i++)
      {
        cout<<"\nThe second i = "<<i;
    }
  }

  cout<<"The i = "<<i;
}
