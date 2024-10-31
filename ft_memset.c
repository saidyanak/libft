#include <stddef.h>
#include <stdio.h>

void    *ft_memset(void *s, int c, size_t n)
{
    size_t  i;

    i = 0;
    while (i < n)
    {
        ((unsigned char *)s)[i] = (unsigned char )c;
        i++;
    }
    return (s);
}

int main()
{
    char chr[] = "aaaaaa";
    unsigned char utf8_ue[] = {0xC3, 0xBC};
    ft_memset(chr, utf8_ue[0], 1); // İlk byte
    ft_memset(chr + 1, utf8_ue[1], 1);
    ft_memset(chr + 2, utf8_ue[0], 1); // İlk byte
    ft_memset(chr + 3, utf8_ue[1], 1);
    printf("%s",chr);
}
