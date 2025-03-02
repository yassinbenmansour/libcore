
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while ((s1[i] == s2[i]) && s1[i] != 0 && i < n - 1)
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

#include <stdio.h>
int main()
{
	char s1[10] = "yassine";
	char s2[10] = "yassine";

	// printf("ft_strncmp %d .\n", ft_strncmp(NULL,s2,2));
	printf("strncmp %d .\n",    strncmp(NULL,s2,2));
}

