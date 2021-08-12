#include <stdio.h>
#include <stdbool.h>
#include <string.h>

// find and replace

int main(){
  FILE *f = fopen("string.txt","r");
  FILE *f2 = fopen("str.txt","w");

  char oldword[20],newWord[20],wordNTxt[20],c;

  printf("Enter the old word you want to change: ");
  scanf("%s",oldword);

  printf("Enter the new word: ");
  scanf("%s",newWord);

  // get data from first file then put it into wordNTxt
  while (fscanf(f,"%s",wordNTxt)!=EOF)
    // strncmp will retrun 0 if both word are the same
    // if the wrong word == to the word in text then change to newone
    if(strcmp(wordNTxt,oldword)==0)
      fprintf(f2,"%s ",newWord);
    else
      fprintf(f2,"%s ",wordNTxt);

  fclose(f);
  fclose(f2);
  f = fopen("string.txt","w");
  f2 = fopen("str.txt","r");

  while(fscanf(f2,"%c",&c)!= EOF)
    fprintf(f,"%c",c);

  fclose(f);
  fclose(f2);
  // هتخلي الكود يستني شوية علي بال ما تشوف التغيرات
  scanf("%*s");
  remove("str.txt");
  return 0;
}
