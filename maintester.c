#include "libft.h"
#include <unistd.h>
#include <stdio.h>
#include <string.h>

int			main(int argc, char *argv[])
{
	char *p = "string to be trimmed";
	char *s = "sset";

	if (argc == 1)
		printf("not enough parameters");
	else if (!ft_strncmp(argv[1], "1", 1))
	{
		ft_strtrim(p, s);
		ft_strrgtrim(p, s);
		ft_strlftrim(p, s);
	}
	else if (!ft_strncmp(argv[1], "2", 1))
	{
//		memcpy("NULL", "NULL", 1);
		ft_memcpy("NULL", "NULL", 1);
//		memmove("NULL", "NULL", 1);
//		ft_memmove("NULL", "NULL", 1);
	}
	else
	{
//		printf("%s", ft_strnstr(NULL, "NULL", 0));
		printf("%zu", strlcat(NULL, "NULL", 0));
	}
	return (0);
}
