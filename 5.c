/*			1
		   22
		  333
		 4444
		55555*/

#include<stdio.h> 
main()
{
	int i,j,k;
	for(i=1;i<=5;i++)
	{
		for(k=i;k<=4;k++)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
			printf("%d",i);
		}
		printf("\n");
	}
 } 		   	
