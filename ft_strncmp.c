/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabenman <yabenman@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 20:02:48 by yabenman          #+#    #+#             */
/*   Updated: 2024/08/21 23:53:19 by yabenman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while ((s1[i] == s2[i]) && s1[i] != 0 && s2[i] != 0 && i < n - 1)
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
/*
int main()
{
	char s1[10] = "lazy ";
	char s2[10] = "lazy ";

	printf("ft_strncmp %d .\n", ft_strncmp(s1,s2,2));
	printf("strncmp %d .\n",    strncmp(s1,s2,2));
}
*/