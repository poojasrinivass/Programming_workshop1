#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
int i,k,m;
unsigned long n;
printf("Enter a number below which prime numbers are to be calculated:\n");
scanf("%lu", &n);
int a[n+1];
for(i=1;i<=n;i++)
{
a[i]=i;
}

for(i=2;i<=sqrt(n);i++)
{
for(m=i;m<=n/i;m++)
{
a[m*i]=0;
}
}
for(k=2;k<=n;k++)
{
if(a[k] != 0)
//printf("The prime numbers below %d are: %lu", n,a[k]);
printf("%d ",a[k]);
}
}
