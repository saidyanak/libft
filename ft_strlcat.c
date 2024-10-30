#include <stddef.h>
#include "libft.h"

size_t  ft_strlcat(char *dst, const char *src, size_t dstsize)
{
    size_t  dstSize;
    size_t  i;

    dstSize = ft_strlen(dst);
    if (dstsize != 0)
    {
        i = 0;
        while ((i + dstSize < dstsize - 1) && src[i])
        {
            dst[i + dstSize] = src[i];            
            i++;
        }
    }
    dst[i + dstSize] = 0;
    if (dstSize <= dstsize)
        return (dstsize + ft_strlen(src));
    return (i + dstSize + ft_strlen(src));
}