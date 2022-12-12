#include<stdio.h>
#include<stdlib.h>
struct node
{
int data;
struct node *left;
struct node *right;
};
struct node *makenode(int x)
{
  struct node *p;
  p=(struct node *)malloc(sizeof(struct node));
  p->data=x;
  return p;
}
void preordertraversal(struct node *t)
{
  if(t!=NULL)
  {
    printf("%d",t->data);
    preordertraversal(t->left);
    preordertraversal(t->right);
    
  }
  }
void inordertraversal(struct node *t)
{
  if(t!=NULL)
  { inordertraversal(t->left);
    printf("%d",t->data);
  inordertraversal(t->right);
    
  }
}
void postordertraversal(struct node *t)
{
  if(t!=NULL){
    if(t!=NULL)
    {
      postordertraversal(t->left);
      postordertraversal(t->right);
      printf("%d",t->data);
      
    }
  }
}
void createtree(struct node **t)
{  int choice,x;
  struct node *p;
  
  printf("whether the left of %d exist(1/0)",(*t)->data);
  scanf("%d",&choice);
  if(choice==1)
  {
    printf("enter the left data of %d",(*t)->data);
    scanf("%d",&x);
    p=makenode(x);
    (*t)->left=p;
    createtree(&p);
  }
  printf("whether the right of %d exist(1/0)",(*t)->data);
  scanf("%d",&choice);
  if(choice==1)
  {
    printf("enter the right data of %d",(*t)->data);
    scanf("%d",&x);
    p=makenode(x);
    (*t)->right=p;
    createtree(&p);
  }
}
int main()
{
  struct node *root=NULL;
  int x,n,l,n2,n1,h,sum;
  printf("enter the data of root node\n");
  scanf("%d",&x);
  root=makenode(x);
  createtree(&root);
  printf("\n pre order traversal is =>");
  preordertraversal(root);
   printf("\n post order traversal is =>");
  postordertraversal(root); 
  printf("\n in order traversal is =>");
  inordertraversal(root);
  return 0;}