
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;
	int	size;

	size = (int)ft_strlen(s);
	i = size;
	while (i > 0 || i == 0)
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i--;
	}
	return (NULL);
}
/*
int main()
{
	char s1[20] = "yassine ";
    printf("fst occurence %s .\n", ft_strrchr(s1, 'f'));
}
*/
