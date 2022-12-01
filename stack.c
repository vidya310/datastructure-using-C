#include<stdio.h>
#include<stdlib.h>
void push();
void pop();
void display();
int top=-1,ch,stack[100],i,n,x;
void main()
{
printf("Enter the size of stack:");
scanf("%d",&n);
printf("MENU\n");
printf("\n1.Push\n2.Pop\n3.Display\n4.Exit");
do
{
printf("\nEnter your choice:");
scanf("%d",&ch);
switch(ch)
{
case 1:
{
push();
break;
}
case 2:
{
pop();
break;
}
case 3:
{
display();
break;
}
case 4:
{
printf("Exit point");
break;
}
default:
{
printf("\nPlease enter a valid choice:");
}
}
}
while(ch!=4);
}
void push()
{
if(top>=n-1)
{
printf("\nStack overflow");
}
else
{
printf("\nEnter the value to be pushed:");
scanf("%d",&x);
top++;
stack[top]=x;
}
}
void pop()
{
if(top<=-1)
{
printf("\nStack underflow");
}
else
{
printf("\nThe popped element is %d",stack[top]);
top--;
}
}
void display()
{
if(top>=0)
{
printf("\n The elements in stack are:\n");
for(i=top;i>=0;i--)
{
printf("%d\n,",stack[i]);
}
printf("\n press next choice:");
}
else
{
printf("\n Stack is empty");
}
}

