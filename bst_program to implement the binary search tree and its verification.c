#include<stdio.h>
#include<stdlib.h>
struct node
{
struct node *left;
int data;
struct node *right;
};
struct node *makenode(int x)
{
  struct node *p;
  p=(struct node *)malloc(sizeof(struct node));
  p->data=x;
  p->left=NULL;
  p->right=NULL;
  return p;
}
void bstinsert(struct node **t,int x)
{
  struct node *p,*q;
  p=*t;
  q=NULL;
  if(*t==NULL)
  {*t=makenode(x);}
  else{
  while(p!=NULL)
    {
      q=p;
      if(x<p->data)
        p=p->left;
      else
        p=p->right;}
      if(x<q->data)
      {
        q->left=makenode(x);
      }
      else{q->right=makenode(x);}
    
    }
  
}

void inordertraversal(struct node *t)
{
  if(t!=NULL)
  { inordertraversal(t->left);
    printf("%d ",t->data);
  inordertraversal(t->right);
    
  }
}
 int main()
{
  struct node *root=NULL;
  struct node *x;
  
  bstinsert(&root,100);
  bstinsert(&root,150);
  bstinsert(&root,170);
  bstinsert(&root,50);
  bstinsert(&root,60);
  bstinsert(&root,80);
  bstinsert(&root,120);
  inordertraversal(root);
   return 0;
  
}