#include <stdio.h>

int validate(char op)
{
	if(op == '-' || op == '+' || op == '*' || op == '/')
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int main()
{
	// framework
	
	int num1 = 0;
	char op;
	int num2 = 0;
	
	printf("Enter first number: ");
	scanf("%i",&num1);
	printf("Enter operator (+ - * /): ");
	scanf(" %c",&op);
	if(validate(op) == 1)
		{
		    printf("Enter second number: ");
	            scanf("%i",&num2);
		}
	else
		{
	            printf("Invalid operator, please use (+ - * /)\n");
	            return 0;
		}
		
	// maths_functions
	
	if(op == '-')
		{
	            printf("%i - %i = %i\n",num1,num2,num1-num2);
		}
	if(op == '+')
		{
		    printf("%i + %i = %i\n",num1,num2,num1+num2);
		}
	if(op == '*')
		{
		    printf("%i * %i = %i\n",num1,num2,num1*num2);
		}
	if(op == '/')
		{
		    printf("%i / %i = %i\n",num1,num2,num1/num2);
		}
	return 1;
}
		
