#include <stdio.h>
void input(float *base, float *height)
{
  printf("enter the value of base\n");
  scanf("%f",base);
  printf("enter the value of height\n");
  scanf("%f",height);
}
void find_area(float base, float height, float *area)
{
  *area = 0.5 * base * height ;
}
void output(float base, float height, float area)
{
  printf("the area of triangle with base %f and height %f is %f\n",base,height,area);
}

int main()
{
  float a,b,c;
  input(&a,&b);
  find_area(a,b,&c);
  output(a,b,c);
  return 0;
}