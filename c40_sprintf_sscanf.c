#include <stdio.h>
#include <stdbool.h>
#include <string.h>

char data[] = "ahmed, sabry, www.gammal.tech";

int main(){
  char x1[20], x2[20], x3[20],new_data[100];

  // read from array of text
  sscanf(data,"%s%s%s",x1,x2,x3);
  // change first char to captial
  x1[0] -= 32;
  x2[0] -= 32;
  // add to the new data new strings
  sprintf(new_data,"%s %s https://%s",x1,x2,x3);

  printf("%s\n",new_data);
}
