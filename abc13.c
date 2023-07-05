/*
Syntax:
int i;
while(condtion){
loop body;
updation;
}
*/
#include<stdio.h>
main(){
	int i;
	while(i<=10)
	{
		if(i==5)
		{
//			continue;
//			break;
			printf("$");
			i++;
		}else{
			printf("%d \n",i);
			i++;
		}
			
	}
	
}
