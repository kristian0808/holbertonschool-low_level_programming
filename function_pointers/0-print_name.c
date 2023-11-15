#include "function_pointers.h"
/**
 *print_name - Func that prints name
 *@name: string
 *@f:pointer
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
		f(name);
}
