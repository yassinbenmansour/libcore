
#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	if (needle[0] == '\0')
		return ((char *)haystack);
	if (haystack == NULL && len == 0)
		return (NULL);
	i = 0;
	while (haystack[i] != '\0')
	{
		j = 0;
		while (haystack[i + j] == needle[j] && i + j < len)
		{
			if (needle[j + 1] == '\0')
				return ((char *)&haystack[i]);
			if (haystack[i + j + 1] != needle[j + 1])
				break ;
			j++;
		}
		i++;
	}
	return (NULL);
}

// #include <stdio.h>
// #include <string.h>
// int main()
// {
// 	char	*s1 = "SASDASEAWEAFFASEAS F F FF ";
// 	char	*s2 = "FF";
// 	size_t	max = strlen(s1);

// 	char	*i2 = ft_strnstr(s1, s2, max);
//         printf("%s\n",i2);
// }
