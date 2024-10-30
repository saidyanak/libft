#include <stddef.h>
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
    int  sizeS;

    sizeS = ft_strlen(s);
    while (sizeS >= 0)
    {
        if (s[sizeS] == (char)c)
            return ((char *)&s[sizeS]);
        sizeS--;
    }
    return (NULL);
}