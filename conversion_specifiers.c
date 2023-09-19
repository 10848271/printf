#include <unistd.h>
#include <stdio.h>
#include "main.h"

/* conversion specifier functions implementation goes here */

int c_spec_func(char *value)
{
	return (write(1, value, 1));
}

int s_spec_func(char *value)
{
	int idx;

	for (idx = 0; value[idx]; idx++)
		continue;

	return (write(1, value, idx));
}
