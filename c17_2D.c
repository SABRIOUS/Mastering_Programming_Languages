#include  <stdio.h>
// Q1
// برنامج يطلب من الشخص يدخله 25 رقم ورا بعض
// و يطبعهم ف الأخر كل 5 أرقام فى سطر و يطبعله مجموعهم ( باستخدام ال 2D array )
// int main(void){
//   int i,j,arr[5][5],total = 0;
//
//   for(i=0; i < 5; i++){
//     printf("Enter 5 number sperate by space like 1 2 ... 5>>>  \n");
//     for(j=0; j < 5; j++){
//       scanf("%d",&arr[i][j]);
//     }
//   }
//
//   for(i=0; i < 5; i++)
//     for(j=0; j < 5; j++){
//       total += arr[i][j];
//     }
//
//     printf("\nTotal is = %d\n",total);
// }
// ---------------------
// Q2

// برنامج يطلب  من الشخص يدخله 10 أرقام مختلفين
 // يسجلهم فى 2D array حجمها 2x5 و يطبع الأرقام السالبة


// int main(void){
//   int i,j,arr[2][5],negative_num = 0;
//
//   for(i = 0; i < 2; i++){
//     printf("Enter just five numbers: 1 2...5 >>>>\n");
//     for(j = 0; j < 5; j++)
//       scanf("%d", &arr[i][j]);
//   }
//
//   for(i = 0; i < 2; i++)
//     for(j = 0; j < 5; j++){
//       if (arr[i][j] < 0)
//         negative_num += 1;
//     }
//
//   printf("\nNegative numbers = %d",negative_num);
// }

// ------------------------

// Q3
// برنامج يطلب من الشخص يدخله مجموعة ارقام و
 // لو لقى فى رقم من اللى دخلهم = 5 يطبعله " found "



// int main(void){
//   int i,x;
//   printf("Enter how many numbers you want: ");
//   scanf("%d", &x);
//   int arr[x];
//
//   for(i = 0; i < x; i++){
//     printf("add number to array: ");
//     scanf("%d", &arr[i]);
//   }
//
//   for(i = 0; i < x; i++){
//     if (arr[i] == 5){
//       printf("\nFound 5 in position %d\n",i);
//       return 0;
//     }
//   }
//
// }

// ------------------------

// Q4
// برنامج يطلب من الشخص يدخله رقمين يعبروا عن حجم ال 2D array
// و يسجل الارقام اللى هيكتبها و يطبعها فى الاخر و يطبع مجموعها

// int main(void){
//   int i,j,row,columns,total = 0;
//   printf("how many rows  and columns you want Enter two numbers: ");
//   scanf("%d%d",&row,&columns);
//   int arr[row][columns];
//
//   for(i=0; i < row; i++){
//     printf("Enter numbers >>>  \n");
//     for(j=0; j < columns; j++){
//       scanf("%d",&arr[i][j]);
//     }
//   }
//
//   for(i=0; i < row; i++)
//     for(j=0; j < columns; j++){
//       total += arr[i][j];
//     }
//
//     printf("\nTotal is = %d\n",total);
// }



// -----------------------

// Q5

// برنامج يطلب من الشخص يدخله رقمين يعبروا عن حجم ال 2D array  و يسجل
// الارقام اللى هيكتبها و يطبع الارقام الموجبة فقط من اللى دخلهم و يطبع عددهم

// int main(void){
//   int i,j,row,columns,total = 0,positive_count = 0;
//   printf("how many rows  and columns you want Enter two numbers: ");
//   scanf("%d%d",&row,&columns);
//   int arr[row][columns];
//
//   for(i=0; i < row; i++){
//     printf("Enter numbers >>>  \n");
//     for(j=0; j < columns; j++){
//       scanf("%d",&arr[i][j]);
//     }
//   }
//
//   for(i=0; i < row; i++)
//     for(j=0; j < columns; j++){
//       if(arr[i][j] > 0){
//         positive_count += 1;
//         total +=arr[i][j] ;
//       }
//
//     }
//
//     printf("\n we have %d positive numbers and their total is = %d \n",positive_count,total);
// }

// --------------------

// Q6
// برنامج فيه array بتحتوى على 10 أرقام
// و array تانية 2D  حجمها 2x5  و المطلوب ان ا
// ل array  الثانية دى تتملى من ال array الاولى

// int main(void){
//   int i,j,arr1[10] = {1,2,3,4,5,6,7,8,9,10},arr2[2][5],k = 0;
//   for(i = 0; i < 2; i++){
//     for(j = 0; j < 5; j++){
//       arr2[i][j] = arr1[k];
//       k += 1;
//     }
//   }
//
//     for(i = 0; i < 2; i++){
//       for(j = 0; j < 5; j++){
//         printf("%d\t",arr2[i][j]);
//       }
//       printf("\n");
//     }
//
// }

// -----------------


// Q7
// برنامج فيه array بتحتوى على 5أرقام
// array تانية بتحتوى على 5ارقام مختلفين و array 2D فاضية حجمها 2x5
 // المطلوب ان ال array  التالتة دى تتملى من ال array الاولى و الثانية و يتطبع فى الاخر العناصر بالترتيب بس من ال array ال 2D بعد ما اتملت .

//  int main(void) {
//    int i,j = 0,arr1[5]={1,2,3,4,5},arr2[5]={6,7,8,9,10},arr_temp[10],arr3[2][5],k=0;
//
//    // get all element from arr1 and add to arr_temp
//    for(i = 0; i < 5; i++){
//      arr_temp[i] = arr1[i];
//    }
//    // get all element from arr2 and add to arr_temp
//    for(i = 5; i < 10;i++ ,j++){
//      arr_temp[i] = arr2[j];
//    }
//
//    // add all elemnt from arr temp to 2D array arr3[2][5]
//    for(i = 0; i < 2;i++){
//      for(j = 0; j<5; j++){
//        arr3[i][j] = arr_temp[k];
//        k++;
//      }
//    }
//
//    // print the matrix of [2][5]
//    for(i = 0; i < 2; i++){
//          for(j = 0; j < 5; j++){
//            printf("%d\t",arr3[i][j]);
//          }
//          printf("\n");
//        }
//
// }

// --------------------------

// Q8

// int main(void){
//   int i,j,row,column;
//   printf("\nEnter number of rows and columns: ");
//   scanf("%d%d",&row,&column);
//   int arr[row][column];
//
//   for(i =0; i < row; i++){
//     printf("Enter number to add to the array\n");
//     for(j = 0; j < column ;j++){
//       scanf("%d",&arr[i][j]);
//     }
//   }
//
//
//   // get the max number of array
//   int max_num = arr[0][0];
//   for(i =0; i < row; i++){
//     for(j = 0; j < column ;j++){
//       if (arr[i][j] > max_num ){
//         max_num = arr[i][j];
//       }
//     }
//   }
//
//   printf("\nThe max number is The 2D array is = %d",max_num);
//
//
// }



// Q9
// برنامج يطلب من الشخص يدخله رقمين يعبروا عن حجم ال 2D array
//  بعدها يدخل ارقام عشوائية يملى بيها ال array
//  و يطبع اصغر رقم فى الارقام دى

// int main(void){
//   int i,j,row,column;
//   printf("\nEnter number of rows and columns: ");
//   scanf("%d%d",&row,&column);
//   int arr[row][column];
//
//   for(i =0; i < row; i++){
//     printf("Enter number to add to the array\n");
//     for(j = 0; j < column ;j++){
//       scanf("%d",&arr[i][j]);
//     }
//   }
//
//   // get the min number of array
//   int min_num = arr[0][0];
//   for(i =0; i < row; i++){
//     for(j = 0; j < column ;j++){
//       if (arr[i][j] < min_num ){
//         min_num = arr[i][j];
//       }
//     }
//   }
//
//   printf("\nThe min number is The 2D array is = %d",min_num);
//
// }



// -----------------------------

// Q10
// برنامج يطلب من المستخدم يدخل ارقام عشوائية و البرنامج يعد كام رقم موجب دخل و كام رقم سالب دخل و البرنامج يقف لما المستخدم يدخل 0
// -----------------
// int main(){
//   int i,positive_num = 0,negative_num = 0;
//
//   do {
//     printf("Please Enter a number: ");
//     scanf("%d", &i);
//     if (i > 0){
//       positive_num += 1;
//     }
//     else if (i < 0){
//       negative_num += 1;
//     }
//   }while(i != 0);
//
//   printf("\n we have %d Positvie number and %d negative_num\n",positive_num,negative_num);
//
// }
