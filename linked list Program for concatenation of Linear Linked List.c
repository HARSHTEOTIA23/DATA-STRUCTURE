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
void concatenate(struct node **start1,struct node **start2)
{
  struct node *p,*q,*start3=NULL;
  p=*start1;
  q=*start2;
  while(p!=NULL)
    {  enqueue(&start3, p->info);
      p=p->next;
    }
 while(q!=NULL)
   {
     enqueue(&start3, q->info);
     q=q->next;
   }
  traverse(start3);
}
int main()
{
  struct node *start1,*start2;
  start1=NULL;
  start2=NULL;
  enqueue(&start1,1);
  enqueue(&start1,3);
  enqueue(&start1,5);
  enqueue(&start1,8);
  enqueue(&start1,10);
  enqueue(&start1,11);
  enqueue(&start2,6);
  enqueue(&start2,13);
  enqueue(&start2,18);
  enqueue(&start2,25);
  enqueue(&start2,27);
  traverse(start1);
  printf("\n");
  traverse(start2);
  printf("\n");
  printf("the concatenated linked list is\n");
  concatenate(&start1,&start2);
    return 0;
}