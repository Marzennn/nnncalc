#include "dod.h"

int main(void) {
  now:
  printf("введите число один\n");
  scanf("%f", &a);
  printf("какую операцию хотите совершить?\n 1 - +\n 2 _ -\n 3 - *\n 4 - /\n 5 - ce\n 6 - cos(x)\n 7 - x^2\n 8 - x^1/2\n 9 - exit\n ");
  scanf(" %d", &z);
  if(z>0&&z<5){
  printf("введите число два\n");
   scanf("%f", &b);
switch(z) {
case 1: z=1; sum();  break;
case 2: z=2; minus();  
  break;
case 3: z=3; mnoz();
    break;
case 4:
     z=4; del();  break;
     }
  }
    else if(z==5) goto now;
    else if(z==9) printf("ну и ладно(");
  else if(z>5&&z<9) {
    switch(z) {
case 6: z=6; coz();  break;
case 7: z=7; kva();  
  break;
case 8: z=8; kor();
    break;
      }
    }
  return 0;
  
}
int sum(){ y = a+b; printf("y = %f", y); }
int minus(){ y = a-b; printf("y = %f", y); }
int mnoz(){ y = a*b; printf("y = %f", y); }
int del(){ y = a/b;
  if(b==0){printf("no corect");
    return 1;}
  printf("y = %f", y); }