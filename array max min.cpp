#include<stdio.h>
main()
{
	float t[24],max,min;
	int i;
	for(i=0;i<24;i++)
	{
		printf("enter the temp :\n");
		scanf("%f",&t[i]);
	}
	for(i=0;i<24;i++)
	{
		if(t[i]>max)
		max=t[i];
	}
	for(i=0;i<24;i++)
	{
		if(min>t[i])
		min=t[i];
	}
	printf("max temp=%f, min temp=%f \n",max,min);
}
