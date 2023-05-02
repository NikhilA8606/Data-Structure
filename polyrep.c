#include  <stdio.h>
#define MAX 10
void main()
{
     float pol[MAX+1];
    int d,i;
    printf("Enter the degree\n");
    scanf("%d",&d);
    if(d<1)
        printf("Enter a degree greater than 1\n");
     else
     {
        printf("enter the polynomials in order starting from x^%d",d);
        for(i=d;i>=0;i--)
        scanf("%f",&pol[i]);
     }
    
    printf("The polinomial is:\n");
    for(i=d;i>=0;i--)
    {
     if(pol[i]!=0)
     {
        if(i==d)
            printf("%fx^%d",pol[i],d); 
           else if(i==1)
           printf("+%fx",pol[i]);
           else if(i==0)
           printf("+%f",pol[i]);
           else
            printf("+%fx^%d",pol[i],d); 
    
    }
}
}