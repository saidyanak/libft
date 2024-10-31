#include "libft.h"
#include <stdlib.h>

char    *ft_strdub(const char *s1)
{
     char  *ret;

    if (!s1)
        return (NULL);
    ret = (char*)malloc(ft_strlen(s1) * sizeof(char) + 1);
    if (!ret)
        return (NULL);
    ft_memcpy(ret,s1,ft_strlen(s1) + 1);
    ret[ft_strlen(s1)+1] = 0;
    return (ret);
}
