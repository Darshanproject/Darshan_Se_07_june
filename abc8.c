#include<stdio.h>
main()
{
	int i,a,total_even=0,total_odd=0,C_odd=0,C_even=0;
	for(i=1;i<=10;i++)
	{
		scanf("%d",&a);
		if(a%2==0)
		{
			printf("Even number \n");
			total_even+=a;
			C_even++;
		}else{
			printf("Odd number \n");
			total_odd += a;
			C_odd++;
		}
	}
	printf("This is total of even numbers :%d\n",total_even);
	printf("This is total of odd numbers :%d\n",total_odd);
	printf("this many even numbers are there :%d \n",C_even);
	printf("this many odd numbers are there :%d \n",C_odd);
}
