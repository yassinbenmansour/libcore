
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f) (unsigned int, char))
{
	unsigned int	index;
	char			*str;

	index = 0;
	if (!s || !f)
		return (NULL);
	str = (char *)malloc(ft_strlen(s) + 1);
	if (str == NULL)
		return (NULL);
	while (s[index] != '\0')
	{
		str[index] = f(index, s[index]);
		index++;
	}
	str[index] = '\0';
	return (str);
}

// #include <stdio.h>
//
// char shift(unsigned int i, char c)
// {
// 	return c + 1;
// }
//
// int main()
// {
// 	char 	str[] = "absddzed";
// 	printf("%s\n",ft_strmapi(NULL, NULL));
// }
