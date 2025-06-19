#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*s;
	size_t	i;
	size_t	last_index;

	i = 0;
	if (!s1 || !set)
		return (NULL);
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	last_index = ft_strlen(s1) -1;
	while (ft_strchr(set, s1[last_index]) && last_index)
		last_index--;
	s = ft_substr(s1, i, last_index - i + 1);
	return (s);
}

#include <stdio.h>
int main()
{
	char const *s1 = "   omer gokdas 44        ";
	printf("%s\n",ft_strtrim(s1," "));
}