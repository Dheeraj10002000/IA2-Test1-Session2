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

void output(int n, Triangle t[n])
{
for(int i=0; i<n; i++)
  printf("%f ",t[i].area);
}
int main()
{
  int n=input_n();
  Triangle t[20];
  input_n_triangles(n,t);
  find_areas_n(n,t);
  output(n,t);
  return 0;
}