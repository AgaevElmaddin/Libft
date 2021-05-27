#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t dst_len;
	size_t src_len;
	size_t i;
	size_t j;

	dst_len = 0;
	src_len = ft_strlen(src);
	i = 0;
	j = 0;
	while (dst[i] != '\0' && dst_len < dstsize)
	{
		i++;
		dst_len++;
	}
	if (dstsize != 0)
	{
		while (src[j] != '\0' && i < dstsize - 1)
			dst[i++] = src[j++];
	}
	if (i < dstsize)
		dst[i] = '\0';
	return (dst_len + src_len);
}
