#include <stdio.h>
#include <stdbool.h>
#include <string.h>
// void print(int x[][3]){
//   int i,j;
//   printf("\n");
//   for (i = 0; i < 3; i++){
//     for (j = 0; j<3; j++)
//       printf("\t%d ",x[i][j]);
//   printf("\n");
//   }
//
//
// }
//
// int main(){
//   int x[][3] = {{1,2,3},
//                 {4,5,6},
//                 {7,8,9}
//               };
//
//   print(x);
// }

// int main(){
//   int total,child_a,child_b,child_c;
//
//   printf("Enter Total: ");
//   scanf("%d",&total);
//   printf("Enter three child: ");
//   scanf("%d%d%d",&child_a,&child_b,&child_c);
//
//   if (total >=200*child_a + 400*child_b + 600*child_c)
//     printf("Enough\n");
//   else
//     printf("Not Enough\n");
//
//   return 0;
// }



// int main(){
//   char i;
//
//   for(i = 'a'; i <= 'z'; i++){
//     printf("%c\n",i);
//   }
// }

// ------------------------

// برنامج فيه 15 اسم منهم اللى متكرر و المطلوب ان المستخدم هيدخلى اسم  هبحث عنه و اشوفه متكرر كام مرة

// int main(){
//   char x[20][100] = {"ahmed","sabry","ahmed","mohamed","ahmed"};
//   char name[20];
//   int i,sum_names = 0;
//
//   printf("Enter name: ");
//   scanf("%s", name);
//
//   for (i = 0; i < 5;i++){
//     sum_names += strcmp(name,x[i]) == 0;
//   }
//
//   printf("%d\n",sum_names);
// }

// -------------------

// تحويل الحروف من صغيرة الي كبيرة

// int main(){
//   int i;
//   for(i = 97; i <= 121; i++){
//     printf("%c\n",i-32);
//   }
// }


// int main(){
//    /* This array can hold a string of upto 25
//     * chars, if you are going to enter larger string
//     * then increase the array size accordingly
//     */
//    char name[25];
//    int i;
//    printf("Enter the string: ");
//    scanf("%s",name);
//
//    for(i=0;i<=strlen(name);i++){
//       if(name[i]>=65 && name[i]<=90)
//          name[i]=name[i]+32;
//    }
//    printf("\nLower Case String is: %s",name);
//    return 0;
// }


// ---------------------------
