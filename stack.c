#include <stdio.h>
int stack[100],top=-1,size=6;
void push()
{
	int x;
	printf("Enter a num:");
	scanf("%d",&x);
	if(top==size)
	{
		printf("overflow\n");

	}	
	else
	{
		top++;
		stack[top]=x;
	}
}
void pop()
{
	int item;
	if(top==-1)
	{
	printf("Underflow\n");
}
else
   {
	item=stack[top];
	top--;
    printf("The deleted item is %d\n",item);

   }

}
void peek()
{
	if(top==-1)
	printf("Empty");
	else{
		printf("Top element is %d\n",stack[top]);
	}
}
void display()
{
	int i;
	for(i=top;i>=0;i--){
		printf("%d\n",stack[i]);
	}
}
void main()
 {
    int ch;
	do{
	printf("Enter ur choice:\n");
	printf("1.push\n2.pop\n3.peek\n4.display\n5.exit");
	scanf("%d",&ch);

	switch (ch)
	{
	case 1:push();
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
	



