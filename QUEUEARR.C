#include<stdio.h>
#include<conio.h>
int front=-1,rear=-1,arr[6];
void insert()
{
	if(isfull())
		printf("Queue is Full");
	else
	{
		int item;
		printf("\nEnter Element");
		scanf("%d",&item);
		if(front==-1)
			front=0;
		rear++;
		arr[rear]=item;
	}
}
void pop()
{
	if(isempty())
		printf("Queue is Underflow");
	else
	{
		printf("Deleted %d ",arr[front]);
		front++;
	}
}
void peep()
{
	if(isempty())
		printf("Queue is Underflow");
	else
	{
	int temp=front;
	while(temp!=rear+1 )
	{
		printf("%d",arr[temp]);
		temp++;
	}
	}
	
}
int isfull()
{
	if(rear==5)
		return 1;
	else
		return 0;
}
int isempty()
{
	if(rear==-1 || front==rear+1)
		return 1;
	else
		return 0;
}
void main()
{
	int ch;
	while(1)
	{
		printf("\n1 For Insert \n 2 For delete \n 3 to traverse \n 4 : Exit");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
			insert();
			break;
			case 2:
			pop();
			break;
			case 3:
			peep();
			break;
			case 4:
			exit(1);
		}
	}
	getch();
}