#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

static	char	*ft_print(char const *ptr, char len)
{
	char	*ret;
	size_t	i;

	ret = (char*)malloc(sizeof(char) * len + 1);
	if(!ret)
		return (NULL);
	i = 0;
	while (i < len && ptr[i])
	{
		ret[i] = ptr[i];
		i++;
	}
	ret [i] = 0;
	return (ret);
}

static	int	ft_count(char const *s, char c)
{
	int	count;

	count = 0;
	while (*s)
	{
		if(*s == c)
			count++;
		s++;
	}
	return (count + 1);
}

char	**ft_split(char const *s, char c)
{
	int	count;
	char	**ret;
	size_t	k;
	char	const	*start;

	count = ft_count(s,c);
	ret = (char **)malloc(sizeof(char*) * (count + 1));
	if (!ret)
		return (NULL);
	k = 0;
	start = s;
	while (*s)
	{
		if(*s == c)
		{
			ret[k] = ft_print(start ,s - start);
			k++;
			start = s + 1;
		}
		s++;
	}
	ret[k] = ft_print(start , s - start);
	ret[k + 1] = NULL;
	return (ret);
}

int main()
{
	char	deneme[] = "den1e1me1234";
	char **ret = ft_split(deneme,'1');
	int i = 0;
	while (ret[i])
	{
		printf("%s\n",ret[i]);
		i++;
	}
}
