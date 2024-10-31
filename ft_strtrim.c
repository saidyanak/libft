#include "libft.h"

static	int	ft_chrcmpr(char chr, char const *str)
{
	size_t	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == chr)
		{
			return (1);
		}
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	end;
	size_t	start;
	char	*ret;
	size_t	i;

	start = 0;
	end = ft_strlen(s1);
	while (ft_chrcmpr(s1[start],set))
		start++;
	while (start < end && ft_chrcmpr(s1[end - 1], set))
		end--;
	ret = (char*)malloc(sizeof(char) * (end - start + 1));
	if (!ret)
		return (NULL);
	i = 0;
	while (start < end)
		ret[i++] = s1[start++];
	ret[i] = 0;
	return (ret);
}
