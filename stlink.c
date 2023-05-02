#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next;
};
typedef struct node node;
node *top=NULL;
node *newnode(int val)  
{
   node *p;
   p=(node*)malloc(sizeof(node));
   p->data=val;
   p->next=NULL;
   return p;
}

void push(int val)
{
    
    node *p=newnode(val);
    p->next=top;
    top=p;
}

void peek()
{
    if(top==NULL)
    {
        printf("Empty stack\n");
    }
    else
    {
     printf("The top element is %d\n",top->data);
    }
}
 
void pop() 
{
    node *temp;
    temp=top;
    if(top==NULL)
    {
        printf("Empty stack\n");
    }
    else
    {
        printf("%d\n",top->data);
        top=top->next;
        free(temp);  
    }
}

void display()
{
   node *temp;
   temp=top;
   if(top==NULL)
    {
        printf("Empty stack\n ");
    }
    else
    {
        while(temp!=NULL)
        {
         printf("%d\n",temp->data);
         temp=temp->next;
        } 
    }
}

void main()
 {
    int ch,val;
	do{
	printf("Enter ur choice:\n");
	printf("1.push\n2.pop\n3.peek\n4.display\n5.exit\n");
	scanf("%d",&ch);

	switch (ch)
	{
	case 1:
        printf("Enter a element to push:");
        scanf("%d",&val);
        push(val);
		break;
	case 2:pop();
	   break;
	case 3:peek();
	  break;
	case 4:display();
	 break;
	 case 5:break;
	default:printf("invalid choice\n");
	
	}
	}while (ch!=5);
	 
	}

