
#include "libft.h"

size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}
/*
int main()
{
	char *str;

    str = "lazy";
    printf("%zu\n",ft_strlen(str));
    printf("%zu\n",ft_strlen(NULL));
    printf("%zu\n",ft_strlen('\0'));
    printf("%zu\n",ft_strlen(""));
}
*/
