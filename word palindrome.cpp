#include<stdio.h>
#include<string.h>
main()
{
	char s1[20],s2[20];
	printf("Enter a string to check palindrome : ");
	gets(s1);
	strcpy(s2,s1);
	strrev(s2);
	if(strcmp(s1,s2)==0)
	printf("Palindrome");
	else
	printf("Not a palindrome");	
}
