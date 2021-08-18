#include <iostream>
#include <vector>
using namespace std;

int main(){
  int choice;
  int k = 1,c;
  vector <string> \
  btatsforn = {"chiken","botato","tomato","salt"},\
  bashmeal = {"meat","pasta","milk","zitton","oil"},\
  koshery = {"rice","salt","makrona","aads pogba","onion","da'qa"};
  string m;

  while(k){
    cout <<"\n-----------------------\n";
    cout <<"We have three meals (btatsforn,bashmeal,koshery) "\
          "\nwhat do you want to eat Enter 1 or 2 or 3:>>> ";


    cin >> choice;
    cout<<"\n";
    if (choice == 1){
      cout<<"YOU CHOOSE btatsforn Do you want to add more [1] For yes and [0] For No\n";
      cin >> c;
      if (c==1){
          cout<<"Enter your additional: ";
          cin >>m;
          btatsforn.push_back(m);
          for (int i = 0; i < btatsforn.size(); i++)
            cout <<btatsforn[i]<<endl;
            c =0;
      }
      else{
        for (int i = 0; i < btatsforn.size(); i++)
          cout <<btatsforn[i]<<endl;
        c = 0;
      }

    }
    else if (choice == 2){
      cout<<"YOU CHOOSE bashmeal\n";
      for (int i = 0; i < bashmeal.size(); i++)
        cout <<bashmeal[i]<<endl;
    }
    else if (choice == 3){
      cout<<"YOU CHOOSE koshery\n";
      for (int i = 0; i < koshery.size(); i++)
        cout <<koshery[i]<<endl;
    }

    else{
      cout<<"Wrong choice\n";
      cout << "Do you want to start again [1] for Yes [0] for No: ";
      cin >>k;
    }

  }


}
