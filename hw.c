#include<stdio.h>
void odd(int i);
void even(int j);
int main()
{
	int i,j;
    for( i=2;i<100;i++)
    {
        if(i%2==0)
        {
            even(i);
        }
        else
        {
            odd(i);
        }
    }
}
void odd(int a)
{
    printf("%d odd function",a);
}
void even(int a)
{
    printf("%d even function",a);
}
