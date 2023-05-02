#include <stdio.h>
void heapify(int A[],int n,int i)
{
    
    int lg=i;
    int l=(2*i);
    int r=(2*i)+1;
    while(l<=n && A[l]>A[lg])
    {
        lg=l;
    while(r<=n && A[r]>A[lg])
    {
        lg=r;
    }
    if(lg!=i)
    {
     int temp=a[i];
        a[i]=a[lg];
        a[lg]=temp;
        heapify(A,n,lg);
        
    }

}
}

void buidheap(int A[],int n)
{
    int i;
    for(i=n/2;i>=1;i--)
    {
        heapify(A,n,i);
    }
}
void heapsort(int A[],int n)
{
    int temp,i;
    for(i=n;i>=1;i--)
    {
        temp=A[i];
        A[i]=A[1];
        A[1]=temp;
        heapify(A,n,1);

    }
}

void main()
{
    int n,i,A[100];
    printf("Enter the limit:");
    scanf("%d",&n);
    printf("\nEnter the elements:");
    for(i=1;i<=s;i++)
    {
        scanf("%d",&A[i];);
    }
    heapsort(A,n);
    printf("\nThe sorted array is :");
     for(i=1;i<=s;i++)
    {
        printf("%d\t",&A[i];);
    }


}
