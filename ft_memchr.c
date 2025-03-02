
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	char	*str;

	i = 0;
	str = (char *)s;
	while (i < n)
	{
		if ((unsigned char)str[i] == (unsigned char)c)
			return ((void *)s + i);
		i++;
	}
	return (NULL);
}

// int	main(void)
// {
// 	char k[] = "yassine";
// 	char *str;
// 	str =ft_memchr(k, 'a',4);
// 	printf("%s\n",str);
// 	str = memchr(k, 'a',4);
// 	printf("%s\n",str);

// }
