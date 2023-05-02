#include <stdio.h>
# define size 6
int front=-1;
int rear=-1;
int q[size];

void enque(int x)
{
    if(front==-1&&rear==-1)
    {
        front=rear=0;
        q[rear]=x;
    }
    else if(front==(rear+1)%size)
    {
        printf("Overflow");
    }
    else
    {
        rear=(rear+1)%size;
        q[rear]=x;
    }
        
    }
int deque()
{
    int item;
    if(front==-1&&rear==-1)
    {
        printf("Empty"); 
    }
    else if(front==rear)
    {
        front=rear=-1;
    }
    else
    {
        item=q[front]; 
        printf("The element to be deleted is  is %d\n",q[front]);
        front=(front+1)%size;
    }
    return (item);
}
void display()
{
    int i;
    for(i=front;i<=rear;i++)
    {
        printf("%d\n",q[i]);
    }
}
void main()
 {
    int ch,x,a;
	do{
	printf("Enter ur choice:\n");
	printf("1.enque\n2.deque\n3.display\n4.exit\n");
	scanf("%d",&ch);

	switch (ch)
	{
	case 1:
      printf("Enter the ele:");
      scanf("%d",&x);
       enque(x);
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
	
    

