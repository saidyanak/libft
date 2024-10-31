#include "libft.h"
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst)
	{
		if (*lst)
			new->next = *lst;
		*lst = new;
	}

}

int main()
{
	t_list	**list;
	t_list *one;
	t_list *two;
	t_list	*new;

	list = (t_list**)malloc(sizeof(t_list*));
	one = (t_list*)malloc(sizeof(t_list));
	two = (t_list*)malloc(sizeof(t_list));
	new = (t_list*)malloc(sizeof(t_list));
	*list = one;
	one->content = "said";
	one->next	= two;
	two->content = "yanak";
	two->next 	= NULL;
	new->content = "alalsdlasd";
	ft_lstadd_front(list,new);
	while (*list)
	{
		printf("%s",(*list)->content);
		list = &(*list)->next ;
	}
}
