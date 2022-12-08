#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
struct node
{
int data;
struct node*link;
};
struct node*header=NULL;
void InsertFirst()
{
struct node*ptr;
ptr=(struct node*)malloc(sizeof(struct node*));
if(ptr==NULL)
{
printf("\nNo space");
}
else
{
printf("\nEnter the elements to be inserted:");
scanf("%d",&ptr->data);
ptr->link=NULL;
if(header==NULL)
{
header=ptr;
}
else
{
ptr->link=header;
header=ptr;
}
printf("\n%d inserted in to the list",ptr->data);
}
}
void InsertLast()
{
struct node*temp,*ptr;
ptr=(struct node*)malloc(sizeof(struct node*));
ptr->link=NULL;
temp=header;
if(ptr==NULL)
{
printf("\nNo space available");
}
else
{
while(temp->link!=NULL)
{
temp=temp->link;
}
printf("\nEnter the element to be inserted:");
scanf("%d",&ptr->data);
temp->link=ptr;
printf("\n%d inserted",ptr->data);
}
}
void InsertLocation()
{
int key;
struct node*temp,*ptr;
ptr=(struct node*)malloc(sizeof(struct node*));
ptr->link=NULL;
printf("\nEnter the value of the node after which the new node to be inserted:");
scanf("%d",&key);
temp=header;
while(temp->data!=key)
{
temp=temp->link;
if(temp==NULL)
{
break;
}
}
if(temp==NULL)
{
printf("\nThe %d value not exist",key);
}
if(temp->data==key)
{
if(ptr==NULL)
{
printf("\nNo space");
}
else
{
printf("\nEnter the element to be inserted:");
scanf("%d",&ptr->data);
ptr->link=temp->link;
temp->link=ptr;
printf("\n%d inserted after %d",ptr->data,key);
}
}
}
void DeleteFirst()
{
struct node*temp;
temp=header;
header=temp->link;
printf("\n%d deleted",temp->data);
free(temp);
}
void DeleteLast()
{
struct node*temp,*p;
temp=header;
while(temp->link!=NULL)
{
p=temp;
temp=temp->link;
}
printf("\n%d deleted",temp->data);
free(temp);
p->link=NULL;
}
void DeleteLocation()
{
struct node*temp,*p;
int key;
printf("\nEnter the value of the node to be deleted:");
scanf("%d",&key);
temp=header;
while(temp->data!=key)
{
p=temp;
temp=temp->link;
if(temp==NULL)
break;
}
if(temp==NULL)
{
printf("\n%d value not exist",key);
return;
}
if(temp->data==key)
{
printf("\n%d deleted",temp->data);
p->link=temp->link;
free(temp);
}
}
void Search()
{
struct node*temp;
int key,pos=0;
temp=header;
printf("\nEnter the element to be searched:");
scanf("%d",&key);
while(temp->data!=key)
{
temp=temp->link;
pos++;
if(temp==NULL)
{
break;
}
}
if(temp==NULL)
{
printf("\n The %d value not exist",key);
return;
}
if(temp->data==key)
{
printf("\n %d is available in location %d",key,pos+1);
}
}
void Display()
{
struct node*p;
if(header==NULL)
{
printf("\nList is empty");
}
else
{
printf("\n Elements in linkedlist are:\n");
p=header;
while(p!=NULL)
{
printf("\t%d",p->data);
p=p->link;
}
}
}
void main()
{
int choice;
printf("\nSINGLY LINKED LIST\n");
do
{
printf("\nMENU");
printf("\n1.Insert in beginning\n2.Insert at last\n3.Insert at any random location\n4.Delete from beginning\n5.Delete from last\n6.Delete node after specified location\n7.Search for an element\n8.Display\n9.Exit");
printf("\nEnter a choice:");
scanf("%d",&choice);
switch(choice)
{
case 1:
{
InsertFirst();
break;
}
case 2:
{
InsertLast();
break;
}
case 3:
{
InsertLocation();
break;
}
case 4:
{
DeleteFirst();
break;
}
case 5:
{
DeleteLast();
break;
}
case 6:
{
DeleteLocation();
break;
}
case 7:
{
Search();
break;
}
case 8:
{
Display();
break;
}
case 9:
{
exit(0);
}
default:
{
printf("\nInvalid option");
}
}
}
while(choice!=9);
}
