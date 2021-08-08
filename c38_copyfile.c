#include <stdio.h>
#include <stdbool.h>
#include <string.h>


int main(){
  FILE *f = fopen("n.txt","r");
  FILE *copy = fopen("n1.txt","w");
  char text;
  int i,count=0;
  while (fscanf(f,"%c",&text) != EOF){
    // read from f file and copy to another one
    // &text with scanf because it's just one character
    fprintf(copy,"%c",text);
    if(text !=' '&& text !='\n')
      count++;
  }

  printf("%d",count);
  return 0;
}
