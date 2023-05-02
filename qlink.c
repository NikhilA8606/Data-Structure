#include <stdio.h>
#include <stdlib.h>

struct node{
     int data;
     struct node *next;
};

typedef struct node node;
node *front=NULL;
node *rear=NULL;

node *newnode(int val)
{
    node *p;
    p=(node*)malloc(sizeof(node));
    p->data=val;
    p->next=NULL;
    return p;
}

void enque(int val)
{
    node *p=newnode(val);
    if(front==NULL && rear==NULL)
    {
        p->next=rear;
        front=rear=p;

    }
    else
    {
        rear->next=p;
        rear=p;
    }
}

int deque()
{
     node *ele=front->data;
    if(front==NULL && rear==NULL)
     printf("Queue is Empty\n");
     
     else
    {
        node *temp=front;
        front=front->next;
        free(temp);
    }
    return(ele);
}

void display()
{
   
    if(front==NULL && rear==NULL)
     printf("Queue is Empty\n");

     else
     {
          node *temp=front;
        while(temp!=NULL);
        {
            printf("%d\n",temp->data);
            temp=temp->next;
        }

     }
}

void main()
 {
    int ch,val,a;
	do{
	printf("Enter ur choice:\n");
	printf("1.enque\n2.deque\n3.display\n4.exit\n");
	scanf("%d",&ch);

	switch (ch)
	{
	case 1:
      printf("Enter the ele:");
      scanf("%d",&val);
       enque(val);
		break;
	case 2:
       a=deque();
       printf("%d is deleted\n",a);
	   break;
	case 3:display();
	 break;
	 case 4:break;
	default:printf("invalid choice\n");
	}
	}while (ch!=4);
	 
	}
	
    