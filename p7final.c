#include<stdio.h>
struct _triangle
{
float base,altitude,area;
}; 
typedef struct _triangle Triangle;
Triangle input_triangle()
{
  Triangle a;
  printf("enter the base and altitude\n");
  scanf("%f%f",&a.base,&a.altitude);
  return a;
}
void find_area(Triangle *t)
{
  t->area=0.5*t->base*t->altitude;
}
void output(Triangle t)
{
  printf("Area of triangle is %f",t.area);
}
int main()
{
  Triangle t;
  t=input_triangle();
  find_area(&t);
  output(t);
  return 0;
}