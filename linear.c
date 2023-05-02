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
 int search(int x[],int y,int z)
 {
    int i;
    for(i=0;i<y;i++)
    {
        if(x[i]==z)
        {
         return i+1;
        } 
    }
    return 0;
 }
 
int main()
{
    int a[100],n,ele,p;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    read(a,n);
    printf("Enter the element to be searched:");
    scanf("%d",&ele);
    p=search(a,n,ele);
    if(p==0)
    {
        printf("Element not found");
    }
    else
      printf("Element found at %d",p);
      return 0;
}