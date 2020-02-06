#include<stdio.h>
#include<string.h>
main()
{
	char a[40];int i;
	printf("Enter a string:");
	gets(a);
	int n=strlen(a);
	for(i=0;i<n;i++)
	{
		if(a[i]>65 && a[i]<90)
		a[i]=a[i]+32;
		else
		a[i]=a[i]-32;
	}
	puts(a);
}
