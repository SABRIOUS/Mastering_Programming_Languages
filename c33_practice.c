#include <stdio.h>
#include <stdbool.h>
#include <string.h>

// int main(){
//   int x,y;
//   printf("Enter a number: ");
//   scanf("%d",&x);
//   while(x > 0){
//     y = x%10;
//     y%2==0 ? printf("the number %d id even\n",y) : printf("the number %d id odd\n",y);
//     x /= 10;
//   }
// }

// int isPrime(int x){
//   int i;
//   for(i=2; i < x;i++){
//     if(x%i==0)
//       return 0;
//   }
//   return 1;
// }
//
// int main(){
//   int x;
//   printf("Enter a number: ");
//   scanf("%d",&x);
//   while(x>0){
//     // printf(isPrime(x%10) ? "Prime\n":"Not Prime\n");
//     isPrime(x%10) ? printf("Num: %d Prime\n",x%10):printf("Num: %d Not Prime\n",x%10);
//     x /= 10;
//   }
//
// }

// --------------------

// int reverseNum(int x){
//   int y,result = 0;
//   while(x>0){
//     y = x%10;
//     result = result*10 + y;
//     x /= 10;
//   }
//   return result;
// }
//
//
// int main(){
//
//   int x;
//   s:
//   printf("\n\n");
//   printf("Enter a number: ");
//   scanf("%d",&x);
//   printf("Reverse is %d\n",reverseNum(x));
//   printf(reverseNum(x) == x ? "Palindrome\n":"NOT Palindrome\n");
//   goto s;
// }

// ------------------------

// int main(){
//   int i,y,x[] = {8,5,6,90,3,1};
//   printf("Enter a number: ");
//   scanf("%d",&y);
//
//   for (i = 0; i < 6; i++)
//   if (x[i]==y){
//     printf("Found");
//     return 0;
//   }
//   printf("Not Found");
// }


// switch range


// int main(){
//   int x;
//   printf("Enter Grade: ");
//   scanf("%d",&x);
//
//   switch(x){
//     case 91 ... 100:
//       printf("A\n");
//       break;
//     case 81 ... 90:
//       printf("B\n");
//       break;
//     case 71 ... 80:
//       printf("C\n");
//       break;
//
//     default:
//       printf("Wrong Grade\n");
//   }
// }


int main(){
  int x,i;
  printf("Enter a num: ");
  scanf("%d",&x);

  int sum = (x * (x+1)) / 2;
  // for (i=0; i < x; i++){
  //   printf("%d\n",i);
  // }

  printf("%d\n",sum);
}
