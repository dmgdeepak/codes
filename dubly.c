#include<stdio.h>
#include<conio.h>
typedef struct dbll
{
	int data;
	struct queue *next;
}dbll;
queue *front=NULL ,*rear=NULL;