#include <iostream>
#include <string>
using namespace std;


bool getWin(char arr[2][3]);
int main(){
  char x[2][3] = {'w','x','x',
                  '4','5','6'};
//
//   for (int i = 0; i <2; i++){
//       int sumX = 0;
//       for(int j = 0; j < 3; j++){
//         if (x[i][j]=='x') sumX += 1;
//       }
//     if (sumX == 3){
//       cout <<"\nWin\n";
//       return 1;
//     }
//     else{
//       cout <<"\nYou Loss\n";
//       return 0;
//     }
//   }
//
    if (getWin(x)==1) cout <<"Wiiiiiiiiin";
    else cout <<"LLLLLLLLLLose";


}


bool getWin(char x[2][3]){
    for (int i = 0; i <2; i++){
        int sumX = 0;
        for(int j = 0; j < 3; j++){
          if (x[i][j]=='x') sumX += 1;
        }
      if (sumX == 3){
        // cout <<"\nWin\n";
        return 1;
        break;
      }
    }
    return 0;
}
