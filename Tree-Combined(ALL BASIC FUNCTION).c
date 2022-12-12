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
int count(struct node *t)
{
  if(t==NULL)
  {
    return 0;
  }
  else {
    return 1+count(t->left)+count(t->right);
  }
}
int countleafnode(struct node *t)
{
  if(t==NULL)
  {
    return 0;
  }
  else{
    if(count(t->left)==0&&count(t->right)==0)
      {
      return 1;
      }
    else{
      return countleafnode(t->left)+countleafnode(t->right);
    }
  }
}
int countn2(struct node *t)
{
  if(t==NULL)
  {return 0;}
  else{
    if(t->left==NULL&&t->right==NULL)
    {return 0;
         }
    else{
      if(t->left!=NULL&&t->right!=NULL)
      {
       return 1+countn2(t->left)+countn2(t->right);
      }
      else{return countn2(t->left)+countn2(t->right);}
    }
  }
}
int countn1(struct node *t)
{
  if(t==NULL)
  {
    return 0;
  }
  else{
    if(t->left==NULL&&t->right==NULL)
    {
      return 0;
    }
    else{
      if(t->left!=NULL&&t->right!=NULL)
      {return countn1(t->left)+countn1(t->right);}
      else
      {
        return 1+countn1(t->left)+countn1(t->right);
      }
    }
  }
}
int max(int a,int b)
{
  if(a>b)
  {
    return a;
  }
  else return b;
}
int height(struct node *t)
{
  if(t==NULL)
  {return 0;}
  else{
    if(t->left==NULL&&t->right==NULL)
    {
      return 0;
    }
    else{
      return max(height(t->left),height(t->right))+1;
    }
  }
}
int sum_of_nodes(struct node *t)
{
  
  if(t==NULL)
  {
    return 0;
  }
  
  else{
   return t->data +sum_of_nodes(t->left)+sum_of_nodes(t->right);
    
  }
}
void strict_or_full(struct node *t)
{
  int n2,l,n;
  l=countleafnode(t);
  n2=countn2(t);
  n=count(t);
  if((l+n2)==n)
  {
    printf("it is a strict or full binary tree");
  }
  else{
    printf("it is not a strict or full binary tree");
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
  n=count(root);
  printf("\nthe no. of nodes are %d",n);
  l=countleafnode(root);
  printf("\nthe no. of leaf nodes are %d",l);
  n2=countn2(root);
  printf("\nthe no. of nodes with 2 child are %d",n2);
  n1=countn1(root);
  printf("the no. of nodes with 1 child are %d ",n1);
  h=height(root);
  printf("the height of the tree is %d ",h);
  sum=sum_of_nodes(root);
  printf("the sum of all the nodes is %d",sum);
  strict_or_full(root);
  return 0;
}
