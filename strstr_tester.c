#include <stdio.h>

int	ft_strstr(char *find, char *str)
{
	while (find && str && *str)
	{
		while (*find && *str == *find)
		{
			str++;
			find++;
			if (!*find)
				return (1);
			else if (*find != *str)
				return (0);
		}
		str++;
	}
	return (0);
}

int main()
{
	printf("ret1: %d\n", ft_strstr("=''", "ZZ=''   "));
	printf("ret2: %d\n", ft_strstr("=''", "ZZ='q'   "));
	printf("ret3: %d\n", ft_strstr("=''", "qweqwZZ=''qweq  "));
}