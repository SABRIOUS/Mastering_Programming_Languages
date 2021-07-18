#include <stdio.h>
#include <string.h>


// int main(void){
//   char x[] = "Ahmed",y[10];
//   strcpy(y,x);
//   if (strcmp(x,y) == 0){
//     printf("Yes The same\n");
//   }
//   else{
//     printf("No..");
//   }
//   return 0;
// }

// Q2
// برنامج يطلب من المستخدم يدخله 5 اسماء و يطبع كل اسم و جنبه عدد حروفه


// int main(){
//   char name[5][20];
//   int i;
//
//   for(i = 0; i < 5; i++){
//     printf("%d) Name: ",i+1);
//     scanf("%s",name[i]);
//   }
//
//   for(i = 0; i < 5; i++){
//     printf("%s = %d letters\n",name[i],strlen(name[i]));
//   }
//
//   return 0;
// }

// -------------------
// برنامج يطلب من المستخدم يدخله 3 اسماء و يطبعهم معكوسين الحروف يعنى
// " ⇐ " Amr " علما بأن طول ال string يمكن حسابه باستخدام أمر ( ;(
// )string_length = strlen ) و قبل ال main يكون فى  <include <string.h #     ( للمتفوقين )


int main(void){
  int i,j;
  char name[3][20];

  for(i =0; i < 3; i++){
    printf("%d) Name: ",i+1);
    scanf("%s",name[i]);
  }

  for(i =0; i < 3; i++){
    for (j = strlen(name[i]) - 1; j >= 0 ; j--){
      printf("%c ",name[i][j]);
    }
    printf("\n");

  }
}
