#include <iostream>
#include <vector>
#include <string>
#include <algorithm> //to get sort funciton
#include <set>
#include <utility> //to use pair
using namespace std;


// int main(){
//   set<pair<int,string> > s;
//
//   s.insert(pair<int,string> (123,"ahmed sabry") );
//   s.insert(pair<int,string> (567,"mohamed sabry") );
//   s.insert(pair<int,string> (111,"esraa sabry") );
//
//   set<pair<int,string> >::iterator it;
//
//   for (it = s.begin(); it != s.end(); it++){
//     cout << (*it).first << " ";
//     cout << (*it).second << endl;
//   }
//
// }


// ف للتشجيع على القراءة قم بعمل برنامج يسمح للشخص بكتابة أسماء كتبه المفضلة أو التي يريد قراءتها و عدد صفحات كل منها .. و المطلوب من البرنامج ترتيب الكتب على أساس الأقل في عدد الصفحات

// int main(){
//   set<pair<int,string> > s;
//   pair<int,string> book;
//
//   for(int i = 0; i < 3; i++ ){
//     cout << "Count book pages: ";
//     cin >> book.first;
//     cout << "book name: ";
//     cin >> book.second;
//     s.insert(book);
//   }
//
//   set<pair<int,string> >::iterator it;
//
//   for (it = s.begin(); it != s.end(); it++){
//     cout << (*it).first << " ";
//     cout << (*it).second << endl;
//   }
//
// }
