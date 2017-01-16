#inlude <stdio.h>

int validate(op)
{
	if(validate == "-" || validate == "+" || validate == "*" || validate == "/")
		return 1;
	else
		return 0;
}

int main();
{
	// framework
	
	int num1 = 0;
	char op = "";
	int num2 = 0;
	
	printf("Enter first number: ");
	scanf("%i",&num1);
	printf("Enter operator (+ - * /): ");
	scanf(" %c",&op);
	if(valiate(op) == 1)
		{
		    printf("Enter second number: ");
	            scanf("%i",&num2);
		}
	else
		{
	            printf("Invalid operator, please use (+ - * /)");
	            return 0;
		}
		
	// maths_functions
	
	if(op == "-")
		{
	            printf("%i - %i = %i",num1,num2,num1-num2);
		}
	if(op == "+")
		{
		    printf("%i + %i = %i",num1,num2,num1+num2):
		}
