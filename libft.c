/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdarchiv <tdarchiv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/04 14:00:15 by tdarchiv          #+#    #+#             */
/*   Updated: 2018/05/04 14:02:00 by tdarchiv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

#include <unistd.h>
#include <stddef.h>

size_t	ft_strlen(const char *s)
{
	size_t i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

void	ft_putendl(char const *s)
{
	if (ALLOW_SILENT_FAIL && (s == NULL))
		return ;
	write(STDOUT_FILENO, s, ft_strlen(s));
	write(STDOUT_FILENO, "\n", 1);
}

void	ft_putchar(char c)
{
	write(STDOUT_FILENO, &c, 1);
}

void	*ft_memset(void *dest, int value, size_t count)
{
	size_t i;

	i = 0;
	while (i < count)
	{
		((char*)dest)[i] = (unsigned char)(value);
		i++;
	}
	return (dest);
}

void	*ft_memcpy(void *dst, const void *src, size_t count)
{
	size_t i;

	i = 0;
	while (i < count)
	{
		((char*)dst)[i] = ((char*)src)[i];
		i++;
	}
	return (dst);
}
