#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <fstream>
#include <algorithm>
#include <sstream>
#include <set>
using namespace std;
// writing and append to existing file then read new information


int main(){

  string line;
  ofstream myfile("t.txt",ios::app);
  if(myfile.is_open()){
    myfile << "\n I am adding a line.\n";
    myfile << "\n another line.\n";
    myfile.close();
  }
  else
    cout << "Unable to open file for writing";

  // reading from that file

  ifstream readFile("t.txt");
  if(readFile.is_open()){
    while (getline(readFile,line)){
      cout << line <<endl;
    }
    readFile.close();
  }
  else
    cout << " I can not open the file for reading";
  return 0;

}
