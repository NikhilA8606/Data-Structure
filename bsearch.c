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
  int search(int x[],int y,int ele)
 {
    int mid,top,bot;
    top=0;
    bot=y-1;
    while(top<=bot)
 {
     mid=(top+bot)/2;
    if(x[mid]==ele)
   {
     return mid+1;
   } 
   else if(x[mid]>ele)
   {
     bot=mid-1;
   }
   else
     top=mid+1;
 }
 return 0;
}

int main()
{
    int a[100],n,e,p;
     printf("Enter the number of elements:");
    scanf("%d",&n);
    read(a,n);
    printf("Enter the element to be searched:");
    scanf("%d",&e);
    p=search(a,n,e);
    if(p==0)
    {
        printf("Element not found");
    }
    else{
      printf("Element found at %d possition",p);
    }
      return 0;
}






    