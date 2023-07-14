/*
there are 4 types of function 
1). With argurement and without return type;
2). with argurment and with return type;
3). without argument and without returntype;
4). without argument and with return type;
*/
#include<stdio.h>
void display();
main(){
	printf("This is your enetred amount");
	display();
}
void display(){
	int a,b;
	printf("Enter your amount :");
	scanf("%d%d",&a,&b);
	printf("This is your a =%d this is your b =%d",a,b);
}
