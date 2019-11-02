//#include <stdlib.h>
#include <stdio.h>
#include <string.h>
//#include <stddef.h>
//#include <stdint.h>
//#include <ctype.h>
//#include <stdlib.h>
//#include <fcntl.h>
//#include <limits.h>
#include "libft.h"

int		main()
{
//	printf("strrchr\n%s\n", strrchr("party", 'o'));
//	printf("%s\n\n", ft_strrchr("party", 'o'));

	printf("strnstr\n%s", ft_strnstr("haystack", "stacking", 6));
	printf("::");
	printf("%s\n", strnstr("haystack", "stacking", 6));
//	printf("%s\n", ft_strnstr("haystack", NULL, 0));	// should SEGFAULT
    char *sstrn = "lorem ipsum dolor sit amet";
	printf("%s\n", ft_strnstr(sstrn, "dolor", 15));
	printf("%s\n\n", strnstr(sstrn, "dolor", 15));

	char n[40] = "-99999999999999999999999999";
//	printf("atoi\n%d\n", ft_atoi("  \t -68d4fs"));
//	printf("%d\n", atoi("  \t -68d4fs"));
	printf("atoi\n%d\n", ft_atoi(n));
	printf("%d\n\n", atoi(n));

//	printf("isalpha\n%d\n", ft_isalpha('O'));
//	printf("%d\n\n", isalpha('O'));

//	printf("isdigit\n%d\n", ft_isdigit(52));
//	printf("%d\n\n", isdigit(52));

//	printf("isalnum\n%d\n", ft_isalnum(48));
//	printf("%d\n\n", isalnum(70));

//	printf("isprint\n%d\n", ft_isprint('\r'));
//	printf("%d\n\n", isprint('\r'));

//	printf("tolower\n%c\n", ft_tolower('O'));
//	printf("%c\n\n", tolower('O'));

//	printf("strchr\n%s\n", ft_strchr("string", '\0'));
//	printf("%s\n\n", strchr("string", '\0'));

//	printf("strlen\n%lu\n", ft_strlen("\0str\0ing"));
//	printf("%lu\n\n", strlen("\0str\0ing"));
	
//	char *src1 = malloc(20);
//	char *src2 = malloc(20);
//	printf("memset\n%s\n", ft_memset(src1 - 1, 'o', 5));
//	printf("%s\n\n", memset(src2 - 1, 'o', 5));

//	char fstring[10] = "lilies";
//	char sstring[10] = "lilies";
//	char rep[10] = "lilies";
//	printf("memcpy\n%s\n", ft_memcpy(rep, rep, sizeof(rep)));
//	printf("%s\n\n", memcpy(rep, rep, sizeof(rep)));

//	char fstring[10] = "lilies";
//	char sstring[10] = "lilies";
//	char rep[10] = "jasmin";
 //	printf("memccpy\n%s || %s\n", ft_memccpy(fstring, rep, 'i', sizeof(rep)), fstring);
//	printf("%s || %s\n\n", memccpy(sstring, rep, 'i', sizeof(rep)), sstring); 

//	char *s = "Tulipe";
//	printf(strrchr"%s\n", ft_strrchr(s, 0));
//	printf("%s\n\n", strrchr(s, 0));

//	printf("strncmp\n%d\n", ft_strncmp(" string first", "\0\n\200", 8/*sizeof("")*/));
//	printf("%d\n\n", ft_strncmp(" string first", "\0\n\200", 8/*sizeof("")*/));

//	int i = 0;
//	printf("<@><@><@><@><@><@><@><@>\n");
//	while (i < 9)
//	{
//		printf("size is %d\n", i);
		char strls1[7] = "string\0";
		char strls2[7] = "string\0";
		int a = strlcpy(strls1, "char", 3);
		int b = ft_strlcpy(strls2, "char", 3);
	//	int a = strlcat(strls1, "cha\0", /*i*/3);
	//	int b = ft_strlcat(strls2, "cha\0", /*i*/3);
		printf("strlcpy\n%s : %d\n", strls1, a);
		printf("%s : %d\n\n", strls2, b);
//		i++;
//	}

//	char *res_sys = (char *)calloc(0, 5);
//	char *res_fun = (char *)ft_calloc(0, 5);
//	printf("sys : %s, fun : %s\n", res_sys, res_fun);
//	printf("len of sys : %d, len of fun %d\n\n", (int)ft_strlen(res_sys), (int)ft_strlen(res_fun));
	
//	char fstring[7] = "string";
//	char sstring[7] = "string";
//	printf("strdup\n%s\n", strdup(string));
//	printf("%s\n\n", ft_strdup(string));
////strcpy(fstring, "char");printf("strcpy\n%s\n", fstring);
////ft_strcpy(sstring, "char");printf("%s\n\n", sstring);

//	printf("substr\n%s\n\n", ft_substr("string", 0, 0));

//	printf("strjoin\n%s\n", ft_strjoin("\0str\0", "\0ing\0"));

	printf("strlftrim\n%s\n", ft_strlftrim("string", "stg\0roetgi"));
	printf("strrgtrim\n%s\n", ft_strrgtrim("string", "stg"));
	printf("strtrim\n%s\n", ft_strtrim("string", "stg"));
	printf("%s\n\n", ft_strtrim("string", " "));

/*	////////
	printf("split\n%s\n", ft_split("istringig", 'i')[0]);
	printf("%s\n", ft_split("istringig", 'i')[1]);
	printf("%s\n", ft_split("istringig", 'i')[2]);
	printf("%s\n\n", ft_split("istringig", 'i')[3]);
*/	////////
//	printf("%s\n", ft_split("      ", ' ')[0]);

//	char tab[20] = "string";
//	char (*ptr)(unsigned int, char);
//	ptr = &ft_touppermpi;
//	printf("%s\n", tab);
//	printf("%s\n", ft_strmapi(tab, ptr));

	int fd;
	fd = open("new_file", O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	ft_putchar_fd('c', fd);ft_putchar_fd('|', fd);
	ft_putstr_fd("string", fd);
	ft_putendl_fd("", fd);
	ft_putendl_fd("new line", fd);
	ft_putnbr_fd(-2147483648, fd);ft_putendl_fd("\n", fd);

	printf("itoa\n%s\n", ft_itoa(-59840));
	printf("%s\n", ft_itoa(2147483647));
	printf("%s\n\n", ft_itoa(-2147483648LL));

//	char s1[10] = "string";
//	char s2[10] = "string";
//	printf("memmove\n%s\n", memmove(s1 + 1, s1, 3));
//	printf("%s\n\n", ft_memmove(s2 + 1, s2, 3));

	char	str[] = "lorem ipsum dolor sit amet";
	char	*strsub;
	char	*bullshit;
	if (!(strsub = ft_substr(str, 400, 20)))
		printf("NULL\n");
	else
	{
		bullshit = (char *)&strsub[30];
		bullshit = "FULL BULLSHIT";
		if (strsub)
			printf("string %s", strsub);
		else
			printf("rip\n");
	}
	if (str == strsub)
		printf("A new string was not returned\n");
	else
		printf("does not match\n");

	return (0);
}
