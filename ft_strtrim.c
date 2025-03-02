
#include "libft.h"

static int	is_exist(const char *ptr, char c)
{
	int	i;

	i = 0;
	while (ptr[i])
	{
		if (ptr[i] == c)
		{
			return (1);
		}
		i++;
	}
	return (0);
}

static int	get_end(const char *s1, const char *set)
{
	int	len;

	len = ft_strlen(s1);
	if (len == 0)
		return (0);
	while (--len)
	{
		if (is_exist(set, s1[len]) == 0)
			return (len);
	}
	return (0);
}

static int	get_start(const char *s1, const char *set)
{
	int	i;

	i = 0;
	while (s1[i])
	{
		if (is_exist(set, s1[i]) == 0)
			return (i);
		i++;
	}
	return (-1);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	int	end;
	int	start;

	if (!s1 || !set)
		return ((char *)s1);
	start = get_start(s1, set);
	end = get_end(s1, set);
	if (start < 0)
		return (ft_strdup(""));
	return (ft_substr(s1 + start, 0, (end - start + 1)));
}
// #include <stdio.h>

// int	main(void)
// {
// 	const char	*s1 = "ba ter  ab";
// 	const char	*s2 = "ab";

// 	printf("%s\n", ft_strtrim(NULL, s2));
// }
