/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppitavy <ppitavy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/24 07:43:07 by ppitavy           #+#    #+#             */
/*   Updated: 2021/01/08 03:01:48 by ppitavy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

int SIZE(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
        i++;
        
    return(i);
}

char *ft_strjoin(char const *s1, char const *s2)
{
    int S3_SIZE = 0;
    char *s3;
    int a = 0;
    int b = 0;

    while (s1[b] != '\0')
    {
        s3[b] = s1[b] + 48;
        b++; 
    }

    while (s2[a] != '\0')
    {
        s3[b] = s2[a] + 48;
        a++;
        b++;
    }
    printf("b = %d", b);
    s3[b] = '\0';
    
    S3_SIZE = SIZE(s3);

    if (!(s3 = malloc(sizeof(char) * (S3_SIZE + 1))))
		return (s3 = 0);

    return (s3);
}

int main()
{
    char *s1 = "Hello";
    char *s2 = "World";

    
    printf("resultat = %s", ft_strjoin(s1, s2));

}
