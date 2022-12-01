#include<stdio.h>
#include<stdlib.h>
struct node 
{  int info;
 struct node *next;
};
struct node *getnode()
{
  struct node *p;
  p=(struct node *)malloc(sizeof(struct node));
  return p;
}
void insbeg(struct node **start,int x)
{ 
  struct node *p;
  p=getnode();
  p->info=x;
  p->next=(*start);
  (*start)=p;
  }
void insaft(struct node **p,int x)
{
  struct node *q;
  q=getnode();
  q->info=x;
  q->next=(*p)->next;
  (*p)->next=q;
  
}
void insend(struct node **start,int x)
{
  struct node *p,*q;
  p=getnode();
  p->info=x;
  p->next=NULL;
  q=(*start);
  while(q->next!=NULL)
    {
      q=q->next;
    }
  q->next=p;
}
int delbeg(struct node **start)
{struct node *p;
  int x;
p=(*start);
  (*start)=(*start)->next;
  x=p->info;
  free(p);
  return x;
}
int delaft(struct node **p)
{  struct node *q;
  int x;
  q=(*p)->next;
  (*p)->next=q->next;
  x=q->info;
  free(q);
  return x;
}
int delend(struct node **start)
{
  struct node *p,*q;
  int x;
  p=(*start);
  q=NULL;
  while(p->next!=NULL)
    {
      q=p;
      p=p->next;
      
    }
  q->next=NULL;
  x=p->info;
  free(p);
  return x;
}
void traverse(struct node *start)
{
  struct node *p;
  p=start;
  while(p!=NULL)
    {
      printf("%d->",p->info);
      p=p->next;
    }
}
void enqueue(struct node **start,int key)
{
  struct node *p,*q;
  p=(*start);
  q=NULL;
  while(p!=NULL&&key>p->info)
    {
      q=p;
      p=p->next;
    }
  if(q==NULL)
  {insbeg(&(*start),key);}
  else{
    insaft(&q,key);
  }
}
int dequeue(struct node **start)
{
  int x;
  x=delbeg(&(*start));
  return x;
}
void linear_search(struct node **start,int key)
{
  struct node *p;
  int flag=0,k=0;
  p=*start;
  while(p!=NULL)
    {
      if(key==p->info)
  {
    flag=1;
    break;}
      else{p=p->next;}
      k=k+1;
    }
  if(flag==1)
  {
    printf("found at node %d",k+1);
  }
  else{printf("not found");}
  
}
int main()
{
  struct node *start1;
  int key;
  start1=NULL;
  enqueue(&start1,1);
  enqueue(&start1,3);
  enqueue(&start1,5);
  enqueue(&start1,8);
  enqueue(&start1,10);
  enqueue(&start1,11);
  enqueue(&start1,6);
  enqueue(&start1,13);
  enqueue(&start1,18);
  enqueue(&start1,25);
  enqueue(&start1,27);
  traverse(start1);
  printf("\n");
  printf("enter the value to be searched in linked list\n");
  scanf("%d",&key);
  linear_search(&start1,  key);
  
    return 0;
}