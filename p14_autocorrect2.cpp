#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <cctype> // to get upper and lower fun
#include <algorithm> //to get sort funciton
#include <set>
#include <utility> //to use pair
using namespace std;


// برنامج يسجل 3 كلمات
// ( hello , gammal , website )
// و يطلب من المستخدم يدخل كلمة و يصحح اى كلمة غلط المستخدم يدخلها للكلمة الاقرب ليها من ال 3
//  كلمات على اساس عدد الحروف المتشابهة
// برنامج يسجل 3 كلما
// ت ( hello , gammal ,
//    website )
   // و يطلب من المستخدم يدخل كلمة و يصحح اى كلمة غلط المستخدم يدخلها للكلمة الاقرب ليها من ال 3 كلمات على اساس عدد الحروف المتشابهة ( لو كلمتين فيهم نفس عدد الحروف المتشابهة يطبع الكلمة اللى عدد حروفها أقل )

vector<string> d;
bool check(string x){
  for (int i = 0; i < d.size(); i++)
    if (x == d[i])
      return 1;
  return 0;
}
// ----------

string correct(string wrongWord){
  int numCharacter = 0;
  string correctWord = "";
  for (int i = 0; i < d.size(); i++){
    int count = 0;
    cout << "----------------------"<<endl;
    cout << i<<")This is i"<<endl;
    cout << "----------------------"<<endl;
    // this for loop for character in distionaries words
    for (int j = 0; j < d[i].size(); j++)
      // this for loop for character in word
      {
        cout << j<<")This is j"<<endl;
        for (int k = 0; k < wrongWord.size(); k++)
          {cout << k<<")This is k"<<endl;
          if(d[i][j] == wrongWord[k])
            count++;}
      }

      if (count>numCharacter){
        numCharacter = count;
        correctWord = d[i];
      }
  }
  return correctWord;

}

// -------------

int main(){
  d.push_back("ahm");
  d.push_back("sa");
  d.push_back("mo");
  string word;
  cout << "Enter a word: ";
  cin >> word;
  if (check(word))
    cout <<word <<endl;
  else
    cout <<correct(word) <<endl;
}
