#include <stdio.h>
#include <stdbool.h>
#include <string.h>


// int main(){
//   // FILE *f = fopen("Ahmed.txt","w");
//   FILE *f = fopen("data.txt","r");
//   // read one word
//   // char x[500];
//   // fscanf(f,"%s",x);
//   // printf("%s",x);
//   // read every thing
//   char x;
//   while (fscanf(f,"%c",&x)!= EOF)
//     printf("%c",x);
//
//   return 0;
// }


// --------------


int main(){
  // char x[1000000];
  // read the first line
  // scanf("%[^\n]",x);
  // read untile .
  // scanf("%[^.]",x);

  FILE *f = fopen("d1.txt","r");
  // اقرأ لغاية حرف معين
  // fscanf(f,"%[^k]",x);
  // fscanf(f,"%[^.]",x);
  // printf("%s",x);
  // read everything
  char x;
  while(fscanf(f,"%c",&x)!= EOF)
      printf("%c",x);
  return 0;
}
