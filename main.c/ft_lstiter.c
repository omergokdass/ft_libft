
#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*start;

	if (!f)
		return ;
	start = lst;
	while (start)
	{
		f(start->content);
		start = start ->next;
	}
}

void upper(void *a)
{
 	char *c = (char *)a;
 	int i = 0;
 	while (c[i])
 	{
 		if(c[i]>= 'a' && c[i] <= 'z')
 		c[i] -= 32;
 		i++; 
 	}
}

int main()
{
	t_list *n1 = ft_lstnew(ft_strdup("en "));
	t_list *n2 = ft_lstnew(ft_strdup("büyük "));
	t_list *n3 = ft_lstnew(ft_strdup("fener\n"));

	n1->next = n2;
	n2->next = n3;

	ft_lstiter(n1,upper);
	while(n1)
	{
		printf("%s",(char *)n1->content);
		n1 = n1->next; 
	}
}
