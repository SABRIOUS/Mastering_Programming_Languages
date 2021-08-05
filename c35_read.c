#include <stdio.h>
#include <stdbool.h>
#include <string.h>


// int main(){
//   char username[100], doamin[100];
//   printf("Email: ");
//   scanf("%[^@]%*c%[^\n]",username,doamin);
//   // scanf("%[^@]",username);
//   // scanf("%*c");
//   // scanf("%[^\n]",doamin);
//
//   printf("\n\nUsername: %s\n",username);
//   printf("Domain: %s\n",doamin);
// }


int main(){
  char gender, name[100];

  printf("Enter full name followed by(m/f):\n");
  scanf("%[^\n]%*c%c",name,&gender);
  printf("\n\n%s %c\n\n",name,gender);
}
