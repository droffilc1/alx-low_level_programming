#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * argstostr - concatenates all the arguments
 * @ac: The  first argument
 * @av: The second argument
 *
 * Return: pointer to a new string. Otherwise NULL.
 */
char *argstostr(int ac, char **av)
{
	int i;
	size_t len = 0;
	char *_all_args, *all_args;


	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		len += strlen(av[i]) + 1;
	}



	_all_args = all_args = malloc(len + 1);

	for (i = 0; i < ac; i++)
	{
		memcpy(_all_args, av[i], strlen(av[i]));
		_all_args += strlen(av[i]);

		if (i < ac - 1)
		{
			*_all_args = '\n';
			_all_args++;
		}
		else
		{
			*_all_args = '\n';
			_all_args++;
			*_all_args = '\0';
		}
	}


	return (all_args);

	free(all_args);
}
