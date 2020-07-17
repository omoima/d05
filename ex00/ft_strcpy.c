/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omoima <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/17 11:03:20 by omoima            #+#    #+#             */
/*   Updated: 2020/07/17 11:21:03 by omoima           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


char 	*ft_strcpy(char *dest, char *src){
	int 	len;
	len = 0;

	while (src[len]){
		dest [len] = src[len];
		len++;
	}
	dest[len] = '\0';

	return dest;
}