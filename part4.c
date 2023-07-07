/*
1*1=1
*/



#include<stdio.h>
main()
{
	int j=0,k=0,i,arr[10],even[10],odd[10],evencountr=0,oddcounter=0;
	for(i=0;i<10;i++)
	{
		printf("enetr the value :");
		scanf("%d",&arr[i]);
		if(arr[i]%2==0)
		{
			even[j]=arr[i];
			evencountr++;
			j++;
		}else{
			odd[k]=arr[i];
			oddcounter++;
			k++;
		}
	}
	printf("This is even numbers : ");
	for(j=0;j<=evencountr;j++)
	{
		printf("%d \t",even[j]);
		
	}
	printf("\n this is odd nubers :");
	for(k=0;k<=oddcounter;k++)
	{
		printf("%d \t",odd[k]);
	}
}
