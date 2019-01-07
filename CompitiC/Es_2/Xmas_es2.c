#include <stdint.h>
#include <stdio.h>
#include <math.h>

#define SUM 0x01
#define DIFF 0x02
#define MULT 0x03
#define DIV 0x04
#define POWER 0x05
#define ROOT 0x06

int sum(int num1,int num2);
int diff(int num1,int num2);
int mult(int num1,int num2);
double div(int num1,int num2);
int power(int base,int exp);
double root(int base,int index);



int main(int argc, char* argv[])
{
	uint8_t choice=0;
	int num1=0,num2=0;

	printf("Welcome in Calculator182, choose an operation digiting their number or anything else to quit: 1 SUM, 2 DIFFERENCE, 3 MULTIPLICATION, 4 DIVISION, 5 POWER, 6 ROOT.\n");
	scanf("%d",&choice);

	switch(choice)
	{
		case SUM:
			printf("You choose sum, please enter the value of the first number:\n");
			scanf("%d",&num1);
			printf("Please enter the value of the second number:\n");
			scanf("%d",&num2);

			printf("The sum of %d and %d is: %d.\n",num1,num2,sum(num1,num2));
		break;

		case DIFF:
			printf("You choose difference, please enter the value of the first number:\n");
			scanf("%d",&num1);
			printf("Please enter the value of the second number:\n");
			scanf("%d",&num2);

			printf("The difference of %d and %d is: %d.\n",num1,num2,diff(num1,num2));
		break;

		case MULT:
			printf("You choose multiplication, please enter the value of the first number:\n");
			scanf("%d",&num1);
			printf("Please enter the value of the second number:\n");
			scanf("%d",&num2);

			printf("The multiplication of %d and %d is: %d.\n",num1,num2,mult(num1,num2));
		break;

		case DIV:
			printf("You choose division, please enter the value of the first number:\n");
			scanf("%d",&num1);
			printf("Please enter the value of the second number:\n");
			scanf("%d",&num2);

			printf("The division of %d and %d is: %d.\n",num1,num2,div(num1,num2));
		break;

		case POWER:
			printf("You choose power, please enter the value of the base number:\n");
			scanf("%d",&num1);
			printf("Please enter the value of the exponent number:\n");
			scanf("%d",&num2);

			printf("%d to the power of %d is: %d.\n",num1,num2,power(num1,num2));
		break;

		case ROOT:
			printf("You choose root, please enter the value of the base number:\n");
			scanf("%d",&num1);
			printf("Please enter the value of the index number:\n");
			scanf("%d",&num2);

			printf("The %d root of %d is: %d.\n",num2,num1,root(num1,num2));
		break;

		default:
			printf("Goodbye!\n");
		break;
	}

	return 0;
}



int sum(int num1,int num2)
{
	int retv=0;

	retv=num1+num2;

	return retv;
}

int diff(int num1,int num2)
{
	int retv=0;

	retv=num1-num2;

	return retv;
}

int mult(int num1,int num2)
{
	int retv=0;

	retv=num1*num2;

	return retv;
}

double div(int num1,int num2)
{
	double retv=0;

	retv=num1/(num2+0.0);

	return retv;
}

int power(int base,int exp)
{
	int retv=0;

	retv=pow(base,exp);

	return retv;
}

double root(int base,int index)
{
	double retv=0;

	retv=pow(base,1/(index+0.0));

	return retv;
}
