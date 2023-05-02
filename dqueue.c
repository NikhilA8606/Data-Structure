#include <stdio.h>
# define size 6
int front=-1;
int rear=-1;
int q[size];

void insertrear(int x)
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
    void insertfront(int x)
    {
        if(front==-1&&rear==-1)
    {
        front=rear=0;
        q[front]=x;

    }
    else if(front==(rear+1)%size)
    {
        printf("Overflow");
    }
    else
    {
        front=(front-1)%size;
        q[front]=x;
    }
    }

    int deletefront()
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
        printf("poped item is %d",q[front]);
        front=(front+1)%size;
    }
    return (item);
    }

    int deleterear()
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
        item=q[rear];
        printf("poped item is %d",q[rear]);
        rear=(rear-1)%size;

    }
    return (item);

 }
  void display()
  {
    int i;
    for(i=front;i<=rear;i=(i+1)%size)
    printf("%d",q[i]);
  }

  void main()
 {
    int ch,x,a,b;
	do{
	printf("Enter ur choice:\n");
	printf("1.inrear\n2.infront\n3.dfront\n4.drear\n5.display\n6.exit");
	scanf("%d",&ch);

	switch (ch)
	{
	case 1:
      printf("Enter the ele:");
      scanf("%d",&x);
       insertrear(x);
		break;
    case 2:
      printf("Enter the ele:");
      scanf("%d",&x);
       insertfront(x);
		break;
	case 3:
       a=deletefront();
       printf("DElete ele is %d",a);
	   break;
    case 4:
       b=deleterear();
       printf("DElete ele is %d",b);
	   break;
	case 5:display();
	 break;
	 case 6:break;
	default:printf("invalid choice\n");
	
	}
	}while (ch!=6);
	 
	}