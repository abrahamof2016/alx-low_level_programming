/**
  * print_name - print a name.
  * @name: name to print.
  * @f: a pointer to a function.
  * Return: nothing.
  */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
