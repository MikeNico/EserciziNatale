#include <stdint.h>
#include <stdio.h>

int main(int argc, char* argv[])
{

	int num1=0, num2=0,sum=0;
	uint64_t anum1=0,anum2=0,asum=0;
	
	printf("Insert the value of the first number:\n");
	scanf("%d",&num1);
	printf("Insert the value of the second number:\n");
	scanf("%d",&num2);
	
	if(num1>0)
	{
		printf("%d is a positive number.\n",num1);		
	}
	else if(num1<0)
	{
		printf("%d is a negative number.\n",num1);
	}
	else
	{
		printf("%d is zero.\n",num1);
	}


	if(num2%2==0)
	{
		printf("%d is an even number.\n",num2);		
	}
	else
	{
		printf("%d is an odd number.\n",num2);
	}

	anum1=num1;
	anum2=num2;

	sum=num1+num2;

	asum=anum1+anum2;

	printf("The sum of %d and %d is %d.\n",num1,num2,sum);
	printf("The absolute sum of %d and %d is %d.\n",num1,num2,asum);

	return 0;

}
