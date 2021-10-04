#include "header.hpp"



int main(){
  // new بتحجز مكان في ال heap
  // malloc and calloc but in c++
  // int *x = new int;
  int *y = new int[10];
  for(int i = 0; i < 10; i++)
    y[i] = 50;

    for(int i = 0; i < 10; i++)
      cout<< y[i]<< ", ";
}
