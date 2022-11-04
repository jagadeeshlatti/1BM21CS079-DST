#include<stdio.h>
#define STACK_SIZE 5
int st[10],top=-1,item;

void push()
{
	if (top==STACK_SIZE-1)
		printf("Stack overflow\n");
	else
	{
		top++;
		st[top]=item;
	}
}
int pop()
{
	int del_item;
	if(top==-1)
		printf("Stack under flow\n");
	else
	{
		del_item=st[top];
		top--;
		return del_item;
	}
}
void display()
{
    int i;
	if (top==-1)
		printf("Stack is empty");
	for(i=0;i<top;i++)
		printf("%d\t",st[i]);
}
void main()
{
	int x,choice;
	printf("enter the choice\n");
	scanf("%d",&choice);
	while(1)
	{
		switch(choice)
		{
			case 1: printf("enter the items\n");
				  scanf("%d",&item);
			        push();
				  break;
			case 2: x=pop();
				  printf("%d",x);
				  break;
			case 3: display();
				  break;
			default: exit(0);
		}
	}
}