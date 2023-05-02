#include <stdio.h>
int partition(int a[],int l,int r)
{
  int key=a[l],i=l+1,j=r,temp;
  do{
    while(a[i]<key && i<r)
    {
        i++;
    }
    while(a[j]>key && j>l)
    {
        j--;
    }
    if(i<j)
    {
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
    }
  } while(i<j);
   temp=a[l];
   a[l]=a[j];
   a[j]=temp;
   return (j);
}
 void qsort(int a[],int l,int r)
 {
    int p;
    if(l<r)
    {
    p=partition(a,l,r);
    qsort(a,l,p-1);
    qsort(a,p+1,r);
 }
 }
 int main()
 {
    int i,n,a[50];
    printf("Enter the limit of array:");
    scanf("%d",&n);
    printf("Enter the elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("The sorted array is:\n");
    qsort(a,0,n-1);
    for(i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }
    
    
 }
    


