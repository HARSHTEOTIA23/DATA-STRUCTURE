
#include<stdio.h>
#include<stdlib.h>
#define true 1
#define false 0
int prcd(char a,int b)
{  if(a=='^'||a=='*'||a=='/'||a=='%')
     {if(b=='^')
          return false;
          else
              return true;
     }
else{
    if(b=='+'||b=='-')
    return true;
    else 
    return false;
}

}
int main()
{ 
printf("\n%d",prcd('+','+'));
  printf("\n%d",prcd('^','+'));
  printf("\n%d",prcd('/','^'));
  printf("\n%d",prcd('-','/'));

return 0;
}
