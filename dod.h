#include <stdio.h>
#include <math.h>
float a,b,y;
int z, mnoz(), minus(),del(),sum(),coz(), kor(),kvadr();

int coz() { if(a>1) {printf("no corect");
    return 1;}
  y = cos(a);
  printf(" y = %f", y);
}
int kva(){ y = pow(a, 2);  printf(" y = %f", y); }
int kor(){if(a<0){printf("no corect");
    return 1;} y = sqrt(a); printf(" y = %f", y);}