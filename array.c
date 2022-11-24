#include<stdio.h>
void main()
{
int a[100],n,i;
printf("Enter the array size:");
scanf("%d",&n);
printf("\nEnter the array elements:");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("\n The array elements are:\n");
for(i=0;i<n;i++)
{
printf("%d\n",a[i]);
}
}
