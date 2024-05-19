#include"push_swap.h"

int	get_index_arr(char *arr, int len, int nb)
{
	int	i;

	i = 0;
	while (i < len)
	{
		if (arr[i] == nb)
			return (i);
		i++;
	}
	return (i);
}

void    *create_array(t_list **a)
{
    int i;
    // t_var var;
    char *s;
    
    i = 0;
	t_list *tmp = *a;
    s = malloc(sizeof(char) * size_of_stack(a));
    if (!s)
        return(NULL);
	while(tmp)
	{
		s[i] = tmp->value;
		// printf("%d\n", s[i]);
		tmp = tmp->next;
		i++;
	}
    return(s);
}

void	*sort_arr(char *a)
{
	unsigned long i, j, temp;
	for (i = 0; i < (strlen(a) - 1); ++i)
	{
		for (j = 0; j < strlen(a) - 1 - i; ++j)
		{
			if (a[j] > a[j + 1])
			{
				temp = a[j + 1];
				a[j + 1] = a[j];
				a[j] = temp;
			}
		}
	}
	return (a);
}

void func(t_list **a, t_list **b)
{
   char *s;
    s = get_index_arr(sort_arr(create_array(a)), size_of_stack(b), 1);
}