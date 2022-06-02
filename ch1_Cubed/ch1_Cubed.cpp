// ch1_Cubed.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <stdlib.h>
#include "platform.h"

#define CUBED(a) ((a) * (a) * (a))

float my_input = 0, my_result = 0.0;
char my_end[25];

void main()
{
	system(CLEAR);
	printf("Please, enter the number to be cubed:");

	fflush(stdin);
	scanf_s("%f", &my_input);
	my_result = CUBED(my_input);

	printf("\nThe result of your input number %f cubed is %f\n",
		   my_input, my_result);

	getchar();

	exit(EXIT_SUCCESS);
}