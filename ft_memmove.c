#include <stddef.h>
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
    if (!dst && !src)
        return (NULL);
    if (dst < src)
        return (ft_memcpy(dst,src,len));    
    while (len--)
        ((unsigned char *)dst)[len] = ((const unsigned char *)src)[len];
    return dst;
}