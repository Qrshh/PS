#include "../includes/push_swap.h"

void	ft_error(char *msg)
{
	ft_putendl_fd(msg, 1);
	exit(0);
}

void	ft_free(char **str)
{
	int i = 0;

	while(str[i])
		i++;
	while(i >= 0)
		free(str[i--]);
}

int	is_sorted(t_stack **stack)
{
	t_stack *head;

	head = *stack;
	while(head && head->next)
	{
		if(head->value > head->next->value)
			return(0);
		head = head->next;
	}
	return(1);
}

int	get_distance(t_stack **stack, int index)
{
	t_stack	*head;
	int distance = 0;

	head = *stack;
	while(head)
	{
		if(head->index == index)
			break;
		distance++;
		head = head->next;
	}
	return(distance);
}

void	free_stack(t_stack **stack)
{
	t_stack	*head;
	t_stack	*tmp;

	head = *stack;
	while(head)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
	free(stack);
}