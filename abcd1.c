/*
1	2	2
2	2	2
2	2	2

*/


#include<stdio.h>
main()
{
	int i,j,arr[3][3],arr1[3][3];
		for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			{
				printf("Enter values [%d][%d] :",i,j);
				scanf("%d",&arr[i][j]);
			}
		}
		for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			{
				printf("Enter values [%d][%d] :",i,j);
				scanf("%d",&arr1[i][j]);
			}
		}
	printf("********************Matrix1***************************\n");
		for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			{
				printf("%d \t",arr[i][j]);
			}
			printf("\n");
		}
		printf("********************Matrix 2***************************\n");
		for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			{
				printf("%d \t",arr1[i][j]);
			}
			printf("\n");
		}


}
