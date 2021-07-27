#include <stdio.h>

typedef int sabry_num;

#define sabry_home main
#define sabry_loop(i,second_num) for (i=first_num; i < second_num; i++)
#define sabry_loop_2(i,first_num) for (i=second_num; i < first_num; i++)
#define sabry_cond if
#define sabry_show  printf
#define sabry_read  scanf
#define sabry_end return 0;
#define k  "%d"

sabry_num sabry_home(){
  sabry_num i,first_num,second_num;

  sabry_show("Enter First num: ");
  sabry_read(k, &first_num);

  sabry_show("Enter Second num: ");
  sabry_read(k, &second_num);


  sabry_cond (first_num < second_num){
    sabry_loop(i,second_num)
      sabry_show("%d\n",i);
  }

  else{
    sabry_loop_2(i,first_num)
      sabry_show("%d\n",i);
  }

  sabry_end
}
