#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct node *next;
};
typedef struct Node node;
node *head;
node *newnode(int val)
{
   node *p;
   p=(node*)malloc(sizeof(node));
   p->data=val;
   p->next=NULL;
   return p;
}

 void insertAtbeg(int val)
{
    node *p=newnode(val);
   if(head==NULL)
   {
    head=p;
   } 
   else
   {
    p->next=head;
    head=p;
   } 
}
 void insertAtlast(int val)
{
   node *curr=head;
    node *p=newnode(val);
   if(head==NULL)
   {
    head=p;
   } 
   while(curr->next!=NULL)
   {
    curr=curr->next;
   }
   curr->next=p;
}
void insertAfter(int val,int ele)
{
    node *curr=head;
    node *p=newnode(val);
    while(curr->data!=ele && curr!=NULL)
    {
        curr=curr->next;
    }
    p->next=curr->next;
    curr->next=p;
}
void insertBefore(int val,int ele)
{
    node *prev=NULL;
    node *curr=head;
    node *p=newnode(val);
    while(curr->data!=ele && curr!=NULL)
    {
        prev=curr;
        curr=curr->next;
    }
     prev->next=p;
     p->next=curr;
}
void deletenode(int ele)
{
    node *prev=NULL;
    node *curr=head;
    node *newnode(val);
    while(curr->data!=ele && curr!=NULL)
    {
        prev=curr;
        curr=curr->next;
    }
    prev->next=curr->next;
    free(curr);
}
void display()
    {
        node *curr=head;
        printf("The linked list is:\n");
        for(curr=head;curr!=NULL;curr=curr->next)
        {
            printf("%d\n",curr->data);
        }
        
    }
 void count()
 {
    int count=0;
    node *curr;
    for(curr=head;curr!=NULL;curr=curr->next)
    {
        count++;
    }
    printf("The total nodes are:%d",count);
 }   
    void main()
 {
    int ch,val,ele;
	do{ 
	printf("Enter ur choice:\n");
	printf("1.insertAtbeg\n2.insertAtlast\n3.insertAfter\n4.insertBefore\n5.deletenode\n.6.display\n7.count\n8.exit\n");
	scanf("%d",&ch);

	switch (ch)
	{
	case 1:
      printf("Enter the ele:\n");
      scanf("%d",&val);
       insertAtbeg(val);
		break;
    case 2:
      printf("Enter the ele:\n");
      scanf("%d",&val);
       insertAtlast(val);
		break;
    case 3:
      printf("Enter the ele:\n");
      scanf("%d",&val);
      printf("Enter the element after the value will be inserted:");
      scanf("%d",&ele);
       insertAfter(val,ele);
		break; 
    case 4:
      printf("Enter the ele:\n");
      scanf("%d",&val);
      printf("Enter the element after the value will be inserted:");
      scanf("%d",&ele);
       insertBefore(val,ele);
		break;
    case 5:
      printf("Enter the element to be deleted\n");
      scanf("%d",&ele);
       deletenode(ele);
		break;            
	case 6:display();
	 break;
	 case 7:count();
            break;
     case 8:printf("Program terminated");
            break;       
	default:printf("invalid choice\n");
	
	}
	}while (ch!=7);
	 
	}
	


   


