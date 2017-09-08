#include<stdio.h>
#include<stdlib.h>

int main()
{
int i,n;
printf("Enter the number whose fibonacci series is required:\n");
scanf("%d",&n);
unsigned long a[n+1];
printf("fibonacci series of the number %d is:\n",n); 
for(i=0;i<=n;i++)
{
if(i<2)
{
a[i]=i;
}
else
{
a[i]=a[i-1]+a[i-2];
}
printf("%lu\n",a[i]);
}

}


