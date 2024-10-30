#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    unsigned int  i;
    unsigned int  k;

    i = 0;
    k = 0;
    if (needle[0] == '\0')
        return ((char*)haystack);
    while (haystack[i] && i < len)
    {
        k = 0;
        while (haystack[i + k] &&  haystack[i + k] == needle[k] && i + k < len)
            k++;
        if (k == ft_strlen(needle))
            return ((char *)&haystack[i]);
        i++;
    }
    return (0);
}