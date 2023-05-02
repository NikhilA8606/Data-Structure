#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct node *next;
    struct node *prev;
};
typedef struct Node node;
node *head=NULL;
node *tail=NULL;
node *curr=NULL;

node *newnode(int val)
{
   node *p;
   p=(node *)malloc(sizeof(node));
   p->data=val;
   p->next=NULL;
   p->prev=NULL;
   return p;
}
void insertFirst(int val)
{
   node *newnode(val);
   if(head==NULL)
   {
    head=p;
    tail=p;
   } 
   else
   {
    p->next=head;
    p->prev=NULL;
    head=p;
   }
}
void insertLast(int val)
{
    node *newnode(val)
   if(head==NULL)
   {
    head=p;
    tail=p;
   } 
   else
   {
    tail->next=p;
    p->prev=tail;
    tail=p;
   }
}
void insertAfter(int val,int ele)
{
    curr=head;
    node *newnode(val);
    while(curr->data!=ele && curr!=NULL)
    {
        curr=curr->next;
    }
     p->prev=curr;
    p->next=curr->next;
   
}
void insertBefore(int val,int ele)
{
    curr=head;
    node *newnode(val);
    while(cur->data!=ele && curr!=NULL)
    {
        curr=curr->next;
    }
      p->prev=curr->prev;
      p->next=curr;
      curr->prev->next=p;
      curr->prev=p;
}
void deletenode(int ele)
{
    curr=head;
    while(curr!=NULL && curr->data!=ele)
    {
        curr=curr->next;
    }
    
    
}
