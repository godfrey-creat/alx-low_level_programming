/**
 * print_name - func to print name
 * @name: name tag
 * @g: func pointer that doesnt return nothing
 * Return: 0
 */

void print_name(char *name, void(*g)(char *))
{
	if (name && g)
		g(name);
}
