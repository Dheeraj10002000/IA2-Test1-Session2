#include <stdio.h>
int input()
{
  int num;
  printf("enter the number\n");
  scanf("%d",&num);
  return num;
}
int gcd(int a, int b)
{
  int hcf,n;
  if(a<b)
  n=a;
  else
  n=b;
  for(int i=1;i<=n;i++)
    {
      if(a%i==0 && b%i==0)
      hcf=i;
    }
  return hcf;
}
void output(int a, int b, int gcd)
{
  printf("the gcd of two numbers %d and %d is %d",a,b,gcd);
}
void main()
{
  int a,b,hcf;
  a=input();
  b=input();
  hcf=gcd(a,b);
  output(a,b,hcf);
}
