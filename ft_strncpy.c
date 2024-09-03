/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abreuil <abreuil@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/02 20:14:32 by abreuil           #+#    #+#             */
/*   Updated: 2024/08/30 22:16:31 by abreuil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dest, char *src, int n)
{
	int	i;

	i = 0;
	while (src[i] && i < n)
		{
			dest[i] = src[i];
			i++;
		}
	while (i < n)
		{
			dest[i] = '\0';
			i++;
		}
	return (dest);
}

/*int main() {
    char src[] = "Hello, world!";
    char dest1[20];
    char dest2[20];
    char dest3[20];
    char dest4[5];

    // Test case 1: Copying part of the string
    ft_strncpy(dest1, src, 5);
    printf("Test 1 (Copy 5 chars): '%s'\n", dest1); // Output: "Hello"

    // Test case 2: Copying the whole string
    ft_strncpy(dest2, src, sizeof(src));
    printf("Test 2 (Copy full string): '%s'\n", dest2); // Output: "Hello, world!"

    // Test case 3: Copying with n larger than src length
    ft_strncpy(dest3, src, 20);
    printf("Test 3 (Copy with n > src length): '%s'\n", dest3); // Output: "Hello, world!" with null padding

    // Test case 4: Copying with n smaller than src length
    ft_strncpy(dest4, src, 4);
    dest4[4] = '\0'; // Manually null-terminate to print properly
    printf("Test 4 (Copy 4 chars): '%s'\n", dest4); // Output: "Hell"

    return 0;
}
*/