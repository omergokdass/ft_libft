
#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*p;
	size_t	total_size;

	p = malloc(count * size);
	if (size != 0 && count > ((size_t)-1) / size)
		return (NULL);

	total_size = count * size;
	p = malloc(total_size);
	if (!p)
		return (NULL);
	ft_bzero(p, count * size);
	return	(p);
}

#include <stdio.h>

int main(void)
{
	char *arr = ft_calloc(4,sizeof(char));
	int i = 0;
	while (i < 4) 
	{
		printf("str[%d] = '%c' (%d)\n", i, arr[i], arr[i]);
		i++;
	}
}
