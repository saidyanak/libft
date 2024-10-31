/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syanak <syanak@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 19:33:42 by syanak            #+#    #+#             */
/*   Updated: 2024/10/30 19:33:49 by syanak           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strjoin(char const *s1, char const *s2)
{
    char    *ret;
    size_t  s1Len;
    size_t  s2Len;

    if (!s1 && !s2)
        return (NULL);
    s1Len = ft_strlen(s1);
    s2Len = ft_strlen(s2);
    ret = (char*)malloc(sizeof(char) * (s1Len + s2Len + 1));
    if (!ret)
        return (NULL);
    while (*s1)
        *ret++ = *s1++;
    while (*s2)
        *ret++ = *s2++;
    *ret = 0;
    return (ret - (s1Len + s2Len));
}
