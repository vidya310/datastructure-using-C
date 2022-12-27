#include <stdio.h>
#include<stdlib.h>
#define SIZE 5
int items[SIZE];
int front = -1, rear = -1;
int isFull();
int isEmpty();
void enQueue();
int deQueue();
void display();
void search();

int isFull() {
  if ((front == rear + 1) || (front == 0 && rear == SIZE - 1)) return 1;
  return 0;
}
int isEmpty() {
  if (front == -1) return 1;
  return 0;
}
void enQueue() 
{
  int element;
  if (isFull())
    printf("\n Queue is full!! \n");
  else {
    if (front == -1) front = 0;
    rear = (rear + 1) % SIZE;
    printf("\n Enter the element to be inserted:");
    scanf("%d",&element);
    items[rear] = element;
    printf("\n Inserted -> %d", element);
  }
}
int deQueue() {
  int element;
  if (isEmpty()) {
    printf("\n Queue is empty !! \n");
    return (-1);
  } else {
    element = items[front];
    if (front == rear) {
      front = -1;
      rear = -1;
    } 
    else {
      front = (front + 1) % SIZE;
    }
    printf("\n Deleted element -> %d \n", element);
    return (element);
  }
}
void display() {
  int i;
  if (isEmpty())
    printf(" \n Empty Queue\n");
  else {
    printf("\n Front -> %d ", front);
    printf("\n Items -> ");
    for (i = front; i != rear; i = (i + 1) % SIZE) {
      printf("%d ", items[i]);
    }
    printf("%d ", items[i]);
    printf("\n Rear -> %d \n", rear);
  }
}
void search() {
  int i,key,f;
  if (isEmpty())
    printf(" \n Empty Queue\n");
  else {
    printf("\n Enter the element to be searched:");
    scanf("%d",&key);
    for (i = front; i != rear; i = (i + 1) % SIZE) {
      if(items[i]==key)
      {
         f=1;
      }
      else
      {
        f=0;
      }
    }
    if(f==1)
    {
       printf("%d is found ",key);
    }
    else if(f==0)
    {
       printf("\nElement not found");
    }
  }
}

int main() {
  int choice;
  printf("\n*****MENU****");
  printf("\n1.Insert\n2.Delete\n3.Display\n4.Search\n5.Exit");
  while(choice!=5)
  {
      printf("\nPlease enter your choice:");
      scanf("%d",&choice);
      switch(choice)
      {
          case 1:
          {
              enQueue();
              break;
          }
          case 2:
          {
              deQueue();
              break;
          }
          case 3:
          {
              display();
              break;
          }
          case 4:
          {
              search();
              break;
          }
          case 5:
          {
              return 0;
              break;
          }
          default:
          {
              printf("\nPlease enter a valid choice!!");
          }
      }
  }
  return 0;
}
