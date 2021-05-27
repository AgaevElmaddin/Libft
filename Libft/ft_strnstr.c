#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t i;
	size_t j;

	i = 0;
	if (needle[0] == '\0' || haystack == needle)
		return (&((char *)haystack)[i]);
	if (ft_strlen(haystack) > ft_strlen(needle))
		while (haystack[i] != '\0' && i < len)
		{
			if (haystack[i] == needle[0])
			{
				j = 0;
				while (haystack[i + j] == needle[j] &&
					haystack[i + j] != '\0' && needle[j] != '\0')
				{
					if (i + j > len)
						return (0);
					j++;
				}
				if (j == ft_strlen(needle))
					return (&((char *)haystack)[i]);
			}
			i++;
		}
	return (0);
}
