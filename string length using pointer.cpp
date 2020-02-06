#include<stdio.h>
int Length(char*);
int main() 
{
   char s[10];
   int l;
   printf("Enter string : ");
   gets(s);
   l = Length(s);
   printf("The length of the string %s is : %d",s,l);
   return 0;
}
int Length(char*p) 
{
   int c=0;
   while(*p !='\0') 
   {
      c++;
      p++;
   }
   return c;
}
