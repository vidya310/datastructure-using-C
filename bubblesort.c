#include<stdio.h>
int main()
{
int a[25],n,x,y,temp;
printf("Enter the arraysize:");
scanf("%d",&n);
printf("Enter the array elements:");
for(x=0;x<n;x++)
{
scanf("%d",&a[x]);
}
for(x=0;x<n-1;x++)
{
for(y=0;y<n-x-1;y++)
{
if(a[y]>a[y+1])
{
temp=a[y];
a[y]=a[y+1];
a[y+1]=temp;
}
}
}
printf("Array after sorting:");
for(x=0;x<n;x++)
{
printf("%d\n",a[x]);
}
}


