#include <stdio.h>

// [& means and]  [| means or]
// ^ المختلفين ترو المتشابيهين زيرو
// & تعني ما ناتج تشابه البت مع بعض
// int main(){
//   int k = 1;
//   while(k != 0){
//     int i,j;
//     printf("\nEnter two numbers: ");
//     scanf("%d %d",&i,&j);
//     int z = i ^ j;
//     printf("Z is %d\n",z);
//
//     printf("\nTo Start again Enter 1 else Enter 0: ");
//     scanf("%d",&k);
//     printf("---------------------------------\n");
//
//   }
//
//
//   return 0;
// }


// ---------------

// change values

// int main(){
//   int x = 5, y = 7;
//   printf("%d %d\n",x,y);
//   x ^= y; // here x become 2
//   y ^= x; // here y become 5
//   x ^= y; // here x become 7
//   printf("%d %d\n",x,y);
// }



// int main(){
//   int x = 5;
//   int z = x << 1;
//   // left shif means multible by 2
//   // >> right shif means divition by 2
//   printf("%d\n", z);
// }




int main(){
  // ~ not
  int x = 1 << 31;
  int z = ~x;

  printf("%d\n", 1<<31);
}



// int main(){
//   int x ,rev_num = 0,y;
//
//   printf("Enter a number: ");
//   scanf("%d",&x);
//   while(x > 0){
//     y = x %10;
//     rev_num = rev_num*10 + y;
//     x /= 10;
//   }
//   printf("%d",rev_num);
//
//   if (x != rev_num)
//     printf("correct\n");
//   else
//     printf("\nNo");
// }
