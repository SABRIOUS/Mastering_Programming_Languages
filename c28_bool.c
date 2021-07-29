#include <stdio.h>

#include <stdbool.h>

// int main(){
//   bool x = 200;
//   printf("%d\n",x);
// }

// choose a good name for the function like isEven
// bool isEven (int x){
//   // if (x % 2 == 0)
//   //   return 1;
//   // return 0;
//
//   // second way
//   // return x % 2 == 0;
//
//   // third way
//   return !(x % 2);
// }
//
// int main(){
//   if (isEven(5))
//     printf("Even\n");
//   else
//     printf("Odd\n");
// }


// Examples

// برنامج يطلب من الشخص يدخله رقمين لو الأول أكبر من الثاني، يطبع
// first is the greatest " ولو العكس يطبع  " second is the
 // greatest " ( باستخدام ال boolean

// bool isGreat(int x, int y){
//   return x > y;
// }
//
// int main(){
//   int x,y;
//   printf("Enter the first num: ");
//   scanf("%d",&x);
//   printf("Enter the second num: ");
//   scanf("%d",&y);
//
//   if (isGreat(x, y))
//     printf("\nFirst is the greatest\n");
//   else
//     printf("\nSecond is the greatest\n");
// }


// ----------------------
 // برنامج يطلب من الشخص يدخله رقمين يجمعهم على بعض و لو المجموع أكبر من 10 يطب
 // ع "more than 10" لو العكس يطبع "less than 10"
 // ( باستخدام ال boolean )

// bool isMore(int x,int y){
//   int z = x + y;
//   return z > 10;
// }
//
//
// int main(){
//   if (isMore(5,9))
//     printf("\nMore than 10\n");
//   else
//     printf("\nless than 10\n");
// }



// ------------
// Q4

// برنامج يطلب من الشخص يدخله 3 أرقام و يطبع الأكبر فيهم ( باستخدام ا
//   ل boolean
// bool max_of_two(int x, int y){
//   return x > y;
// }
//
//
// int main(){
//   int x = 70,y = 1000,z=600;
//
//   if (max_of_two(x,y) && x > z)
//     printf("The max num is %d\n",x);
//
//   else if (max_of_two(y,x) && y > z)
//     printf("The max num is %d\n",y);
//
//   else
//     printf("The max num is %d\n",z);
// }
// -----------------------

// Q5
// برنامج يطلب من الشخص يدخله رقم، لو طلع موجب يطبع
//  "positive" لو سالب يطب
// ع "negative" لو صفر يطبع "zero" ( باستخدام ال boolean

// bool isPositive(int x){
//   return x > 0;
// }
//
// int main(){
//   int x;
//   printf("Enter a number: ");
//   scanf("%d",&x);
//
//
//   if (x == 0){
//     printf("Zero\n");
//     return 0;
//   }
//
//   if (isPositive(x))
//     printf("\nPositive\n");
//   else
//     printf("\nNegative\n");
// }


// ---------------------

// Q7
// برنامج يطلب من الشخص يدخله رقمين الاول يعبر عن قيمة مال مبدئى و الثاني يعبر عن اجمالى المال بعد شهر و يحسب قيمة الفرق و اذا كان ربح يطبع "
//  profit = ….  " و إذا كان خسارة يطبع
// " loss = …... " ( باستخدام ال boolean )

// bool isProfit(int x,int y){
//   int z = y - x;
//
//   return z > 0;
// }
//
//
// int main(){
//   int x,y;
//
//   printf("Enter salary: ");
//   scanf("%d",&x);
//
//   printf("Enter new salary: ");
//   scanf("%d",&y);
//
//   if (isProfit(x,y))
//     printf("profit\n");
//   else
//     printf("Loss");
//
//
// }


// ---------------------


// Q8
// رنامج يطلب من الشخص يدخله قيمة الراتب بتاعه و عدد ايام الأجازات خلال السنة .. لو عدد الأيام أقل من او يساوى 21 يضيف على المرتب 20% من قيمته .. لو اكتر من 21 تكون الزيادة 10% بس من قيمة المرتب الأصلى و يطبع قيمة الزيادة السنوية و قيمة الراتب الجديد ( باستخدام ال boolean )

// bool isSalary(int days){
//   return days <= 21;
// }
//
// int main(){
//   int salary, days;
//
//   printf("Enter your salary: ");
//   scanf("%d",&salary);
//
//   printf("Enter your days: ");
//   scanf("%d",&days);
//
//   if (isSalary(days))
//     salary = salary * 1.2;
//   else
//     salary = salary *1.1;
//
//   printf("\nThe new salary is: %d\n",salary);
//
// }



int main(){
  //  ? means condtions like if statements
  bool x = 1>5 ? 0:1;
  printf("%d",x);
}
