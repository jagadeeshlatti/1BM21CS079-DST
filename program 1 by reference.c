#include<stdio.h>
#include<stdlib.h>
#define STACK_SIZE 5
int st[5];
int top=-1,item;
void push(int st[],int*top,int item)
{
	if (*top==STACK_SIZE-1)
	printf("The stack  overflow \n");
	else
	{
		(*top)++;
		st[*top]=item;
	}
}
int pop(int st[],int*top)
{
	int del_item;
	if (*top==-1)
	printf("stack underflow\n");
	else
	{
		del_item=st[*top];
		(*top)--;
		return del_item;
	}
}
void display(int st[],int *top)
{
	if (*top==-1)
	printf("stack is empty\n");
	else
	{
		for(int i=0;i<=*top;i++)
		printf("%d\n",st[i]);
	}
}
void main()
{
    int a;
    int choice;
   
    while (1)
    {   printf("\nEnter the choice:\n");
    scanf("%d",&choice);
      
        switch (choice)
    {
    case 1: printf("Enter the item to be inserted:\n");
            scanf("%d",&item);
            push (st,&top,item);
        break;
    case 2: a=pop(st,&top);
            printf("%d\n",a);
            printf("This item is removed\n");
            break;
    case 3: display(st,&top);
            break;            
    
    default: exit(0);
        break;
    }
        
    }
    
}
