
#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;
	size_t	mem_size;

	if (count == SIZE_MAX && size == SIZE_MAX)
		return (NULL);
	mem_size = count * size;
	ptr = malloc(mem_size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, mem_size);
	return (ptr);
}

// int main()
// {
//     int *arr;
//     size_t count = 5;
//     size_t size = sizeof(int);

//     arr = (int *)ft_calloc(count, size);
//     if (!arr)
//     {
//         printf("Allocation échouée\n");
//         return (1);
//     }

//     for (size_t i = 0; i < count; i++)
//     {
//         printf("arr[%zu] = %d\n", i, arr[i]); 
//     }

//     free(arr);
//     return (0);
// }
