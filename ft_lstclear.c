#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list *buffer;

	while (*lst)
	{
		buffer = (*lst)->next;
		ft_lstdelone((*lst),del);
		*lst = buffer;
	}
}
/*
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
	new = (t_list*)malloc(sizeof(t_list));
	*list = one;
	one->content = strdup(ptr);
	one->next	= two;
	two->content = strdup(ptr1);
	two->next 	= NULL;
	printf("%s",one->content);
	ft_lstclear(list,del);

	//printf("%s",one->content);
}*/
