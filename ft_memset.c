/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogokdas <ogokdas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 17:44:10 by ogokdas           #+#    #+#             */
/*   Updated: 2025/06/11 19:05:31 by ogokdas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdio.h"
#include "stdlib.h"

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
int main()
{
	int a[2];

	a[0] = 1;
	a[1] = 31;

	ft_memset(&a[0],1,2);
	ft_memset(&a[0],188,1);
	printf("a: %d\n", a[0]);
}