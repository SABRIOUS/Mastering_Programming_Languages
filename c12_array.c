#include <stdio.h>
// برنامج يطلب من الشخص يدخله 10 أرق
// ام ورا بعض و يطبعهم ف الأخر كل رقم فى سطر
//  و يطبعله مجموعهم

// int main(void)
// {
//   int i, x[10],total = 0;
//   for (i = 0; i < 10; i++){
//     printf("Please Enter number %d: ",i);
//     scanf("%d",&x[i]);
//     total += x[i];
//   }
  // for (i = 0; i < 10; i++){
  //   printf("%d\n",x[i]);
  //   total += x[i];
  // }
//   printf("total = %d",total);
// }

// ------------------

// برنامج يطلب  من الشخص يدخله 10 ارقام مختلفة و يطبعله الأرقام السالبة

// int main(void)
// {
//   int i, x[10],total = 0;
//   for (i = 0; i < 10; i++){
//     printf("Please Enter number %d: ",i);
//     scanf("%d",&x[i]);
//
// }
//     for (i = 0; i < 10; i++){
//       if (x[i] < 0) {
//         printf("%d\n",x[i]);
//       }
//   }
// }


// رنامج يطلب من الشخص يدخله رقم يعبر
// عن عدد الأرقام اللى هيدخلها بعديه و يسجل الارقام اللى هيكتبها
//  يطبعها فى الاخر و يطبع مجموعها

// int main(void){
//   int i,n,total = 0;
//   printf("Please Enter How many number you want to add to the list arr: ");
//   scanf("%d",&n);
//   int arr[n];
//
//   for (i = 0; i < n; i++){
//     printf("Please Enter number %d: ",i);
//     scanf("%d",&arr[i]);
//     total += arr[i];
//   }
//   printf("\nTotal is %d \n",total);
// }

// --------------------

// برنامج فيه array بتحتوى على 5 أرقام و array تانية فيها 5 خانات فاضيين
// المطلوب ان ال array  الثانية دى تتملى من ال array الاولى

// int main(void){
//   int i,x[5],y[5];
//
//   for (i = 0; i < 5 ; i++){
//     printf("Please Enter the %d Number: ",i);
//     scanf("%d",&x[i]);
//   }
//
//   for (i = 0; i < 5 ; i++){
//     y[i] = x[i];
//   }
//
//   for (i = 0; i < 5 ; i++){
//     printf("The %d Number = %d\n",i,y[i]);
//   }
// }

// -----------------
// Q7

// برنامج فيه array بتحتوى على 5 أرقام و
// array تانية بتحتوى على 5 أرقام مختلفين و
//  array تالتة فيها 10 خانات فاضيين و المطلوب ان ال
//  array  التالتة دى تتملى من ال array
//  الاولى و الثانية و يتطبع فى الاخر العناصر بالترتيب بس من ا
//  ل array اللى فيها 10 خانات بعد ما اتملت .


// int main(void) {
//   int i,j=5,arr1[5],arr2[5],arr3[10];
//
//   // first_array
//   for (i = 0; i < 5 ; i++){
//     printf("Enter a number for arr1: ");
//     scanf("%d",&arr1[i]);
//   }
//
//   // second_array
//   for (i = 0; i < 5 ; i++){
//     printf("Enter a number for arr2: ");
//     scanf("%d",&arr2[i]);
//   }
//
//   // add first array to the arr3
//   for (i = 0; i < 5 ; i++){
//       arr3[i] = arr1[i];
//   }
//
//   for (i = 0; i < 5 ; i++){
//       arr3[j] = arr2[i];
//       j += 1;
//   }
//   for (i = 0; i < 10 ; i++){
//     printf("Number %d = %d\n",i,arr3[i]);
//   }
//
// }

// Q8
// برنامج يطلب من الشخص يدخله رقم يعبر عن عدد الارقام
// للى هيدخلها بعديه و يطبع اكبر رقم فى الارقام دى

// int main(void){
//   int i,n,max_num;
//   printf("Please Enter How many number you want: ");
//   scanf("%d",&n);
//   // assign n int a new array
//   int arr[n];
//
//   for (i=0 ; i < n; i++ ){
//     printf("Enter the number %d: ",i);
//     scanf("%d",&arr[i]);
//   }
//
//   // assume that the first num the maximum.
//   // then iterate over the array to get the maximum
//   max_num= arr[0];
//   // min_num = arr[0];
//   for (i = 0; i < n; i++){
//     // if we want the minmum number we should use
//     // if (arr[i] < max_num) min_num = arr[i];
//     if (arr[i] > max_num){
//       max_num = arr[i];
//     }
//   }
//
//   printf("\n The Maximum Number is %d\n",max_num);
//
// }

// ------------------

// Q10

// برنامج يطلب من المستخدم يدخل ارقام عشوائية
// و طول ما الارقام اللى بتدخل و البرنامج يعد كام رقم موجب دخل
 // و كام رقم سالب دخل و البرنامج يقف لما المستخدم يدخل 0


 int main(void){
   int n, positive_num = 0,negative_num = 0;
   do {
     printf("please Enter  a any number: ");
     scanf("%d",&n);
     if (n >0){
       positive_num += 1;
     }
     else if (n <0){
       negative_num += 1;
     }
   } while(n != 0);

   printf("\n We Have %d Positive Numbers\n",positive_num);
   printf("\n We Have %d Ngeative Numbers\n",negative_num);

 }
