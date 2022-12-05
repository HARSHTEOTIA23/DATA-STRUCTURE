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
int delete_kth_node(struct node **start,int k)
{
  struct node *p,*q;
  int l=1,x;
  p=*start;
  q=*start;
  while(l<=k+1)
    {q=q->next;
      l=l+1;
    }
  while(q!=NULL)
    {
      p=p->next;
      q=q->next;
    }
  x=delaft(&p);
  return x;
}

int main()
{
  struct node *start1,*p;
  int k,y;
 
  
  
  start1=NULL;
  enqueue(&start1, 1);
  enqueue(&start1, 8);
  enqueue(&start1, 11);
  enqueue(&start1, 25);
  enqueue(&start1, 38);
  enqueue(&start1, 100);
  enqueue(&start1, 56);
  enqueue(&start1, 90);
  enqueue(&start1, 54);
  traverse(start1);


  printf("\n");
  printf("enter the node to be deleted from last\n");
  scanf("%d",&k);
 
  y=delete_kth_node(&start1, k);
  printf("the deleted node is %d",y);
  printf("\n");
  traverse(start1);
      return 0;
}