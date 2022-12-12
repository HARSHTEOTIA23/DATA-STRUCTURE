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
void reverse_print(struct node **start)
{
  struct node *p;
  int arr[100],i=0,j;
  p=*start;
  while(p->next!=NULL)
    {
      arr[i]=p->info;
      p=p->next;
      i=i+1;
    }
  j=i;
  arr[i]=p->info;
  for(j=i;j>=0;j--)
    {
      printf("%d->",arr[j]);
    }
}
struct node *middle_element(struct node **start)
{
  struct node *p,*q;
  int x;
  p=*start;
  q=*start;
  while(p!=NULL&&p->next!=NULL)
    {
      q=q->next;
      p=p->next;
      p=p->next;
      
    }

  return q;
}
void split_linked_list(struct node **start)
{
  struct node *p,*q,*start2;
  p=*start;
  q=middle_element(&*start);
  start2=q->next;
  q->next=NULL;
  traverse(*start);
  printf("\n");
traverse(start2);
  
}
int main()
{
  struct node *start1,*p;
  int x;
  start1=NULL;
  insbeg(&start1,1);
  insend(&start1,2);
  insend(&start1,5);
  insend(&start1,6);
  insend(&start1,7);
  insend(&start1,1);
  insend(&start1,5);
  insend(&start1,6);
  insend(&start1,10);
  insend(&start1,11);
  insend(&start1,15);
 
  traverse(start1);
      printf("\n");
  split_linked_list(&start1);
  
 
  return 0;
}