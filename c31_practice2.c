#include <stdio.h>
#include <stdbool.h>
#include <string.h>


// int main(){
//   int search_num,n,x,i,result = 0;
//   printf("\nEnter any number you want to search for: ");
//   scanf("%d",&search_num);
//
//   printf("\nhow many numbers you want: ");
//   scanf("%d",&n);
//
//   for(i = 0; i < n; i++){
//     printf("Enter (%d) number: ",i);
//     scanf("%d",&x);
//     result += search_num == x;
//   }
//
//   printf("number [%d] appears %d times\n",search_num,result);
// }


// برنامج المستخدم هيدخله رقم عشان عشان يبحث عنه و هيدخله مجموعة لحد ما يدخل 0
// يبقى كدة الارقام خلصت المطلوب هو البحث عن عدد تكرار الرقم الاول فى مجموعة الارقام اللى دخلت

// int main() {
//   char names[10][200] = {"zero","one","two"};
//   int i;
//
//   for (i = 0; i < 3;i++){
//     printf("%d %s\n",i,names[i]);
//   }
// }


// ---------------------
// int main(){
//   while(1){
//     int i,sum_digit = 0, temp;
//     printf("\n----------------------\n");
//     printf("Enter a number: ");
//     scanf("%d",&i);
//     temp = i;
//
//     while(i !=0 ){
//       i /= 10;
//       sum_digit++;
//     }
//
//     temp< 10 ? printf("\nThe number [%d] contains %d digit\n",temp,sum_digit): printf("\nThe number [%d] contains %d digits\n",temp,sum_digit);
//   }
//
// }


// int main(){
//
//   int i,n,odd_num = 0;
//   start:
//   odd_num = 0;
//   printf("\nEnter any numbers: ");
//   scanf("%d",&n);
//
//   for(i = 0; i < n; i++){
//     if ( i % 2 != 0) odd_num++;
//   }
//   printf("\nwe have %d odd numbers\n",odd_num);
//   goto start;
// }


// -------------------------
