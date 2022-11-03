
#include<stdio.h>
#include<string.h>
int main()
{  char s[50];
   int flag=0;
   gets(s);
   if((s[0]=='_')||(s[0]>='A'&&s[0]<='Z')||(s[0]>='a'&&s[0]<='z'))
   {
     int i=1;
     while(s[i]!='\0')
     {
     if((s[i]=='_')||(s[i]>='A'&&s[i]<='Z')||(s[i]>='a'&&s[i]<='z')||(s[i]>='0'&&s[i]<=9)||(s[i]=='$'))
       i=i+1;
       else
       {
         flag=1;
         break;
         printf("invalid");
       }
       }
    }
    else
    flag=1;
    if(flag=1)
    printf("invalid");
    else
    printf("valid");
}

