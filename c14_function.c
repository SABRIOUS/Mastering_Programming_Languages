#include <stdio.h>


int main(void){

  while(1){
    int binary,decimal = 0,result = 1;
    printf("\n\nPlease Enter a binary number: ");
    scanf("%d",&binary);

    while (binary !=0){
      decimal += (binary % 10) * result;
      binary /= 10;
      result *=2;
    }
    printf("\nThe Decimal Number is: %d",decimal);
  }
}
