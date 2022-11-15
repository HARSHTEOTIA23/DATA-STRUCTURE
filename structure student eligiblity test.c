//Get the input of student: Name, Roll No, Marks in 6 subjects in 12th. 
//Find if the student is eligible for admission in Delhi University. 
//A student is eligible for DU if he has scored 95 % or more in Best 4.
#include<stdio.h>
struct student{
    int roll;
    int s1;
    int s2;
    int s3;
    int s4;
    int s5;
    int s6;
};
int main()
{ struct student s;
  float perc;
  
  scanf("%d",&s.roll);
  scanf("%d",&s.s1);
  scanf("%d",&s.s2);
  scanf("%d",&s.s3);
  scanf("%d",&s.s4);
  scanf("%d",&s.s5);
  scanf("%d",&s.s6);
  perc=(s.s1+s.s2+s.s3+s.s4)/4;
  printf("\n");
  if(perc>=95)
  printf("eligible");
  else{printf("not eligible");}
return 0;

}


