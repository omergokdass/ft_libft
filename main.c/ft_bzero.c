/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogokdas <ogokdas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/14 11:51:52 by ogokdas           #+#    #+#             */
/*   Updated: 2025/06/14 11:51:55 by ogokdas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, '\0', n);
}
#include <stdio.h>

// int main(void)
// {
// 	char str[] = "hello";
// 	int i = 0;

// 	ft_bzero(str, 3);  // İlk 3 karakteri sıfırla

// 	// Ekranda karakterleri ve ASCII değerlerini yazdır
// 	while (i < 5)  // Toplam 5 karakter vardı: 'h', 'e', 'l', 'l', 'o'
// 	{
// 		printf("str[%d] = '%c' (%d)\n", i, str[i], str[i]);
// 		i++;
// 	}

// 	return 0;
// }