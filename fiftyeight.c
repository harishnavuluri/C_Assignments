#include<stdio.h>
void main()
{
	int i,j;
	for(i=1;i<=5;i++)
	{
		if(i==2 || i==4)
		{
			for(j=1;j<=5;j++)
			{
				if(j%2!=0)
				{
					printf("0");
				}
				else
				{
					printf("1");
				}
			}
		printf("\n");
		}
		else
		{
			for(j=1;j<=5;j++)
			{
				if(j%2!=0)
				{
					printf("1");
				}
				else
				{
					printf("0");
				}
			}
		printf("\n");
		}
	}
}

