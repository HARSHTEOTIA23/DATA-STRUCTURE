#include<stdio.h>
struct student{
    int roll;
    int sec;
    float perc;
    int mob;
};
int main()
{ struct student s;
  scanf("%d",&s.roll);
  scanf("%d",&s.sec);
  scanf("%f",&s.perc);
  scanf("%d",&s.mob);
  printf("\n");
  printf("%d  ",s.roll);
  printf("%d  ",s.sec);
  printf("%f%%  ",s.perc);
  printf("%d  ",s.mob);

return 0;

}
