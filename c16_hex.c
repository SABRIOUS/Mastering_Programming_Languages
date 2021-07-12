#include  <stdio.h>

int main(void){
  while(1){
    int x,i,arr[100];
    printf("\nEnter a number: ");
    scanf("%d",&x);

    for (i = 0; x > 0; i++){
      arr[i] = x %8;
      x /= 8;
    }

    for (i -= 1; i >= 0; i--){
      printf("\n%d",arr[i]);
    }
  }
}
