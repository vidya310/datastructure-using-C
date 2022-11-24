#include<stdio.h>
void main()
{
int a[50],i,count,sum=0;
printf("Enter the size of array:");
scanf("%d",&count);
printf("\nEnter the array elements:");
for(i=0;i<count;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<count;i++)
{
sum+=a[i];
}
printf("Sum=%d",sum);
}
