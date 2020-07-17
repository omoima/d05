/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omoima <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/17 11:25:35 by omoima            #+#    #+#             */
/*   Updated: 2020/07/17 11:39:48 by omoima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


char 	*ft_strncpy(char *dest, char *src, unsigned int n){
	int 	i;
	int 	len;
	int max;
	i = 0;
	len = 0;
	max =n;

	while (src[len]){
		dest[len] = src[len];
		len++;
	}
	dest[len] = '\0';
	i = len;
	if (max > len){
		while (i < max){
			dest[i] = '\0';
			i++;
		}
	}
	return dest;
}
