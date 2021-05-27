#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char *temp1;
	unsigned char *temp2;
	unsigned char *lasttemp1;
	unsigned char *lasttemp2;

	temp1 = (unsigned char *)dst;
	temp2 = (unsigned char *)src;
	if (!len || dst == src)
		return (dst);
	if (temp1 < temp2)
	{
		while (len--)
			*temp1++ = *temp2++;
	}
	else
	{
		lasttemp1 = temp1 + len - 1;
		lasttemp2 = temp2 + len - 1;
		while (len--)
			*lasttemp1-- = *lasttemp2--;
	}
	return (dst);
}
