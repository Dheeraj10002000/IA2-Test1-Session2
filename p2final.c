#include<stdio.h>
int input_side()
{
  int a;
  printf("Enter the sides\n");
  scanf("%d",&a);
  return a;
}
int check_scalene(int a, int b, int c)
{
  if(a!=b && b!=c && a!=c)
  {
    return 0;
  }
  else
    return 1;
}
void output(int a, int b, int c, int isscalene)
{
  if(isscalene == 0)
  {
    printf("triangle with sides %d %d %d is scalene\n",a,b,c);
  }
  else
  {
    printf("triangle with sides %d %d %d is not scalene\n",a,b,c);
  }
}
int main()
{
  int a,b,c,result;
  a=input_side();
  b=input_side();
  c=input_side();
  result=check_scalene(a,b,c);
  output(a,b,c,result);
  return 0;
}