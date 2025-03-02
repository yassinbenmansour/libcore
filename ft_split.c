
#include "libft.h"

static size_t	count_words(char const *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (s && s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		if (s[i])
			count++;
		while (s[i] != c && s[i])
			i++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	size_t	start;
	size_t	end;
	size_t	i;

	tab = (char **)malloc((count_words(s, c) + 1) * (sizeof(char *)));
	if (!tab)
		return (NULL);
	start = 0;
	end = 0;
	i = 0;
	while (i < count_words(s, c))
	{
		while (s[start] == c)
			start++;
		end = start;
		while (s[end] != c && s[end])
			end++;
		tab[i] = ft_substr(s, start, (end - start));
		start = end;
		i++;
	}
	tab[i] = 0;
	return (tab);
}
// #include <stdio.h>
//
// int main()
// {
// 	int i = 0;
//     char **test = ft_split(NULL, '\0');
//     while(test[i])
// 	{
// 		printf("%s", test[i]);
// 		i++;
// 	}
// 	return 0;
// }
