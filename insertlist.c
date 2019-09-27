#include<stdio.h>
#include<stdlib.h>


struct node
{
int a;
struct node *next;
};

void insert(struct node *n, int number, int place)
{
struct node *node1=n;
struct node *node2=NULL;
node2= (struct node*)(malloc(sizeof(struct node)));

for(int i=0;i!=place;i++)
{
node1=node1->next;
}
node2->next=node1->next;
node2->a=number;
node1->next=node2;
//node1=node2->next;
}

void printrec(struct node *n)
{
if(n==NULL)
return ;
else
{
struct node *node1=n;
printf("%d",n->a);
n=n->next;
printrec(n);  		
}
}


void printlist(struct node *n)
{

while(n!=NULL)
	{
	printf("%d",n->a);
	n=n->next;
	}
	printf("\n");
}

void main()
{

int number,place;

struct node *head=NULL;
struct node *first=NULL;
struct node *second=NULL;
struct node *third=NULL;
struct node *node2=NULL;

head=  (struct node*)(malloc(sizeof(struct node)));
first= (struct node*)(malloc(sizeof(struct node)));
second=(struct node*)(malloc(sizeof(struct node)));
third= (struct node*)(malloc(sizeof(struct node)));


//printf("Enter the number to be added");
//scanf("%d",&number);

//printf("Enter the place to be added");
//scanf("%d",&place);


head->a=1;
head->next=first;

first->a=2;
first->next=second;

second->a=3;
second->next=third;

third->a=4;
third->next=NULL;

printlist(head);
//printf("After deleting\n");
//deletebegin(&head);

//printf("After insertion\n");
//deletelast(head);
//insert(head,number,place);
//printlist(head);
printf("Recursive printing\n");
printrec(head);
}
