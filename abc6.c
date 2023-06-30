#include<stdio.h>
main()
{
	int a,b;
	printf("Enter your values :");
	scanf("%d%d",&a,&b);
	if(a>b){
		printf("%d is bigger then ",a,b);
	}else if(b>a){
		printf("%d is bigger then %d",b,a);
	}else if(b==a){
		printf("%d is same as %d ",a,b);
	}
	else{
		printf("Invalid input");
	}
}
