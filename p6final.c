#include<stdio.h>
#include<string.h>
void input_string(char *a)
{
  printf("enter the string\n");
  scanf("%s",a);
}
char str_reverse(char *a, char *reverse)
{
  int n=strlen(a);
  for(int i=0, j=n-1; j>=0;i++,j--)
    {
      reverse[i]=a[j];
    }
  return 0;
}
void output(char *a,char *reverse)
{
  printf("reverse of %s is %s\n",a,reverse);
}
int main()
{
  char a[20],reverse[20];
  input_string(a);
  str_reverse(a,reverse);
  output(a,reverse);
  return 0;
}