#include <stddef.h>
#include <stdio.h>


void	*ft_memcpy(void *dst, const void *src, size_t n)
{
    int i;

    i = 0;
    if (!dst && !src)
        return (NULL);
    while (i < n)
    {
        ((char *)dst)[i] = ((char *)src)[i];
        i++;
    }
    return (dst);
}

int main()
{
    int a[] = {1,2,3,4,5,1};
    int b[] = {6,5,4,3,5,255};
    ft_memcpy(a,b,21);
    int i = 0;
    while (i < 6)
    {
        printf("%d\n",a[i]);
        i++;
    }

}
