/* 12345
   1234
   123
   12
   1
   12
   123
   1234
   12345  */
   
#include<stdio.h>
main()
{
	int i,j;
	
	for(i=5;i>=1;i--)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d",j);
		}
		printf("\n");
	}
		for(i=1;i<=5;i++)
		{
			for(j=1;j<=i;j++)
			{
				printf("%d",j);
			}
			printf("\n");
		}
	}

