#include "libft.h"

static	int		check_symbol(const char *s, int c)
{
	while (*s)
	{
		if (*s == c)
			return (1);
		s++;
	}
	return (0);
}

char			*ft_strtrim(char const *s1, char const *set)
{
	int		len_s1;
	char	*dst;

	if (!s1 || !set)
		return (0);
	while (*s1 && check_symbol(set, *s1) == 1)
		s1++;
	len_s1 = ft_strlen(s1);
	while (len_s1 - 1 >= 0 && check_symbol(set, s1[len_s1 - 1]) == 1)
		len_s1--;
	dst = ft_substr((char*)s1, 0, len_s1);
	return (dst);
}
