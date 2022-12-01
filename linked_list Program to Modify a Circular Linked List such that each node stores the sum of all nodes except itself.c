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
void insbeg(struct node **cstart,int x)
{ 
  struct node *p;
  p=getnode();
  p->info=x;
  if((*cstart)==NULL)
  {
    p->next=p;
    (*cstart)=p;    
  }
  p->next=(*cstart)->next;
  (*cstart)->next=p;
  }
void insaft(struct node **p,int x)
{
  struct node *q;
  q=getnode();
  q->info=x;
  q->next=(*p)->next;
  (*p)->next=q;
  
}
void insend(struct node **cstart,int x)
{
  struct node *p;
  p=getnode();
  p->info=x;
  if((*cstart)==NULL)
  {
    insbeg(cstart,x);
  }
  else
  {
    p->next=(*cstart)->next;
    (*cstart)->next=p;
    (*cstart)=p;
  }  
}

void traverse(struct node *cstart)
{
  struct node *p;
  p=cstart->next;
  while(p!=cstart)
    {
      printf("%d->",p->info);
      p=p->next;
    }
  printf("%d",p->info);
}

void enqueue(struct node **cstart,int key)
{
  struct node *p,*q,*m;
  p=(*cstart);
  q=p;
  m=NULL;
  while(p!=*cstart&&key>p->info)
    {
     m=p;
      p=p->next;
    }
    insaft(&m,key);
  (*cstart)->next=q;
  
}
/*int dequeue(struct node **start)
{
  int x;
  x=delbeg(&(*start));
  return x;
}*/
void newcll(struct node **cstart)
{
  struct node *p,*q;
  int sum=0;
    p=(*cstart)->next;
  while(p!=*cstart)
    {sum=sum+p->info;
      p=p->next;}
  sum=sum+p->info;
  p=p->next;
  q=(*cstart)->next;
  while(q!=*cstart)
    {q->info=sum-p->info;
      q=q->next;
      p=p->next;}
  q->info=sum-p->info;
  
}
int main()
{ 
  struct node *cstart;
  cstart=NULL;
  insend(&cstart,10);
  insend(&cstart,50);
  insend(&cstart,70);
  insend(&cstart,30);
  traverse(cstart);
  printf("\n");
  newcll(&cstart);
  traverse(cstart);
  
  
return 0;
}