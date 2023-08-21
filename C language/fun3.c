#include<stdio.h>
main()
{
	int num,num1;
	printf("Enter the value  of a b:");
	scanf("%d%d",&num,&num1);
	sum(num,num1);
}

void sum(int a, int b){
	
	printf("This is your addition : %d",a+b);
}
