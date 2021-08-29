#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <cctype> // to get upper and lower fun
#include <algorithm> //to get sort funciton
#include <set>
#include <utility> //to use pair
#include <fstream>
using namespace std;

map<string,string> m;

void ans1(){
  string q;
  cin.ignore();
  getline(cin,q);
  if (m[q] != "")
    cout <<m[q]<<endl;
  else
    cout <<"I don't know the question"<<endl;
}

int main(){
  // ifstream means read from file
  // ofstream write but fstream do both write and read at the same time
  fstream ahmed_chat("sabrychat.txt");
  if (ahmed_chat.is_open()){
    start:
    string question,answer;
    while(getline(ahmed_chat,question)){
      getline(ahmed_chat,answer);
      m[question] = answer;
    }
    ahmed_chat.close();
    cout << "what would you like to do?\n"
            "1. Add Q&A\n"
            "2. Ask a question\n"
            "3. Exit\n";
    int ans;
    cin>>ans;
    if(ans ==1){
      cout <<"Type The Question:"<<endl;
      cin.ignore();
      getline(cin,question);
      cout<<"Type the answer:"<<endl;
      getline(cin,answer);
      m[question] = answer;
      ahmed_chat.open("sabrychat.txt",ios::app);
      ahmed_chat<<question<<endl<<answer<<endl;
      ahmed_chat.close();
    }

    else if(ans == 2){
      ans1();
    }
    else if(ans==3)
      return 0;

    goto start;

  }
  else
    cout<<"Error: Cannot be open"<<endl;
}
