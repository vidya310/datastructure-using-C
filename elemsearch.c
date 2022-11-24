#include<stdio.h>
void main()
{
int a[30],i,n,key,f;
printf("Enter the array size:");
scanf("%d",&n);
printf("Enter the array elements:");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("Enter the value to search:");
scanf("%d",&key);
for(i=0;i<n;i++)
{
if(a[i]==key)
{
f=1;
break;
}
}
if(f==1)
{
printf("%d is an element in the array",key);
}
else
{
printf("Element not found");
}
}

