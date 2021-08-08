#include <stdio.h>
#include <stdbool.h>
#include <string.h>

// برنامج يطلب من المستخدم يدخله 4
//  أرقام و يشوف أكبر رقم فيهم  ( باستخدام function ) و يطبعه

// int larg2(int x,int y){
//   if (x > y)
//     return x;
//   return y;
// }
//
// int larg3(int x,int y,int z){
//   int n = larg2(x,y);
//   if(n > z)
//     return n;
//   return z;
// }
//
// int larg4(int x,int y,int z,int k){
//   int n = larg3(x,y,z);
//   if(n > k)
//     return n;
//   return k;
// }
//
// int main(void){
//   int x = 50, y = 7, z = 8,k = 82;
//   printf("The large number is %d\n",larg4(x,y,z,k));
// }



int main(){
  int n[4] = {50,7,8,82},i;
  int largNm = n[0];

  for(i=0 ;i < 4 ;i++){
    if( n[i]> largNm)
      largNm = n[i];
  }
  printf("%d\n",largNm );
}
