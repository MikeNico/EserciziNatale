#include <stdint.h>
#include <stdio.h>

uint64_t factorial(int end);

int main(int argc, char* argv[])
{
	int num=0;

	printf("Please enter the number you want to find the factorial of:\n");
	scanf("%d",&num);

	printf("The factorial of %d is: %d.\n",num,factorial(num))
	
	return 0;
}



uint64_t factorial(int end)
{
	uint64_t retv=1,i=1;

	while(i<=end)
	{
		retv=retv*i;
	}

	return retv;
}
