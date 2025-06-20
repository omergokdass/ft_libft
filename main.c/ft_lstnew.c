#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*p;

	p = malloc(sizeof(t_list));
	if (!p)
		return (NULL);
	p ->content = content;
	p -> next = NULL;
	return (p);
}

// #include <stdio.h>

// int main()
// {
//     t_list *b;
//     int x = 42;
//     b = ft_lstnew(&x);
//     printf("%d\n", *(int *)(b ->content));
//     if(b->next == NULL)
//         printf("null");
// }