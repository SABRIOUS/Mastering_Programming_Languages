#include <stdio.h>
#include <stdbool.h>
#include <string.h>



// void upper(char x[100]){
//   char new_word[100];
//   int i;
//   for(i=0; x[i];i++){
//     if (x[i]>=97 && x[i] <= 122)
//       new_word[i] = x[i] -32;
//     else
//       new_word[i] = x[i];
//   }
//
//   printf("The Old word was = %s\n",x);
//   printf("The New one is = %s\n",new_word);
// }
//
//
// int main(){
//   // change character from small to captial
//   char word[100];
//   printf("Enter your name: ");
//   scanf("%s",word);
//   printf("---------------\n\n");
//   upper(word);
//   return 0;
// }





// int main(void){
//   char word[3][20];
//   int i;
//   printf("Enter your full name: ");
//   for(i = 0; i<3; i++){
//     scanf("%s",word[i]);
//     if (word[i][0]>=97 && word[i][0] <= 122)
//       word[i][0] = word[i][0] - 32;
//
//   }
//   printf("%s\n",word);
//   return 0;
// }

// ---------------------

// int main(void){
//   int x,count=0;
//   // do {
//   //   printf("Enter a number: ");
//   //   scanf("%d",&x);
//   //   if (x==-1)
//   //     break;
//   //   count++;
//   // } while(x != -1);
//   while(scanf("%d",&x) && x!= -1)
//     count++;
//
//   printf("\nCount: %d",count);
// }


// --------------------------
// sprintf بتطبع داخل الكلمة

//
// int main(){
//   char x[100];
//   sprintf(x,"My name is ahmed\n");
//   printf("%s\n",x);
// }


// ----------------


// int main(){
//   FILE *f = fopen("string.txt","w");
//   FILE *getdata = fopen("string.txt","r");
//   char x[10];
//   fscanf(getdata,"%[^\n]",x);
//   printf("%s",x);
//
// }


// --------------------

int main(){
  char address[150];
  int x;
  printf("Enter street: ");
  scanf("%s",address);
  sscanf(address,"%d",&x);
  printf("%d",x);
}
