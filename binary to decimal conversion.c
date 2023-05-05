#include<stdio.h>
int main()
{
	int num,temp,i=0,sum=0;
	int digit;
	printf("enter any number:");
	scanf("%d",&num);
	while(num!=0)
	{
		digit=num%10;
		sum=sum+digit*pow(2,i);
		i++;
		num=num/10;
		
	}
	printf("decimal eq of %d is %d",temp,sum);
	return 0;
}

