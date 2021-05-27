#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int len;

	len = ft_strlen(s);
	while (*s)
		s++;
	while (len >= 0)
	{
		if (*s == c)
			return ((char *)s);
		s--;
		len--;
	}
	return (0);
}
