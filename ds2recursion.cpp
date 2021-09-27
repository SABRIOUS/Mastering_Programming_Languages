#include "header.hpp"


int power(int x,int y){


  if(y==0)
    return 1;

  int z = power(x,y/2);
  z *= z;


  if(y%2==1)
    z *= x;
    cout<<"y: "<< y<<" z "<<z<<endl;
  return z;
}



int main(){
  while(1){
    int x,y;
    cout << "\nx = ";
    cin >> x;
    cout << "\ny = ";
    cin >> y;


    cout <<"\n"<<power(x,y)<<"\n";
  }

}
