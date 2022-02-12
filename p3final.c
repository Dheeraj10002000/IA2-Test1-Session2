#include <stdio.h>
int input_number()
{
  int a;
  printf("enter a number\n");
  scanf("%d",&a);
  return a;
}

int is_composite(int n)
{
  for(int i=2; i<n; i++)
    if(n % i == 0)
     return 0;
}

void output(int n, int composite)
{
  if(composite == 0)
   printf("%d is composite\n",n);
  else
   printf("%d is prime number\n",n);
}

int main()
{
  int a, composite;
  a=input_number();
  composite = is_composite(a);
  output(a,composite);
  return 0;
}