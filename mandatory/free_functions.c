
#include "../includes/push_swap.h"
void	free_stack(t_list *head)
{
	t_list *tmp;
	
	while(head)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}

void	free_strr(char **str)
{
	int	i;

	i = 0;
	while (str[i] != NULL)
	{
		free(str[i]);
		i++;
	}
	free(str);
}
// void free_all_lists(t_data_with_list data_array[], int size)
// {
//   for (int i = 0; i < size; i++)
//   {
//     if (data_array[i].list != NULL)
// 	{
//       t_list* current = data_array[i].list;
//       while (current != NULL)
// 	  {
//         t_list* next = current->next;
//         free(current);
//         current = next;
//       }
//     //   data_array[i].list = NULL;
//     }
//   }
// }


// void	print_errr_and_free_all(t_list *head, char **split, int n)
// {
// 	if (split != NULL)
// 	{
// 		while(split[n])
// 		{
// 			free(split[n]);
// 			n++;
// 		}
// 		free (split);
// 	}
// 	free_stack(head);
// 	print_error();
// 	exit (1);
// }e