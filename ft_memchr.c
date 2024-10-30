#include <stddef.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
    size_t  i;
    const char *ret;

    ret = (const char *)s;
    i = 0;
    while (i < n)
    {
        if (ret[i] == (char)c)
            return ((void *)&ret[i]);
        i++;
    }
    return (NULL);
}