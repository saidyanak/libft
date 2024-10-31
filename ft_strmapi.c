#include "libft.h"

char	*ft_strmapi(char const *s, char(*f)(unsigned int, char))
{
	char	*ret;
	unsigned	int	i;

	if(!s)
		return (NULL);
	ret = (char*)malloc(sizeof(char) * ft_strlen(s));
	if (!ret)
		return (NULL);
	i = 0;
	while (s[i])
	{
		ret[i] = f(i,s[i]);
		i++;
	}
	ret[i] = 0;
	return (ret);
}
