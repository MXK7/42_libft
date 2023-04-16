/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpoussie <mpoussie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 10:18:40 by mpoussie          #+#    #+#             */
/*   Updated: 2023/04/16 11:07:08 by mpoussie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t		result;
	char	*ret;

	if (count == 0 || size == 0)
		return (NULL);
	result = count * size;
	ret = malloc(result);
	ft_bzero(ret, result);
	return (ret);
}

#include <stdio.h>
#include <stdlib.h>

int main() {
    int size = 5;
    int* arr = (int*) calloc(size, sizeof(int));
    
    if (arr == NULL) {
        printf("Allocation failed.");
        return 1;
    }
    
    printf("Array elements before initialization:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    
    // Initialize array elements to zero
    for (int i = 0; i < size; i++) {
        arr[i] = 0;
    }
    
    printf("\n\nArray elements after initialization:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    
    free(arr);
    return 0;
}
