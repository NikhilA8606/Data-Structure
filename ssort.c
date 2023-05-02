#include <stdio.h>
void read(int x[],int y)
{
    int i;
    printf("Enter the elements:");
    for(i=0;i<y;i++)   
    {
        scanf("%d",&x[i]);
    }

}

void sort(int x[],int y)
{
    int i,j,min,temp;
    for(i=0;i<y-1;i++)
    {
        min=i;
    
    for(j=i+1;j<y;j++)
    {
        if(x[j]<x[min])
        {
           min=j;
        }
    }
    if(min!=i)
    {
       temp=x[min];
       x[min]=x[i];
       x[i]=temp;
    }
    }
    
}
void print(int x[],int y)
{
    int i;
    printf("The sorted array is:");
    for(i=0;i<y;i++)
    {
      printf("%d",x[i]);
      printf(" ");
    }
}
int main()
{
    int a[100],n;
  printf("Enter the limit:");
  scanf("%d",&n);
  read(a,n);
  sort(a,n);
  print(a,n);
  return 0;
}