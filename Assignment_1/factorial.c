#include<stdio.h>
#include<stdlib.h>

int main()
{
int n,i;
printf("The number whose factorial is to be calculated:\n");
scanf("%d", &n);
unsigned long a[n+1];
for(i=0;i<=n;i++)
{
if(i<2)
{
a[i] = 1;
}
else
{
a[i]=a[i-1]*i;
}

}
printf("Factorial of %d is:%lu\n",n,a[n]);
return 0;
}



