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
    int i,j,temp;
    for(i=1;i<y;i++)
    {
        temp=x[i];
        j=i-1;
        while(j>=0 && x[j]>a[temp])
        {
            x[j+1]=x[j];
            j--;
        }
        x[j+1]=temp;
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