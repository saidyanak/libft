#include "libft.h"

char    *ft_strjoin(char const *s1, char const *s2)
{
    size_t  lenS1;
    size_t  lenS2;
    char    *ret;

    lenS1 = ft_strlen(s1);
    lenS2 = ft_strlen(s2);
    ret = (char*)malloc(sizeof(char) * (lenS1 + lenS2 + 1));
}