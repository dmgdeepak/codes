//  queue using stack
#include<stdio.h>
#include<conio.h>
typedef struct stack
{
	int data;
	struct stack *next;
}stack;
int count=0;
stack *ptr=NULL; // ptr is used to traverse as a Stack
void insert()
{
	int item;
	stack *t=(stack*)malloc(sizeof(int));
	if(t!=NULL)
	{
		scanf("%d",&item);
	t->data=item;
	t->next=ptr; // Next element address will be previous node 
	ptr=t;
	count++;
}}
void delete()
{
	stack *t=ptr,*p;
	if(count==0)
	{
		printf("Empty");
	return;
	}
	else
	{
		if(count!=1)
		{
	while((t->next)->next!=NULL)
	{
		t=t->next;
	}
	p=t;
	t=t->next;
	p->next=NULL;
	printf("%d deleted",t->data);
	free(t);
}
else
{
	t=ptr;
	printf("%d deleted",t->data);
	free(t);
	ptr=NULL;
}
	}
count--;
}
void main()
{
	int ch;
	while(1)
	{
		printf("\n1 For Insert \n 2 For delete \n4 : Exit");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
			insert();
			break;
			case 2:
			delete();
			break;
			case 4:
			exit(1);
		}
	}
	getch();
}