#include<stdio.h>
#include<stdlib.h>

struct node
{
  int a;
  struct node *next;
};


void printlist(struct node *n)
{

while(n!=NULL)
	{
	printf("%d",n->a);
	n=n->next;
	}
	printf("\n");
}

void deletebegin(struct node **c)
{
struct node *node=NULL;
node=(*c);
(*c)=node->next;
free(node);
}

void deletelast(struct node *c)
{
struct node *node=c;
struct node *node1=NULL;

while(node->next->next!=NULL)
{
node=node->next;
}

node1=node->next;
node->next=NULL;
free(node1);
}

void main()
{

int c,b;
//printf("Enter the number to be added");
//scanf("%d",&c);

struct node *head=NULL;
struct node *first=NULL;
struct node *second=NULL;
struct node *third=NULL;

head= (struct node*)(malloc(sizeof(struct node)));
first= (struct node*)(malloc(sizeof(struct node)));
second=(struct node*)(malloc(sizeof(struct node)));
third= (struct node*)(malloc(sizeof(struct node)));

head->a=1;
head->next=first;

first->a=2;
first->next=second;

second->a=3;
second->next=third;

third->a=4;
third->next=NULL;

printlist(head);
printf("After deleting\n");
//deletebegin(&head);

deletelast(head);
printlist(head);
//free(head);
//free(first);
//free(second);
//free(third);
}
