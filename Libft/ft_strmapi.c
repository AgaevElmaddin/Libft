#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*dst;
	size_t	i;

	if (!s || !f)
		return (NULL);
	i = 0;
	dst = (char*)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!dst)
		return (NULL);
	else
	{
		while (i < ft_strlen(s))
		{
			dst[i] = f(i, s[i]);
			i++;
		}
		dst[i] = '\0';
	}
	return (dst);
}
