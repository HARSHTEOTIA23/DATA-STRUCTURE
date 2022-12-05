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
struct node * reverse(struct node **start)
{ struct node *p,*start2;
  start2=NULL;
  p=*start;
  while(p->next!=NULL)
    {insbeg(&start2,p->info);
      p=p->next;
    }
  insbeg(&start2,p->info);
  return start2;
}

int palindrome(struct node **start)
{
  struct node *p,*start2,*q;
  int flag=0;
  p=*start;
  start2=reverse(&(*start));
  q=start2;
  while(p!=NULL||q!=NULL)
    {
      if(p->info==q->info)
      {p=p->next;
        q=q->next;}
      else{flag=1;
        break;}
    }
  return flag;
}
int main()
{
  struct node *start1,*p;
  int k;
   start1=NULL;
  insbeg(&start1,1);
  insend(&start1, 4);
  insend(&start1, 2);
  insend(&start1, 3);
  insend(&start1, 7);
  insend(&start1, 8);
  insend(&start1, 5);
  insend(&start1, 8);
  insend(&start1, 7);
  insend(&start1, 3);
  insend(&start1, 2);
  insend(&start1, 4);
  insend(&start1, 1);
  traverse(start1);
  printf("\nthe sorted linked list is \n");
  k=palindrome(&start1);
if(k==0)
{
  printf("palindrome");
}
 else{printf("not palindrome");}
      return 0;
}