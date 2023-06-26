/*
if else:
syntax:
if(condtion){
	statement;
}else {
	statement;
}
*/

#include<stdio.h>
main(){
	int num;
	printf("\tEnter your number ");
	scanf("%d",&num);
	if(num>18){
		printf("Eligable");
	}else{
		printf("Not Eligable");
	}
}
