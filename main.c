#include <stdio.h>
int main(void)
{
  int a,x;
  printf("Input A\n");
  scanf("%d",&a);
  if(a > 0){
   x = a*15;
  }
  else{
  x = a*(-15);}
printf("X =%d",x);
  return 0;
}