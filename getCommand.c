#include "libft.h"

int	getCommand(int argc, char **argv, char *option)
{
	if (argc == 1)
		return (1);
	if (argc > 1)
	{
		if (verifstr(argc, argv, option) == 0)
			return (0);
	}
	return (1);
}

int	verifstr(int argc, char **argv, char *option)
{
	int	y;
	int	j;

	j = 1;
	y = 1;
	while (y < argc)
	{
		j = 1;
		if (argv[y][0] != '-' || ft_strlen(argv[y]) == 1)
			return (0);
		while (argv[y][j] != '\0')
		{
			if (ft_strchr(option, argv[y][j]) == NULL)
				return (0);
			j++;
		}
		y++;
	}
	return (1);
}
