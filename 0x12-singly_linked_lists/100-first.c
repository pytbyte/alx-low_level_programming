#include<stdio.h>

/**
 * firstrun - Apply the constructor attribute to firstrun() function
 * that it is executed before main()
 */
void firstrun(void) __attribute__ ((constructor));

/**
 * firstrun - implementation of firstrun
 */
void firstrun(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
