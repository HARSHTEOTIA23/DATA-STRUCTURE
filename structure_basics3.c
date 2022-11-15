#include<stdio.h>
struct student{
    int roll;
    int sec;
    float perc;
    int mob;
};
int main()
{ struct student s[2];
  int i;
  for(i=0;i<2;i++)
  {scanf("%d",&s[i].roll);
  scanf("%d",&s[i].sec);
  scanf("%f",&s[i].perc);
  scanf("%d",&s[i].mob);}
  printf("\n");
  for(i=0;i<2;i++)
  {printf("%d  ",s[i].roll);
  printf("%d  ",s[i].sec);
  printf("%f%%  ",s[i].perc);
  printf("%d  ",s[i].mob);
    printf("\n");}

return 0;

}



