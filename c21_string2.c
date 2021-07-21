#include <stdio.h>
#include <string.h>

// int main(){
//   // three group three names 6 characters for each name
//   char school_group[3][3][6];
//   int i,j;
//
//   for(i=0; i<3; i++){
//     for(j=0; j<3; j++){
//       scanf("%s",school_group[i][j]);
//     }
//   }
//
//   printf("\n");
//   for(i=0; i<3; i++){
//     for(j=0; j<3; j++){
//       printf("%s ",school_group[i][j]);
//     }
//     printf("\n");
//   }
//   return 0;
// }


// -----------------
// Q1
// برنامج يطلب من المستخدم يدخله 5 اسماء و يطبع كل اسم و جنبه عدد حروفه
// ( بطريقتين مختلفتين )

// first_one

// int main(){
//   char name[20];
//   printf("Enter your name: ");
//   scanf("%s",name);
//   printf("\nName is %s\n and the length of name is %d",name,strlen(name));
// }


// int main(){
//   char name[20],count_character = 0;
//   int i;
//   printf("Enter your name: ");
//   scanf("%s",name);
//
//   printf("\n");
//
//   for(i = 0 ; i < strlen(name); i++){
//     count_character++;
//   }
//
//   printf("\nName is %s and the length of name is %d\n",name,count_character);
// }


// int main(){
//   int i;
//   char names[5][10];
//
//   for(i = 0; i < 5; i++){
//     printf("%d) Name: ",i+1);
//     scanf("%s",names[i]);
//   }
//
//   for(i = 0; i < 5; i++){
//     printf("name is %s the length of name = %d \n",names[i],strlen(names[i]));
//   }
// }


// ---------------------
// Q3
// برنامج فيه array 3D فيها 3 مجموعات
// كل مجموعة 3 طلاب كل طالب اسمه لا يزيد عن 10 حروف
// يسأل على اسماء الطلاب و يطبع كل مجموعة فى سطر


// int main(){
//   char groups[3][3][10];
//   int i,j;
//
//   for (i = 0; i <3; i++){
//     for (j = 0; j <3; j++){
//       printf("Enter name number (%d) names in group [%d]: ",j+1,i+1);
//       scanf("%s",groups[i][j]);
//     }
//     printf("\n");
//   }
//
//
//   for (i = 0; i <3; i++){
//     for (j = 0; j <3; j++){
//       printf("%s ",groups[i][j]);
//     }
//     printf("\n");
//   }
// }



// ----------------------

// Q3

// برنامج يطلب من المستخدم يدخل جملة بحد اقصى
// 50 حرف، و يطبع عدد الحروف ال capital

// int main(void){
//   int i;
//   // '0' to '9','z' to 'Z'
//   for (i = 'A'; i <= 'Z'; i++){
//     printf("%c\t%d\n",i,i);
//   }
//
//   return 0;
// }
