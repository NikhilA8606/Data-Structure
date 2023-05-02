#include <stdio.h>
#define MAX 4
void main()
{
    int a[3][3],b[MAX+1][3];
    int i,j,r,c,k;
    printf("Enter the order of the matrix:");
    scanf("%d%d",&r,&c);
    printf("Enter the matrix:");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    b[0][1]=r;
    b[0][1]=c;
    k=1;
    for(i=0;i<r;i++)
    {
       for(j=0;j<c;j++)
        {
            if(a[i][j]!=0)
            {
                b[k][0]=i;
                b[k][1]=j;
                b[k][2]=a[i][j];
                k++;
            }   
        }
     }
     b[0][2]=k-1;
     printf("The triplet representation is:\n");
     for(i=0;i<k;i++)
     {
        printf("%d\t%d\t%d\n",b[i][0],b[i][1],b[i][2]);
     }
}