/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogokdas <ogokdas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/14 11:53:16 by ogokdas           #+#    #+#             */
/*   Updated: 2025/06/14 11:53:19 by ogokdas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t len)
{
	size_t			i;
	unsigned char	*str;

	str = s;
	if (!s)
		return (NULL);
	i = 0;
	while (i < len)
	{
		str[i] = (unsigned char)c;
		i++;
	}
	return (s);
}

#include <stdio.h>

int main ()
{
	int a[] = {1, 44, 8};
	ft_memset(a,255,4);
	ft_memset(a,255,2);
	ft_memset(a,0,1);
	printf("%d\n",a[0]);
}
