#include "libft.h"

static int	ft_step(int n)
{
	int	i;

 	i = 0;
	if (n < 0)
		i++;
	while (n)
	{
		n /= 10;
		i++;
	}
	return (i);
}


char	*ft_itoa(int	n)
{
	char	*ret;
	long	nmbr;
	int		step;

	nmbr = n;
	if (n < 0)
		nmbr = -nmbr;
	step = ft_step(n);
	ret = (char*)malloc(sizeof(char) * step + 1);
	if (!ret)
		return(0);
	if (n < 0)
		ret[0] = '-';
	while (nmbr)
	{
		ret[step - 1] = (nmbr % 10) + 48;
		nmbr /= 10;
		step--;
	}
	ret[ft_strlen(ret)] = 0;
	return (ret);
}
