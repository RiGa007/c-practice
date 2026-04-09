#include <stdio.h>

int main(){
   int x,y,z;
   printf("value of x,y and z: ");
   scanf("%d%d%d", x,y,z);
   float e= 3*x/y- z+x;
   printf("The expression value: %f",e );

   return 0;
}