#include "libft.h"

char    *ft_strdub(const char *s1)
{
    const char  *ret;

    if (!s1)
        return (NULL);
    ret = (const char*)malloc(ft_strlen(s1) * sizeof(char) + 1);
    if (!ret)
        return (NULL);
    ft_memcpy(ret,s1,ft_strlen(ret));
    return (ret);
}