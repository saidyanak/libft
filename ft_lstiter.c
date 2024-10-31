#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}

}
/*
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void	f(void *contain)
{
	char *s = contain;
	int i = 0;

	while (s[i])
	{
		s[i] = ft_toupper((int)s[i]);
		i++;
	}
}

int main()
{
	t_list	**list;
	t_list *one;
	t_list *two;
	t_list	*new;
	char *ptr = "said";
	char *ptr1 = "yanak";


	list = (t_list**)malloc(sizeof(t_list*));
	one = (t_list*)malloc(sizeof(t_list));
	two = (t_list*)malloc(sizeof(t_list));
	*list = one;
	one->content = strdup(ptr);
	one->next	= two;
	two->content = strdup(ptr1);
	two->next = NULL;
	ft_lstiter(*list,f);
	while (*list)
	{
		printf("%s",(*list)->content);
		*list = (*list)->next;
	}

}
*/
