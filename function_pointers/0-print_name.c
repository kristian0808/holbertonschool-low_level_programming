/**
 *
 *print_name - Func that takes a string name and function pointer to return nothing
 *@name: string
 *@f:pointer
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
