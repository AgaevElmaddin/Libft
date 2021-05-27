#include "libft.h"

static	int		number_of_words(char const *s, int c)
{
	unsigned int i;
	unsigned int j;

	if (!s[0])
		return (0);
	i = 0;
	j = 0;
	while (s[i] && s[i] == c)
		i++;
	while (s[i])
	{
		if (s[i] == c)
		{
			j++;
			while (s[i] && s[i] == c)
				i++;
			continue;
		}
		i++;
	}
	if (s[i - 1] != c)
		j++;
	return (j);
}

static	int		len_of_word(char const *s, int c)
{
	int	i;

	i = 0;
	while (*s != c && *s)
	{
		i++;
		s++;
	}
	return (i);
}

static	char	**malloc_free(char **dst)
{
	int i;

	i = 0;
	while (dst[i])
	{
		free(dst[i]);
		i++;
	}
	free(dst);
	return (NULL);
}

char			**ft_split(char const *s, char c)
{
	char	**dst;
	int		j;
	int		k;
	int		i;

	if (!s)
		return (NULL);
	i = number_of_words(s, c);
	k = 0;
	if (!(dst = (char **)malloc(sizeof(char *) * (i + 1))))
		return (NULL);
	while (k < i)
	{
		j = 0;
		while (*s == c)
			s++;
		if (!(dst[k] = (char *)malloc(sizeof(char) * (len_of_word(s, c) + 1))))
			return (malloc_free(dst));
		while (*s != c && *s)
			dst[k][j++] = *s++;
		dst[k++][j] = '\0';
	}
	dst[k] = NULL;
	return (dst);
}
