#include <stdio.h>
void merge(int a[],int l,int m,int r)
{
   int i=l;
    int j=m;
    int k=0;
    int b[50];
    while(i<m && j<=r)
    {
        if(a[i]<a[j])
        b[k++]=a[i++];
        else
        b[k++]=a[j++];
    }
    while(i<m)
    {
        b[k++]=a[i++];
    }
     while(j<=r)
    {
        b[k++]=a[j++];
    }
    for(i=l,k=0;i<=r;)
    a[i++]=b[k++];
}
void simplemerge(int a[],int l,int r)
{
    int m;
    if(l<r)
    {
      m=(l+r)/2;
      simplemerge(a,l,m);
      simplemerge(a,m+1,r);
      merge(a,l,m+1,r);
    }
}
void main()
{
    int n,a[50],i;
        printf("Enter the limit of array:");
    scanf("%d",&n);
    printf("Enter the elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("The sorted array is:\n");
    simplemerge(a,0,n-1);
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
}


