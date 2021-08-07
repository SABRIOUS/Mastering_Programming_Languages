#include <stdio.h>
#include <stdbool.h>
#include <string.h>

// int main(){
  // write in the file
  // FILE *In = fopen("ahmed1.txt","w");
  // fprintf(In,"9\n");

  // read from the file
  // FILE *In = fopen("ahmed1.txt","r");
  // int x;
  // fscanf(In,"%d",&x);
  // printf("%d",x);

  // read from file then add into a nother number
//   FILE *In = fopen("ahmed1.txt","r");
//   FILE *Out = fopen("ahmed2.txt","w");
//   int i,n;
//   // read from first files
//   fscanf(In,"%d",&n);
//   for(i = 1; i <= n; i++){
//     fprintf(Out,"%d\n",i);
//   }
//   fclose(In);
//   fclose(Out);
//
//   return 0;
// }


int main(){
  FILE *readFile = fopen("ahmed2.txt","r");
  int x;
  // read eveything 
  while (fscanf(readFile,"%d",&x)!= EOF)
      printf("%d\n",x);

}
