#include<stdio.h>
#include<stdlib.h>
 struct node
 { int info;
 struct node *Next;
 };
 /*************************************/
 /*************************************/ 
 struct node *GetNode()
 {
 struct node *p;
 p=(struct node *)malloc(sizeof(struct node));
 return p;
 }
 /*************************************/
 void InsBeg(struct node **START,int x)
 {
 struct node *p;
 p=GetNode();
 p->info=x;
 p->Next=(*START);
 (*START)=p;
 }
 /*************************************/
 void InsAft(struct node **p,int x)
 {
struct node *q;
 q=GetNode();
 q->info=x;
 q->Next=(*p)->Next;
 (*p)->Next=q;
 }
 
 /*************************************/
 void InsEnd(struct node **START,int x)
 {
 struct node *p,*q;
  if(*START==NULL)
  {
    InsBeg(&(*START),  x);
  }
  else{
 p=GetNode();
 p->info=x;
 p->Next=NULL;
 
 q=(*START);
 while(q->Next!=NULL)
 {
 q=q->Next;
 }
 q->Next=p;}
 }
 /*************************************/
 int DelBeg(struct node **START)
 {
 struct node *p;
 int x;
 p=(*START);
 (*START)=(*START)->Next;
 x=p->info;
 free(p);
 return x;
 }
 /*************************************/
 int DelAft(struct node **p)
 {
 int x;
 struct node *q;
 q=(*p)->Next;
 (*p)->Next=q->Next;
 x=q->info;
 free(q);
 return x;
 }
 /*************************************/
 int DelEnd(struct node **START)
 {
 struct node *p,*q;
 int x;
 p=(*START);
 q=NULL;
 while(p->Next!=NULL)
 {
 q=p;
 p=p->Next;
 }
 q->Next=NULL;
 x=p->info;
 free(p);
 return x;
 }
 /*******************************/
 void Traverse(struct node *START)
 {
struct node *p;
 p=START;
 while(p!=NULL)
 {
 printf("%d-->",p->info);
 p=p->Next;
 }
 }
 /*************************************/
 void EnQueue(struct node **START,int key)
 {
 struct node *p,*q;
 if((*START)==NULL)
 {
 InsBeg(&(*START),key);
 }
 else
 {
 p=(*START);
 q=NULL;
 while(p!=NULL && key>=p->info)
 {
 q=p;
 p=p->Next;
 }
 if(q==NULL)
 InsBeg(&(*START),key);
 else
 InsAft(&q,key);
 }
 }
/*************************************/
 int DeQueue(struct node **START)
 {
 int x;
 x=DelBeg(&(*START));
 return x;
 }
 
void orderedinsertion(struct node **START,int x)
{
  struct node *p,*q;
 p=*START;
  q=NULL;
  while(p!=NULL && x>p->info)
    {
      q=p;
      p=p->Next;
    }
  if(q==NULL)
  {
    InsBeg(&(*START),x);
  }
  else{
    InsAft(&q,x);
  }
}
void mergell(struct node *START1,struct node *START2)
{
  struct node *p,*q;
  struct node *START3=NULL;
  p=START1;
  q=START2;
  while(p!=NULL&&q!=NULL)
      {if(p->info<q->info)
      { InsEnd(&START3,p->info);
        p=p->Next;}
        else{InsEnd(&START3,q->info);
          q=q->Next;}
              }
  while(p!=NULL)
    {
      InsEnd(&START3,p->info);
      p=p->Next;
    }
   while(q!=NULL)
    {
      InsEnd(&START3,q->info);
      q=q->Next;
    }
  Traverse(START3);
  
}
int main()
 {
 struct node *START1,*START2,*p;
   START1=NULL,START2=NULL;
orderedinsertion( &START1, 10);
orderedinsertion( &START1, 20);
orderedinsertion( &START1, 30);
orderedinsertion( &START1, 40);
orderedinsertion( &START1, 50);
orderedinsertion( &START2, 12);
orderedinsertion( &START2, 15);
orderedinsertion( &START2,25);
orderedinsertion( &START2, 35);
orderedinsertion( &START2, 45);
 Traverse(START1);  
   printf("\n");
  Traverse(START2);
   printf("\n");
  mergell(START1,START2);
 
 return 0;
 }