#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char *temp1;
	unsigned char *temp2;

	temp1 = (unsigned char *)dst;
	temp2 = (unsigned char *)src;
	if (!n || dst == src)
		return (dst);
	while (n--)
		*temp1++ = *temp2++;
	return (dst);
}
