#include<stdio.h>

int sum(int a ,int b);
main()
{
	int a,b,ans;
	printf("Enter the value :");
	scanf("%d %d",&a,&b);
	ans=sum(a,b);
	printf("This is your addtion %d",ans);
		
}
int sum(int a ,int b){
	return a+b;
}

