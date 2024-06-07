/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: souzddou <souzddou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 11:43:57 by souzddou          #+#    #+#             */
/*   Updated: 2024/05/30 16:02:01 by souzddou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

// static int	ft_count_words(char const *str, char c)
// {
// 	int	i;
// 	int	count;

// 	i = 0;
// 	count = 0;
// 	while (str[i] != '\0')
// 	{
// 		if (str[i] == c)
// 			i++;
// 		else
// 		{
// 			count++;
// 			while (str[i] && str[i] != c)
// 				i++;
// 		}
// 	}
// 	return (count);
// }

// static char	*ft_fillarry(char *word, char const *s, int i, int word_len)
// {
// 	int	j;

// 	j = 0;
// 	while (word_len > 0)
// 	{
// 		word[j] = s[i - word_len];
// 		j++;
// 		word_len--;
// 	}
// 	word[j] = '\0';
// 	return (word);
// }

// static void	free_all(char **s2, int i)
// {
// 	if (!s2)
// 		return ;
// 	while (i >= 0)
// 		free(s2[i--]);
// 	free(s2);
// 	return ;
// }

// static char	**ft_split_words(char const *s, char c, char **s2, int num_words)
// {
// 	int	i;
// 	int	word;
// 	int	word_len;

// 	i = 0;
// 	word = 0;
// 	word_len = 0;
// 	while (word < num_words)
// 	{
// 		while (s[i] && s[i] == c)
// 			i++;
// 		while (s[i] && s[i] != c)
// 		{
// 			i++;
// 			word_len++;
// 		}
// 		s2[word] = (char *)malloc(sizeof(char) * (word_len + 1));
// 		if (!s2[word])
// 			return (free_all(s2, word - 1), NULL);
// 		ft_fillarry(s2[word], s, i, word_len);
// 		word_len = 0;
// 		word++;
// 	}
// 	s2[word] = 0;
// 	return (s2);
// }

// char	**ft_split(char const *s, char c)
// {
// 	char **s2;
// 	unsigned int num_words;

// 	if (!s)
// 		return (0);
// 	num_words = ft_count_words(s, c);
// 	s2 = (char **)malloc(sizeof(char *) * (num_words + 1));
// 	if (!s2)
// 		return (0);
// 	s2[num_words] = 0;
// 	s2 = ft_split_words(s, c, s2, num_words);
// 	return (s2);
// }

static size_t	ft_count_words(const char *s, char c)
{
	size_t	counter;

	counter = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
		{
			counter++;
			while (*s && *s != c)
				s++;
		}
	}
	return (counter);
}

static void	ft_words_make(char *word, const char *s, size_t j, size_t word_len)
{
	size_t	i;

	i = 0;
	while (word_len)
	{
		word[i] = s[j - word_len];
		i++;
		word_len--;
	}
	word[i] = '\0';
}

static void	*free_str(char **result, size_t i)
{
	while (i > 0)
		free(result[--i]);
	free(result);
	return (NULL);
}

static char	**ft_words_split(char **result, char const *s, char c,
		size_t word_count)
{
	size_t	i;
	size_t	j;
	size_t	word_len;

	i = 0;
	j = 0;
	word_len = 0;
	while (s[j] && i < word_count)
	{
		while (s[j] && (s[j] == c))
			j++;
		while (s[j] && s[j] != c)
		{
			j++;
			word_len++;
		}
		result[i] = (char *)malloc(sizeof(char) * (word_len + 1));
		if (!result[i])
			(free_str(result, i));
		ft_words_make(result[i], s, j, word_len);
		word_len = 0;
		i++;
	}
	result[i] = NULL;
	return (result);
}

char	**ft_split(char const *s, char c)
{
	size_t	word_counter;
	char	**result;

	if (s == NULL)
		return (NULL);
	word_counter = ft_count_words(s, c);
	result = (char **)malloc(sizeof(char *) * (word_counter + 1));
	if (!result)
		return (NULL);
	result = ft_words_split(result, s, c, word_counter);
	return (result);
}