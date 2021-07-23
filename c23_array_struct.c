#include <stdio.h>


// struct student{
//   char name[20],phone_num[20];
//   int videos_watched;
// };
//
// int main(){
//   struct student x[300];
//   int i;
//
//   for (i = 0; i<2; i++){
//     printf("%d)\n",i+1);
//
//     printf("Name: ");
//     scanf("%s",x[i].name);
//
//     printf("Your Phone: ");
//     scanf("%s",x[i].phone_num);
//
//     printf("How many video did you watch: ");
//     scanf("%d",&x[i].videos_watched);
//     printf("--------------\n");
//
//   }
//
//   for (i = 0; i<2; i++){
//     printf("%d)\n",i+1);
//     printf("Name: %s\n",x[i].name);
//     printf("Phone: %s\n",x[i].phone_num);
//     printf("Videos: %d\n",&x[i].videos_watched);
//
//
//   }
//
//   return 0;
// }


// --------------------
// برنامج يخزن بيانات مجموعة من الطلاب (
// الاسم و السن ) و يطبعها جنب لكل طالب فى سطر

// struct students{
//   char name[20];
//   int age;
// };
//
// int main(){
//   struct students x[10];
//   int i;
//   for (i = 0; i < 3; i++){
//     printf("%d) Name Student: and age is:  ",i+1);
//     scanf("%s%*c%d",x[i].name,&x[i].age);
//
//   }
//   printf("\n");
//   for (i = 0; i < 3; i++){
//     printf("Name %d) = %s and his age = %d\n",i+1,x[i].name,x[i].age);
//
//   }
//
// }



// -----------------------
// Q2 and Q3
// برنامج يخزن  بيانات مجموعة من الطلاب ( الاسم و السن ) و درجاتهم فى مجموعة من الموا
// د (math, science ,English )
// و بفرض أن كل مادة من 200 درجة يحسب النسبة المئوية لكل مادة و للمجموع


// struct group_students{
//   char name[20];
//   int age,math,science,english;
// };
//
//
// int main(){
//   // make agroup for 100 student to enter
//   struct group_students x[100];
//   int i;
//
//   // i am gonna to enter just 3 students
//   for (i = 0; i < 3; i++){
//     printf("%d)\n",i+1);
//     // Name
//     printf("Name: ");
//     scanf("%s",x[i].name);
//
//     // Age
//     printf("Age: ");
//     scanf("%d",&x[i].age);
//
//     // Degree in math
//     printf("Math: ");
//     scanf("%d",&x[i].math);
//
//     // Degree in science
//     printf("Science: ");
//     scanf("%d",&x[i].science);
//
//     // Degree in English
//     printf("English: ");
//     scanf("%d",&x[i].english);
//
//     printf("\n-----------------------\n");
//
//   }
//
//   for (i = 0; i < 3; i++){
//     printf("%d) - Name = %s and his age = %d\n",i+1,x[i].name,x[i].age);
//     printf("he got %.2f in math\n",x[i].math / 200.f);
//     printf("he got %.2f in science\n",x[i].science/200.f);
//     printf("he got %.2f in english\n",x[i].english/200.f);
//     printf("He got %d from 200\n",x[i].english + x[i].science + x[i].english);
//
//     printf("\n-----------------------\n");
//
//   }
// }

// -----------------------------

// برنامج يخزن بيانات مجموعة من الطلاب ( الاسم و السن ) و درجاتهم فى مجموعة من الموا
// د (math, science ,English )
// و بفرض أن كل مادة من 200 درجة يحسب النسبة المئوية لكل مادة و للمجموع كامل و لو اى درجة أقل من 50% يتكتبله ( F ) و لو بين ال 50 و ال 60 يتكتبله ( D ) و لو بين ال 60 و ال 70 يتكتبله ( C ) و لو بين ال 70 و ال 85 يتكتبله
// ( B ) و لو بين ال 85 و ال 100 يتكتبله ( A )

struct group_students{
  char name[20];
  int age,math,science,english;
};

void grade(int x){
  if(x >= 85) printf("A\n");
  else if(x < 85 && x >= 70) printf("B\n");
  else if(x < 70 && x >= 60) printf("C\n");
  else if(x < 60 && x>= 50) printf("D\n");
  else printf("F\n");
}

int main(){
  // make agroup for 100 student to enter
  struct group_students x[100];
  int i;

  // i am gonna to enter just 3 students
  for (i = 0; i < 1; i++){
    printf("%d)\n",i+1);
    // Name
    printf("Name: ");
    scanf("%s",x[i].name);

    // Age
    printf("Age: ");
    scanf("%d",&x[i].age);

    // Degree in math
    printf("Math: ");
    scanf("%d",&x[i].math);

    // Degree in science
    printf("Science: ");
    scanf("%d",&x[i].science);

    // Degree in English
    printf("English: ");
    scanf("%d",&x[i].english);

    printf("\n-----------------------\n");

  }
  for (i = 0; i < 1; i++){
    printf("%d) - Name = %s and his age = %d\n",i+1,x[i].name,x[i].age);
    printf("he got %d in math\n",x[i].math* 100/200);
    grade(x[i].math* 100/200);
    printf("he got %d in science\n",x[i].science* 100/200);
    grade(x[i].science* 100/200);
    printf("he got %d in english\n",x[i].english* 100/200);
    grade(x[i].english* 100/200);

    }

    printf("\n-----------------------\n");


}
