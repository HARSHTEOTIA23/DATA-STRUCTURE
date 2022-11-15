#include<stdio.h>
struct student{
    int roll;
    int sec;
    float perc;
    int mob;
};
int main()
{ struct student s={2145,2,81.4,98574};
  printf("%d",s.roll);
  printf("%d",s.sec);
  printf("%f",s.perc);
  printf("%d",s.mob);

return 0;

}


