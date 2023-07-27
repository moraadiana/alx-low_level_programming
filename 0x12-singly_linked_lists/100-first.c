#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/* Function to be executed before main */
void __attribute__((constructor)) before_main()
{
    printf("You're beat! and yet, you must allow,\n"
		   " I bore my house upon my back!\n");
}

