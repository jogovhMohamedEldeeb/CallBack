/*
 * main.c
 *
 *  Created on: 20 May 2024
 *      Author: Mohmamed_Eldeeb
 */

#include <stdio.h>

/* callback functions */

int sum(int num1,int num2);
int sub(int num1,int num2);
int mul(int num1,int num2);
int div(int num1,int num2);

/* make alias */
typedef int (*func_ptr) (int, int);


/* handler */
int operation(int num1, int num2, func_ptr ptr);

int main()
{
	/* we will make menu driven system so use ==> ' array '*/

	/* array will store pointer to function so will take type ==> 'func_ptr' */
	func_ptr menu[] ={sum,sub,mul,div};

	int num1,num2,op;
	
		
		printf("\n enter num1 : ");
		scanf("%d",&num1);
		printf("\n enter num2 : ");
		scanf("%d",&num2);
		printf("\n enter opeartion : ");
		scanf("%d",&op);
		//printf("\n result: %d",operation(num1,num2,menu[op]));
	
		if(op == 0)
		{
			printf("\n result of sum: %d",operation(num1,num2,menu[op]));	
		}
		else if(op == 1)
		{
			printf("\n result of sub: %d",operation(num1,num2,menu[op]));	
		}
		else if(op == 2)
		{
			printf("\n result of mul: %d",operation(num1,num2,menu[op]));	
		}
		else
		{
			/* Nothing */
		}

	return 0;
}

int sum(int num1, int num2)
{
	return (num1 + num2);
}
int sub(int num1, int num2)
{
	return (num1 - num2);
}
int mul(int num1, int num2)
{
	return (num1 * num2);
}
int div(int num1, int num2)
{
	return (num1 / num2);
}

int operation(int num1, int num2, func_ptr ptr)
{
	return (ptr(num1, num2));
}