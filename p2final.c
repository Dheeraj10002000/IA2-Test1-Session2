#include <stdio.h>
int input_side()
{
  int a;
  printf("enter the side of the triangle\n");
  scanf("%d",&a);
  return a;
}
int check_scalene(int a, int b, int c)
 {
   if(a!=b && b!=c && a!=c)
   {
     return 1;
   }
   else
     return 2;
   
}

void output(int a, int b, int c, int isscalene)
{
  if(isscalene == 1)
  printf("triangle is scalene");
  else if(isscalene == 2)
  printf("triangle is not scalene");
}


int main()
{
  int p,q,r,s;
  p=input_side();
  q=input_side();
  r=input_side();
  s = check_scalene(p,q,r);
  output(p,q,r,s);
  return 0;
}