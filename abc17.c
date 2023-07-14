#include<stdio.h>
main()
{
	int num,mul[100],i,j;
	printf("Who many tables you want print :");
	scanf("%d",&num);
	printf("Enter the table you want to print :");
	for(i=0;i<=num;i++)
	{
		scanf("%d",&mul[i]);
			for(j=1;j<=10;j++)
	{
		printf("%d * %d = %d \n",mul[j],j,mul[j]*j);
	}
	printf("-------------------------------------\n");
	}

}
