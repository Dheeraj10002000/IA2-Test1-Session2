#include<stdio.h>
struct _triangle
{
float base,altitude,area;
};
typedef struct _triangle Triangle;
int input_n()
{
  int n;
  printf("enter the number of triangles\n");
  scanf("%d",&n);
  return n;
}
void input_n_triangles(int n, Triangle t[n])
{
  for(int i=0;i<n;i++)
    {
      printf("enter the base and altitude");
      scanf("%f%f",&t[i].base,&t[i].altitude);
    }
}
void find_areas_n(int n, Triangle t[n])
{
  for(int i=0; i<n; i++)
    {
      t[i].area=0.5*t[i].base*t[i].altitude;
    }
}
Triangle find_smallest_triangle(int n, Triangle t[n])
{
  Triangle smallest;
  smallest.area=t[0].area;
  for(int i=0; i<n; i++)
    {
      if(t[i].area<smallest.area)
        smallest.area=t[i].area;
    }
  return smallest;
}
void output(int n, Triangle t[n], Triangle smallest)
{
  printf("the smallest area between");
for(int i=0; i<n; i++)
{
  printf("%f  ",t[i].area);
}
  printf("is %f",smallest.area);
}
int main()
{
  int n=input_n();
  Triangle smallest;
  Triangle t[20];
  input_n_triangles(n,t);
  find_areas_n(n,t);
  smallest=find_smallest_triangle(n,t);
  output(n,t,smallest);
  return 0;
}