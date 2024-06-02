
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