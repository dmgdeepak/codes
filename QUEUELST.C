#include<stdio.h>
#include<conio.h>
typedef struct queue
{
	int data;
	struct queue *next;
}queue;
queue *front=NULL ,*rear=NULL;
void insert()
{
	int item;
	queue *t=(queue*)malloc(sizeof(int));
	if(t!=NULL) // T WILL BE NULL IF THERE IS NO FREE SPACE AVAILABLE TO ALLOTE
	{
		scanf("%d",&item);
		if(front==NULL)
			front=t;
	t->data=item;
	t->next=NULL;
	if(rear!=NULL) //To give address of current node to previous node 's next 
	rear->next=t;
	rear=t;
}}
void pop()
{
	if(isempty())
		printf("Stack is Empty");
	else
	{
		queue *t;
		t=front;
		printf("%d has been deleted",t->data);
		front=t->next;
		free(t);
	}
}
int isempty()
{
	if(front==NULL)
		return 1;
	else 
		return 0;
}
void peep()
{
	if(isempty())
		printf("Stack is Empty");
	else
	{
	queue *t;
	t=front;
	while(t!=NULL)
	{
		printf("%d",t->data);
		t=t->next;
	}}
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