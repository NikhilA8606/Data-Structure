#include <stdio.h>
#include <stdlib.h>

struct node
{
    int coef,expo;
    struct node *next;
};

struct node *Phead,*Qhead,*Rhead;

struct node *ReadPoly()
{
    struct node *new,*ptr,*head=NULL;
    int n,i;

    printf("\nEnter the coeffients and exponents of the polynomials:");
    printf("\nEnter the no of terms in the polynomial:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("\nEnter (coef%d,expo%d):",i,i);
        new=(struct node*)malloc(sizeof(struct node));
        scanf("%d",&new->coef);
        scanf("%d",&new->expo);
        new->next=NULL;
        if(head==NULL)
        {
            head=new;
            ptr=head;
        }
        else
        {
            ptr->next=new;
            ptr=new;
        }
    }
    return(head);
}

  void DisplayPoly()
{
   struct node *ptr,*head;
   if(head==NULL)
   printf("Polinomial is empty");
   else
   {
     ptr=head;
     while(ptr->next!=NULL)
     {
        printf("%dx^%d+",ptr->coef,ptr->expo);
        ptr=ptr->next;
     }
     printf("%dx^%d",ptr->coef,ptr->expo);
   }
}

 struct node *AddPoly()
 {
    struct node *new,*P,*Q,*R,*head=NULL;
    P=Phead;
    Q=Qhead;
    while(P!=NULL && Q!=NULL)
    {
        if(P->expo==Q->expo)
        {
             new=(struct node*)malloc(sizeof(struct node));
             new->coef=P->coef+Q->coef;
             new->expo=P->expo+Q->expo;
             new->next=NULL;
             P=P->next;
             Q=Q->next;
        }

        else if(P->expo>Q->expo)
        {
             new=(struct node*)malloc(sizeof(struct node));
             new->coef=P->coef;
             new->expo=P->expo;
             new->next=NULL;
             P=P->next;
        }

        else
        {  
            new=(struct node*)malloc(sizeof(struct node));
             new->coef=Q->coef;
             new->expo=Q->expo;
             new->next=NULL;
             Q=Q->next;
        }
             if(head==NULL)
             {
                head=new;
                R=head;
             }
             else
             {
                R->next=new;
                R=new;
             }

    }
    while(P!=NULL)
    {
        new=(struct node*)malloc(sizeof(struct node));
             new->coef=P->coef;
             new->expo=P->expo;
             new->next=NULL;
             if(head==NULL)
             {
                head=new;
                R=head;
             }
             else
             {
                R->next=new;
                R=new;
             }
             P=P->next;
    }
     while(Q!=NULL)
    {
        new=(struct node*)malloc(sizeof(struct node));
             new->coef=Q->coef;
             new->expo=Q->expo;
             new->next=NULL;
             if(head==NULL)
             {
                head=new;
                R=head;
             }
             else
             {
                R->next=new;
                R=new;
             }
             Q=Q->next;
    }
    return(head);

 }
  void main()
  {
    printf("\nEnter the details of 1st poly:");
    Phead=ReadPoly();
    printf("\nEnter the details of 2nd poly:");
    Qhead=ReadPoly();
    printf("\nFirst poly is:");
    DisplayPoly(Phead);
    printf("\nSecond poly is:");
    DisplayPoly(Qhead);
    Rhead=AddPoly();
    printf("\nSum of 2 poly is:");
    DisplayPoly(Rhead);
    
  }


















