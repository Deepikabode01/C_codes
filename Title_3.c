#include<stdio.h>

char d[10];
int top=-1;

void push(char);
void pop();

void push(char a)
{
	d[++top]=a;
}

void pop()
{
	printf("%c",d[top--]);
}

void main()
{
	char input[10];
	printf("\n enter string:");
	scanf("%d",input);
	
	int i=0;
	while (input[i]!='\0')
	{
		push(input[i]);
		i++;
	}
	
	printf("\n");
	while(top!=-1)
	{
		pop();
	}
}

