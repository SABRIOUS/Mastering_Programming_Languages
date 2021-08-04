#include <stdio.h>
#include <stdbool.h>
#include <string.h>

void status(int x){
  // this ? instead of if statments
  printf(x>0 ? "Positive\n":(x < 0 ?"Negative\n":"Zero\n"));
  printf(x % 2 ? "Odd\n":"Even\n");
}

int digits(int x){
    int count_digit = 0;
    while(x > 0){
      x /= 10;
      count_digit += 1;
    }
    return count_digit;
}

int isPrime(int x){
  int i;
  for(i=2; i < x;i++){
    if(x%i==0)
      return 0;
  }
  return x>1 ? 1:0;
}

int isreverse(int x){
  int y,result = 0;
  while(x>0){
    y = x % 10;
    result = result*10 + y;
    x /= 10;
  }
  return result;
}
int main(){
  int x;
  printf("\n-------------\n");
  printf("Enter a number: ");
  scanf("%d",&x);
  status(x);
  printf("%d digits\n",digits(x));
  printf(isPrime(x) ? "Prime\n":"Not Prime\n");
  printf(isreverse(x) == x ? "Yes is reverse\n":"Not a reverse");
}
