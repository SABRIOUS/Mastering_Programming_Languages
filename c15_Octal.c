#include <stdio.h>


int main(void){

  while(1){
    int octal,decimal = 0,result = 1;
    printf("\n\nPlease Enter a octal number: ");
    scanf("%d",&octal);

    while (octal !=0){
      decimal += (octal % 10) * result;
      octal /= 10;
      result *=8;
    }
    printf("\nThe Decimal Number is: %d",decimal);
  }
}
