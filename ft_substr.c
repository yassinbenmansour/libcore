
#include "libft.h"

static unsigned	int	count_len(unsigned int nb, size_t len)
{
	if (nb < len)
		return (nb);
	return (len);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*p;
	unsigned int	i;
	size_t			l;

	if (!s)
		return (NULL);
	l = ft_strlen(s);
	i = 0;
	if (start >= l)
		return (ft_strdup(""));
	len = count_len((l - start), len);
	p = (char *)malloc(sizeof(char) * (len + 1));
	if (!p)
		return (NULL);
	while (i < len)
	{
		p[i] = s[start + i];
		i++;
	}
	p[i] = '\0';
	return (p);
}
// #include <stdio.h>
//
// int main()
// {
// 	char	*str = "i just want this part #############";
// 	char	*ret = ft_substr(NULL,NULL,NULL);
//   	printf("%s\n",ret);
// 	return 0;
// }
